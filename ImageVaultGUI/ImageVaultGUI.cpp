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

	connect(ui.enterTextButton, SIGNAL(clicked()), this, SLOT(enterText()));
	connect(ui.EncryptRadio, SIGNAL(clicked()), this, SLOT(encryptMode()));
	connect(ui.DecryptRadio, SIGNAL(clicked()), this, SLOT(decryptMode()));

	ui.imageLabel->setVisible(false);
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

// Should only be used to load images
// Error, fails to locate .bmp files when file type is not set to *all
void ImageVaultGUI::loadFile() {
	// Brings up file browser
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Open File"), "",
		tr("Image Files (*.bmp, *.gif, *.jpeg, *.png);;All Files (*)"));

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
		tr("Image Files (*.bmp, *.gif, *.jpeg, *.png);;All Files (*)"));

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
	}
	// finish function to actually save the file.
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
	//ui.scrollBar->setValue(int(factor * ui.scrollBar->value()
	//							+ ((factor - 1) * ui.scrollBar->pageStep() / 2)));
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::scaleImage(double factor) {
	Q_ASSERT(ui.imageLabel->pixmap());	// Assert that there is an image loaded in preview area
	scaleFactor *= factor;				// Set scaling of image
	ui.imageLabel->resize(scaleFactor * ui.imageLabel->pixmap()->size());	// Resize image preview

	// Adjust scroll bars
	// TODO: Add scroll bars to UI
	// adjustScrollbar(ui.scrollArea->horizontalScrollBar(), factor);
	// adjustScrollbar(ui.scrollArea->verticalScrollBar(), factor);

	// Enable or disable zoom in/out based on out much the user has zoomed
	// TODO: Once zoom functions are hooked up to UI, change these to work with the buttons 
	action_Zoom_In->setEnabled(scaleFactor < 3.0);
	action_Zoom_Out->setEnabled(scaleFactor > 0.33);
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
	// User must have an image loaded first
	// More advanced future use will open the image load dialog for user
	if (image.isNull())
	{
		QMessageBox::information(this, tr("Error"), "Please open an image first.");
		return;
	}

	// Get the passkey
	// Will attempt operation even if field is blank
	passkey = ui.EncryptionKey->text();

	ui.DecryptProgress->setValue(0);

	// Delimiter
	// Needs to be more complex...
	passkey.append(' ');

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
			QMessageBox::information(this, tr("Error"), "Please enter text to encrypt first.");
			return;
		}
		else
		{
			encryptFile();
		}
	}

}

void ImageVaultGUI::encryptFile()
{
	if (passkey.isEmpty())
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

	char tempChar;
	char modChar;

	// Get a pointer to the raw pixel data
	// Note: Not really a pointer to the original pixel data
	// This performs a deep copy of the originals pixel data and 
	// produces a pointer to the copy
	uchar * data = image.bits();

	// This is where the method of encryption is determined
	// Case statment would be better
	if (method == leastSignificantBits)
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
		if (passKeyUsed)
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

	// Assemble the new data into an image
	QImage tempImage(data, width, height, bytesPerLine, QImage::Format_RGB32);

	// Copy over to encryptedImage so it can be saved later
	encryptedImage = tempImage;

	ui.DecryptProgress->setValue(100);
}

void ImageVaultGUI::decryptFile()
{
	if (method == leastSignificantBits)
	{
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

		char modChar = ' ';

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
		decodedText = decodedMessage;

		ui.DecryptProgress->setValue(100);

		showText();
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

void ImageVaultGUI::encryptMode()
{
	decrypt = false;
	ui.DecryptProgress->setValue(0);
	ui.DecryptRadio->setChecked(false);
	ui.DecryptEncryptButton->setText("ENCRYPT FILE");
	ui.DecryptEncryptButton->setEnabled(1);
	ui.enterTextButton->setEnabled(1);
}

void ImageVaultGUI::decryptMode()
{
	decrypt = true;
	ui.DecryptProgress->setValue(0);
	ui.EncryptRadio->setChecked(false);
	ui.DecryptEncryptButton->setText("DECRYPT FILE");
	ui.DecryptEncryptButton->setEnabled(1);
	ui.enterTextButton->setDisabled(1);
}

void ImageVaultGUI::about() {
	QMessageBox::about(this, tr("About ImageVault"),
		tr("<p>Version 1.0</p>"
			"<p>Developed by Mike Livesey and Joanna Kus for "
			"Elmhurst College CS 475, Spring 2020.</p>"));
}