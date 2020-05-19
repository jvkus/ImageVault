#include "ImageVaultGUI.h"

ImageVaultGUI::ImageVaultGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.action_Open, SIGNAL(triggered()), this, SLOT(loadFile()));
	connect(ui.action_Save, SIGNAL(triggered()), this, SLOT(saveImageFile()));
	connect(ui.action_Save_As, SIGNAL(triggered()), this, SLOT(saveToImageFile()));
	// connect(ui.action_Image_Vault_Help, SIGNAL(triggered()), this, SLOT());	// TODO: Add slot function
	connect(ui.action_Version, SIGNAL(triggered()), this, SLOT(about()));

	connect(ui.DecryptEncryptButton, SIGNAL(clicked()), this, SLOT(encryptDecryptFile()));	

	connect(ui.EncryptRadio, SIGNAL(clicked()), this, SLOT(encryptMode()));
	connect(ui.DecryptRadio, SIGNAL(clicked()), this, SLOT(decryptMode()));

	connect(this, SIGNAL(focusChanged()), this, SLOT(test()));
	// TODO: Currently, these actions don't exist in the actual UI. Get some buttons going.
	// connect(ui.action_Zoom_In, SIGNAL(triggered()), this, SLOT(zoomIn()));
	// connect(ui.action_Zoom_Out, SIGNAL(triggered()), this, SLOT(zoomOut()));

}

// Made with reference to https://stackoverflow.com/questions/17191124/qdialog-with-ok-and-cancel-buttons
int ImageVaultGUI::confirmationDialog(QString title, QString info) {
	QMessageBox alertBox;
	alertBox.setWindowTitle(title);
	alertBox.setInformativeText(info);
	alertBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	alertBox.setDefaultButton(QMessageBox::No);	// If the user hits enter quickly, the operation is
												// cancelled by default
	return alertBox.exec();
}

void ImageVaultGUI::enableUI() {
	if (!uiEnabled) {
		uiEnabled = true;
		ui.sidebar->setStyleSheet("QFrame#userInteractSpace { background-color: #191934; }"	// Brighten sidebar background
			"#DecryptRadio, #EncryptRadio  { color: #5b5b80; background-color: #11111e; }" // Darken unselected radio button
			"#DecryptRadio:checked,  #EncryptRadio:checked { color: #ccccff; background-color: #3c3c80; }");	
			
		for (auto&& child : ui.sidebar->findChildren<QLabel *>()) {	// Enable all QLabel children
			child->setEnabled(true);
		}

		// Enable the fields that the user will use to interact with the program
		ui.EncryptionKey->setEnabled(true);
		ui.comboBox->setEnabled(true);
		ui.plainTextEdit->setEnabled(true);
		ui.DecryptEncryptButton->setEnabled(true);
		// ui.DecryptEncryptButton->setGraphicsEffect(ui.ButtonGlow);	// Adds glow to the button

		// Make button and progress bar visible
		ui.DecryptEncryptButton->setVisible(true);
		ui.ProgressLabel->setVisible(true);
		ui.DecryptProgress->setVisible(true);
	}
}

// Should only be used to load images
// Error, fails to locate .bmp files when file type is not set to *all
void ImageVaultGUI::loadFile() {
	// Brings up file browser
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Open File"), "",
		tr("Image Files (*.bmp *.gif *.jpeg *.png);;All Files (*)"));

	if (fileName.isEmpty()) {
		QMessageBox::information(this, tr("Error"), "No file name entered.");
		return;
	}
	else {
		QFile file(fileName);

		if (!file.open(QIODevice::ReadOnly)) {
			QMessageBox::information(this, tr("Could not open file."),
				file.errorString());
			return;
		}

		openedFileName = fileName;
		QDataStream in(&file);	// Creates data stream for file
	}

	loadPreview(fileName);
}

// Modified, should only write out the encrypted image
// Need to prevent this function from being called if nothing has been encrypted
// WARNING: This function will overwrite the source image. This is probably not ideal
void ImageVaultGUI::saveImageFile() {
	QImageWriter writer(openedFileName);
	if (openedFileName.isEmpty()) {	// If string has no characters
		QMessageBox::information(this, tr("Error"), "No file name entered. [DEBUG: This should not happen!]");
		return;
	}
	else {
		QFile file(openedFileName);
		if (!file.open(QIODevice::WriteOnly)) {	// If device is not open for writing
			QMessageBox::information(this, tr("Could not open file for writing."),
				file.errorString());
			return;
		}

		writer.write(encryptedImage);
	}
}

// Modified, same as above
// Error when saving, file type not selected correctly. Has to be manually entered
void ImageVaultGUI::saveToImageFile() {
	QString fileName = QFileDialog::getSaveFileName(this,
		tr("Save File"), "",
		tr("Image Files (*.bmp *.gif *.jpeg *.png);;All Files (*)"));

	QImageWriter writer(fileName);
	if (fileName.isEmpty()) {
		QMessageBox::information(this, tr("Error"), "Please enter a file name.");
		return;
	}
	else {
		QFile file(fileName);
		if (!file.open(QIODevice::WriteOnly)) {	// If device could not be opened for writing
			QMessageBox::information(this, tr("Could not open file for writing."),
				file.errorString());
			return;
		}

		writer.write(encryptedImage);	// Write to file
		return;
	}
}

// Test to make sure this works.
void ImageVaultGUI::saveTextFile() {
	if (openedFileName.isEmpty()) {
		QMessageBox::information(this, tr("Error"), "No file name entered. [DEBUG: This should not happen!]");
		return;
	}
	else {
		QFile file(openedFileName);
		if (!file.open(QIODevice::WriteOnly)) {
			QMessageBox::information(this, tr("Could not open file for writing."),
				file.errorString());
			return;
		}

		QDataStream out(&file);
		out << decodedText;
		file.close();
		return;
	}
}

void ImageVaultGUI::saveToTextFile() {
	// Gets save file name
	QString fileName = QFileDialog::getSaveFileName(this,
		tr("Save Decrypted Text"), "",
		tr("Text Files (*.txt);;All Files (*)"));

	if (fileName.isEmpty()) {
		QMessageBox::information(this, tr("Error"), "Please enter a file name.");
		return;
	}
	else {
		QFile file(fileName);
		if (!file.open(QIODevice::WriteOnly)) {	// If device could not be opened for writing
			QMessageBox::information(this, tr("Could not open file for writing."),
				file.errorString());
			return;
		}

		QDataStream out(&file);	// Write to file
		out << decodedText;
		file.close();
		return;
	}
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::showPreview(const QImage &imageName) {
	image = imageName;

	/*
	if (imageName.colorSpace().isValid())
		image.convertToColorSpace(QColorSpace::SRgb);	// COLORSPACE MAY BE IMPORTANT FOR ENCRYPTION PURPOSES
	*/

	ui.imageLabel->setPixmap(QPixmap::fromImage(image));
	ui.imageLabel->adjustSize();
	scaleFactor = 1.0;

	ui.imageLabel->setVisible(true);
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::loadPreview(const QString &fileName) {	// loads image preview into application
	QImageReader reader(fileName);
	reader.setAutoTransform(true);
	const QImage imageFile = reader.read();
	if (imageFile.isNull()) {
		QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
			tr("Cannot load %1: %2")
			.arg(QDir::toNativeSeparators(fileName), reader.errorString()));

		return;
	}

	showPreview(imageFile);
	setWindowFilePath(fileName);
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::adjustScrollbar(QScrollBar *scrollBar, double factor) {
	scrollBar->setValue(int(factor * scrollBar->value()
								+ ((factor - 1) * scrollBar->pageStep() / 2)));
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::scaleImage(double factor) {
	Q_ASSERT(ui.imageLabel->pixmap());	// Assert that there is an image loaded in preview area
	scaleFactor *= factor;				// Set scaling of image
	ui.imageLabel->resize(scaleFactor * ui.imageLabel->pixmap()->size());	// Resize image preview

	// Adjust scroll bars
	adjustScrollbar(ui.scrollArea->horizontalScrollBar(), factor);
	adjustScrollbar(ui.scrollArea->verticalScrollBar(), factor);

	// Enable or disable zoom in/out based on out much the user has zoomed
	// TODO: Once zoom functions are hooked up to UI, change these to work with the buttons 
	// ui.action_Zoom_In->setEnabled(scaleFactor < 3.0);
	// ui.action_Zoom_Out->setEnabled(scaleFactor > 0.33);
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::zoomIn() {
	scaleImage(1.25);
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::zoomOut() {
	scaleImage(0.8);
}

// Calls sub functions to carry out encrypt or decrypt
// This function DOES NOT modify the original image
void ImageVaultGUI::encryptDecryptFile()
{
	ui.DecryptEncryptButton->setEnabled(false);	// Disable encrypt/decrypt button while function is running
	ui.DecryptProgress->setTextVisible(true);

	// This line causes access violation errors when active.
	// Not sure how to fix it, so it'll be commented out.
	// ui.DecryptEncryptButton->setGraphicsEffect(ui.NoEffect);
	
	// User must have an image loaded first
	// More advanced future use will open the image load dialog for user
	if (image.isNull())
	{
		QMessageBox::information(this, tr("Error"), "Please open an image first.");
		return;
	}

	// Find which method to use
	selectMode();

	// Get the passkey
	// Will attempt operation even if field is blank
	passkey = ui.EncryptionKey->text();

	userText = ui.plainTextEdit->toPlainText();

	ui.DecryptProgress->setValue(0);

	// Delimiter
	// TODO: Needs to be more complex...
	if (!(ui.EncryptionKey->text().isEmpty()))
	{
		passkey.append(' ');
	}

	// Call the correct function
	if (decrypt)
	{
		decryptFile();
	}
	else
	{
		if (userText.isEmpty())
		{
			// Check for user input first
			QMessageBox::information(this, tr("Error"), "Please enter text to encrypt.");
			return;
		}
		else
		{
			encryptFile();
		}
	}

	ui.DecryptEncryptButton->setEnabled(true);	// Reenable encrypt/decrypt button
	// ui.DecryptEncryptButton->setGraphicsEffect(ui.ButtonGlow);
}

// Uses vigenère cipher techniques to scramble the original message
void ImageVaultGUI::vigenereEncrypt(QString passkey) {
	int passLength = passkey.size();

	for (int i = 0; i < userText.size(); i++) {
		char16_t tempChar = userText[i].unicode();

		tempChar += passkey[i % passLength].unicode() - 32;
		tempChar = (tempChar - 32) % 256 + 32;	// Limits unicode to values 32 - 287

		userText[i] = tempChar;
	}
}

// Uses the passkey to decrypt the decoded text with a vigenère cipher
void ImageVaultGUI::vigenereDecrypt(QString passkey) {
	// Should overflow back to 32 >= when it hits 288. 287 is the maximum valid value.
	int passLength = passkey.size();

	for (int i = 0; i < decodedText.size(); i++) {
		char16_t tempChar = decodedText[i].unicode();

		tempChar -= passkey[i % passLength].unicode() + 32;
		tempChar = (tempChar + 32) % 256 + 32;	// Limits unicode to values 32 - 287

		decodedText[i] = tempChar;
	}
}

// Uses the passkey to encrypt the text with three layers of a vigenère cipher
void ImageVaultGUI::triVigEncrypt(QString passkey) {
	// Run vig encryption once
	vigenereEncrypt(passkey);
	
	// Run second layer of vig encryption
	QString passkeyOffset = passkey.left(ceil(passkey.size() / 3));	// Gets first third (rounded up) of passkey characters
	QString shiftedPasskey = passkeyOffset + passkey;	// Offset passkey by a third of its characters
	vigenereEncrypt(shiftedPasskey);

	// Run third layer of vig encryption
	passkeyOffset = passkey.left(ceil(passkey.size() / 2)); // Gets first half (rounded up) of passkey characters
	shiftedPasskey = passkeyOffset + passkey;
	vigenereEncrypt(shiftedPasskey);
}

// Uses the passkey to decrypt the text with three layers of a vigenère cipher
// Only works on an image that was encrypted with the triVigEncrypt function
void ImageVaultGUI::triVigDecrypt(QString passkey) {
	QString passkeyOffset1 = passkey.left(ceil(passkey.size() / 2));
	QString passkeyOffset2 = passkey.left(ceil(passkey.size() / 3));

	// Reverse third layer of vig encryption
	QString shiftedPasskey = passkeyOffset1 + passkeyOffset2 + passkey;
	vigenereDecrypt(shiftedPasskey);

	// Reverse second layer of vig encryption
	shiftedPasskey = passkeyOffset2 + passkey;
	vigenereDecrypt(shiftedPasskey);

	// Reverse first layer of vig encryption
	vigenereDecrypt(passkey);
}

void ImageVaultGUI::encryptFile()
{
	if (passkey.isEmpty() && method == leastSignificantBits)
	{
		QMessageBox::warning(this, tr("Warning"), "This image will be encrypted without a passkey.");
	}

	// Ensure the pixel layout is known
	// This is necessary for the algorithm to function correctly
	image.convertToFormat(QImage::Format_RGB32);

	// Information about the picture
	// Used to construct a final image later
	// Also used to perform action on pixels
	int width = image.width();
	int height = image.height();
	int bytesPerLine = image.bytesPerLine();
	int sizeInBytes = image.sizeInBytes();

	if (passkey.isEmpty() && method != leastSignificantBits)
	{
		QMessageBox::warning(this, tr("Warning"), "Passkey Required.");
		return;
	}

	if (method == vigenere)
	{
		vigenereEncrypt(passkey);
	}

	if (method == tripleVigenere)
	{
		triVigEncrypt(passkey);
	}
	

	int passkeyLength = passkey.size();
	int messageLength = userText.size();

	bool passKeyUsed = false;

	if (passkeyLength > 0)
	{
		passKeyUsed = true;
	}

	// BGR[A] internal memory format
	int blue = 0;
	int pixelWidth = 4;

	int i = 0;

	unsigned char tempPixel;
	unsigned char modPixel;

	char16_t tempChar;
	char16_t modChar;

	// Get a pointer to the raw pixel data
	// Note: Not really a pointer to the original pixel data
	// This performs a deep copy of the originals pixel data and 
	// produces a pointer to the copy
	uchar * data = image.bits();

	// All use the same encoder
	if (method == leastSignificantBits || method == vigenere || method == tripleVigenere)
	{
		// Insert header
		// 1323 = Encrypted no passkey
		// 3112 = Encrypted with passkey
		for (i; i < 4; i++)
		{
			tempPixel = data[(i * pixelWidth) + blue];

			modPixel = (tempPixel & 0b11111100);

			if (i == 0)
			{
				if (passKeyUsed)
				{
					modPixel += 3;
				}
				else
				{
					modPixel += 1;
				}

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else if (i == 1)
			{
				if (passKeyUsed)
				{
					modPixel += 1;
				}
				else
				{
					modPixel += 3;
				}

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else if (i == 2)
			{
				if (passKeyUsed)
				{
					modPixel += 1;
				}
				else
				{
					modPixel += 2;
				}

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else
			{
				if (passKeyUsed)
				{
					modPixel += 2;
				}
				else
				{
					modPixel += 3;
				}

				data[(i * pixelWidth) + blue] = modPixel;
			}
		}

		ui.DecryptProgress->setValue(15);

		// Insert passkey
		// Do not insert the passkey for other methods
		if (passKeyUsed && method == leastSignificantBits)
		{
			// Will need 4x as many pixels as the number of char
			for (i; i < (passkeyLength * 4) + 4; i++)
			{
				tempPixel = data[(i * pixelWidth) + blue];

				modPixel = (tempPixel & 0b11111100);


				if (i % 4 == 0)
				{
					// Only get a new character once for every 4 passes
					tempChar = passkey[(i - 4) / 4].unicode();

					modChar = (tempChar >> 6);

					modPixel += modChar;

					data[(i * pixelWidth) + blue] = modPixel;
				}
				else if (i % 4 == 1)
				{
					modChar = (tempChar & 0b00110000);

					modChar = (modChar >> 4);

					modPixel += modChar;

					data[(i * pixelWidth) + blue] = modPixel;
				}
				else if (i % 4 == 2)
				{
					modChar = (tempChar & 0b00001100);

					modChar = (modChar >> 2);

					modPixel += modChar;

					data[(i * pixelWidth) + blue] = modPixel;
				}
				else
				{
					modChar = (tempChar & 0b00000011);

					modPixel += modChar;

					data[(i * pixelWidth) + blue] = modPixel;
				}

			}

		}

		ui.DecryptProgress->setValue(35);

		// Correct offset change if passkey not inserted
		if (method == vigenere || method == tripleVigenere)
		{
			passkeyLength = 0;
		}

		// Insert the main message
		// Make sure to run all the way through the message
		// i starts at a higher value than zero
		// Adjust end position
		// Check to make sure message does not overrun space
		int offset = (passkeyLength * 4) + 4;
		for (i; i < (userText.size() * 4) + offset && i < sizeInBytes; i++)
		{
			tempPixel = data[(i * pixelWidth) + blue];

			modPixel = (tempPixel & 0b11111100);


			if (i % 4 == 0)
			{
				// Only get a new character once for every 4 passes
				tempChar = userText[(i - offset) / 4].unicode();

				modChar = (tempChar >> 6);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else if (i % 4 == 1)
			{
				modChar = (tempChar & 0b00110000);

				modChar = (modChar >> 4);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else if (i % 4 == 2)
			{
				modChar = (tempChar & 0b00001100);

				modChar = (modChar >> 2);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else
			{
				modChar = (tempChar & 0b00000011);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
		}

		// New offset
		offset = (passkeyLength * 4) + (userText.size() * 4) + 4;

		ui.DecryptProgress->setValue(85);
		
		// Inset EOM for decryption
		// Will need 4x as many pixels as the number of char
		// Need 16 pixels, " EOM"

		QString endOfMessage = " EOM ";

		for (i; i < offset + 16; i++)
		{
			tempPixel = data[(i * pixelWidth) + blue];

			modPixel = (tempPixel & 0b11111100);


			if (i % 4 == 0)
			{
				// Only get a new character once for every 4 passes
				tempChar = endOfMessage[(i - offset) / 4].unicode();

				modChar = (tempChar >> 6);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else if (i % 4 == 1)
			{
				modChar = (tempChar & 0b00110000);

				modChar = (modChar >> 4);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else if (i % 4 == 2)
			{
				modChar = (tempChar & 0b00001100);

				modChar = (tempChar >> 2);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}
			else
			{
				modChar = (tempChar & 0b00000011);

				modPixel += modChar;

				data[(i * pixelWidth) + blue] = modPixel;
			}

		}

		ui.DecryptProgress->setValue(95);

		
	}
	else
	{
		QMessageBox::warning(this, tr("Warning"), "Fault in encoder method selector.");
		return;
	}

	// Assemble the new data into an image
	QImage tempImage(data, width, height, bytesPerLine, QImage::Format_RGB32);

	// Copy over to encryptedImage so it can be saved later
	encryptedImage = tempImage;

	ui.DecryptProgress->setValue(100);
}

void ImageVaultGUI::decryptFile()
{
	if (method == leastSignificantBits || method == vigenere || method == tripleVigenere)
	{
		if (passkey.isEmpty() && method != leastSignificantBits)
		{
			QMessageBox::warning(this, tr("Warning"), "Passkey Required.");
			return;
		}

		// Ensure the pixel layout is known
		// Auto set Alpha to max to prevent conversion problems later
		image.convertToFormat(QImage::Format_RGB32);

		// Information about the picture
		// Used to construct a final image later
		// Also used to perform action on pixels
		int width = image.width();
		int height = image.height();
		int bytesPerLine = image.bytesPerLine();
		int sizeInBytes = image.sizeInBytes();

		// Internal format of memory BGR[A]
		int blue = 0;
		int pixelWidth = 4;

		int i = 0;

		unsigned char tempPixel;
		unsigned char modPixel;

		char16_t modChar = u' ';

		// Zero out this character
		modChar = (modChar & 0b00000000);

		QString decodedMessage;
		QString decodedWord;

		// Get a pointer to the raw pixel data
		uchar * data = image.bits();

		QVector<int> mode(4,0);

		// Obtain header
		// 1323 = Encrypted no passkey
		// 3112 = Encrypted with passkey
		for (i; i < 4; i++)
		{
			tempPixel = data[(i * pixelWidth) + blue];

			modPixel = (tempPixel & 0b00000011);

			if (i == 0)
			{
				mode[i] = (int)modPixel;
			}
			else if (i == 1)
			{
				mode[i] = (int)modPixel;
			}
			else if (i == 2)
			{
				mode[i] = (int)modPixel;
			}
			else
			{
				mode[i] = (int)modPixel;
			}
		}

		ui.DecryptProgress->setValue(15);

		bool validHeader;
		bool passKeyUsed;

		QVector<int> modeNoPasskey{ 1,3,2,3 };
		QVector<int> modePasskey{ 3,1,1,2 };

		if (mode == modeNoPasskey)
		{
			validHeader = true;
			passKeyUsed = false;
		}
		else if (mode == modePasskey)
		{
			validHeader = true;
			passKeyUsed = true;
		}
		else
		{
			validHeader = false;
		}

		// The header is corrupt, incorrect type, or this is not an incoded image
		if (!validHeader)
		{
			QMessageBox::warning(this, tr("Serious Error"), "File header missing or corrupted.");
			return;
		}

		int passkeyLength = passkey.size();

		// The passkey is not in the header in other methods
		if (method == leastSignificantBits)
		{
			// Check if the user entered an unnecessary passkey
			if (passkeyLength > 0 && !(passKeyUsed))
			{
				QMessageBox::warning(this, tr("Warning"), "This file does not have passkey protection.");
			}


			// Decode and check the passkey if necessary
			if (passKeyUsed)
			{
				// Delimits end of password
				bool STOP = false;

				// Will need 4x as many pixels as the number of char
				for (i; !(STOP) && (i < (passkeyLength * 4) + 4); i++)
				{
					tempPixel = data[(i * pixelWidth) + blue];

					modPixel = (tempPixel & 0b00000011);


					if (i % 4 == 0)
					{
						modChar += (modPixel << 6);
					}
					else if (i % 4 == 1)
					{
						modChar += (modPixel << 4);
					}
					else if (i % 4 == 2)
					{
						modChar += (modPixel << 2);
					}
					else
					{
						modChar += modPixel;

						if (modChar == ' ')
						{
							STOP = true;
						}

						// Push the char onto a string
						decodedWord.append(modChar);

						// Reset the character
						modChar = (modChar & 0b00000000);
					}

				}

				if (decodedWord != passkey || decodedWord.isEmpty() || !(STOP))
				{
					QMessageBox::warning(this, tr("Error"), "Passkey does not match.");
					return;
				}
				else
				{
					// Reset the word to decode text
					decodedWord.clear();
				}

			}
		}

		ui.DecryptProgress->setValue(50);

		// Decode the actual message
		// Will need 4x as many pixels as the number of char

		bool EOM = false;

		for (i; !(EOM) && (i < sizeInBytes - 4); i++)
		{
			tempPixel = data[(i * pixelWidth) + blue];

			modPixel = (tempPixel & 0b00000011);

			if (i % 4 == 0)
			{
				modChar += (modPixel << 6);
			}
			else if (i % 4 == 1)
			{
				modChar += (modPixel << 4);
			}
			else if (i % 4 == 2)
			{
				modChar += (modPixel << 2);
			}
			else
			{
				modChar += modPixel;

				// Push the char onto a string
				if (modChar != ' ')
				{
					decodedWord.append(modChar);
				}

				// Is ths a complete word?
				if (modChar == ' ')
				{
					decodedMessage.append(decodedWord);

					// Clear for next word
					decodedWord.clear();

					// Append the blank to the front of the next word
					decodedWord.append(modChar);
				}

				// Check if EOM signal recieved
				// The last space beyond EOM is only a delimiter
				if (decodedWord == " EOM")
				{
					EOM = true;
				}

				// Reset the character
				modChar = (modChar & 0b00000000);
			}

			ui.DecryptProgress->setValue(95);

		}


		// Make the text available to the program
		if (method == leastSignificantBits)
		{
			decodedText = decodedMessage;
		}
		else if (method == vigenere)
		{
			decodedText = decodedMessage;
			vigenereDecrypt(passkey);
		}
		else if (method == tripleVigenere)
		{
			decodedText = decodedMessage;
			triVigDecrypt(passkey);
		}
		else
		{
			QMessageBox::warning(this, tr("Warning"), "Fault in decoder selector.");
			return;
		}

		ui.DecryptProgress->setValue(100);

		showText();
	}
	else
	{
		QMessageBox::warning(this, tr("Warning"), "Fault in decode method selector.");
		return;
	}
	
}

// Displays the decoded message
// TEMPORARY DISPLAY METHOD
// FIX TO MAKE PROPER OUTPUT
void ImageVaultGUI::showText()
{
	bool ok;
	QInputDialog::getMultiLineText(this, tr("Decoded Message"), tr("Text"), decodedText, &ok);
}

// Created with ref to https://doc.qt.io/qt-5/qinputdialog.html#getMultiLineText
/*
void ImageVaultGUI::enterText()
{
	bool ok;
	QString text = QInputDialog::getMultiLineText(this, tr("Enter your message"),
		tr("Your Secret Message"), "Enter your message here...", &ok);

	if (ok && !text.isEmpty())
	{
		userText = text;
	}
}
*/

void ImageVaultGUI::encryptMode()
{
	enableUI();
	decrypt = false;
	ui.DecryptProgress->setValue(0);
	ui.DecryptProgress->setTextVisible(false);
	ui.DecryptRadio->setChecked(false);
	ui.EnterTextLabel->setEnabled(true);
	ui.plainTextEdit->setEnabled(true);
	ui.DecryptEncryptButton->setText("ENCRYPT FILE");
}

void ImageVaultGUI::decryptMode()
{
	enableUI();
	decrypt = true;
	ui.DecryptProgress->setValue(0);
	ui.DecryptProgress->setTextVisible(false);
	ui.EncryptRadio->setChecked(false);
	ui.EnterTextLabel->setEnabled(false);
	ui.plainTextEdit->setEnabled(false);
	ui.DecryptEncryptButton->setText("DECRYPT FILE");
}

void ImageVaultGUI::about() {
	QMessageBox::about(this, tr("About ImageVault"),
		tr("<p>Version 1.0</p>"
			"<p>Developed by Mike Livesey and Joanna Kus for "
			"Elmhurst College CS 475, Spring 2020.</p>"));
}

void ImageVaultGUI::test() {
	
}

void ImageVaultGUI::selectMode()
{
	int temp;
	encryptType mode;

	temp = ui.comboBox->currentIndex();

	if (temp == 0)
	{
		mode = leastSignificantBits;
	}
	else if (temp == 1)
	{
		mode = vigenere;
	}
	else if (temp == 2)
	{
		mode = tripleVigenere;
	}

	method = mode;
}