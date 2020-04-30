#include "ImageVaultGUI.h"

ImageVaultGUI::ImageVaultGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.action_Open, SIGNAL(triggered()), this, SLOT(loadFile()));
	connect(ui.action_Save, SIGNAL(triggered()), this, SLOT(saveToTextFile()));
	connect(ui.action_Save_As, SIGNAL(triggered()), this, SLOT(saveTextFile()));
	connect(ui.action_Image_Vault_Help, SIGNAL(triggered()), this, SLOT());	// TODO: Add slot function
	connect(ui.action_Version, SIGNAL(triggered()), this, SLOT());	// TODO: Add slot function
	connect(ui.DecryptEncryptButton, SIGNAL(clicked()), this,
		SLOT(encryptDecryptFile(true, 'a')));	// PLACEHOLDER PARAMS

	ui.scrollArea->setVisible(false);
}

void ImageVaultGUI::loadFile() {	// CURRENTLY DOES NOTHING WITH INPUT DATA
									// Will need to be hooked up to other functions
	// Brings up file browser
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("what does this do"), "",
		tr("PNG Files (*.png);;All Files (*)"));

	if (fileName.isEmpty())
		return;
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

// TODO: Add image file saving functions.

// Test to make sure this works.
void ImageVaultGUI::saveTextFile() {
	if (openedFileName.isEmpty()) {
		// TODO: display error message HERE
		return;
	}
	else {
		QFile file(openedFileName);
		if (!file.open(QIODevice::WriteOnly)) {
			QMessageBox::information(this, tr("Could not open file."),
				file.errorString());
			return;
		}

		QDataStream out(&file);
	}
	// finish function to actually save the file.
}

void ImageVaultGUI::saveToTextFile() {
	QString fileName = QFileDialog::getSaveFileName(this,
		tr("Save decrypted text"), "",
		tr("Text Files (*.txt);;All Files (*)"));

	if (fileName.isEmpty())
		return;
	else {
		QFile file(fileName);
		if (!file.open(QIODevice::WriteOnly)) {
			QMessageBox::information(this, tr("Could not open file."),
				file.errorString());
			return;
		}

		QDataStream out(&file);		// Creates datastream for outfile
									// Currently does nothing with ostream
	}
}

// Created with reference to Image Viewer example https://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-example.html
void ImageVaultGUI::showPreview(const QImage &imageName) {
	image = imageName;

	if (imageName.colorSpace().isValid())
		image.convertToColorSpace(QColorSpace::SRgb);	// COLORSPACE MAY BE IMPORTANT FOR ENCRYPTION PURPOSES
	ui.imageLabel->setPixmap(QPixmap::fromImage(image));
	scaleFactor = 1.0;

	ui.scrollArea->setVisible(true);
	// fitToWindowAct->setEnabled(true);
	// updateActions();
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

	showPreview(imageFile);	// FIX
	setWindowFilePath(fileName);
}

// change or remove params later
void ImageVaultGUI::encryptDecryptFile(bool radioSignal, char encryptType) {
	// TODO: actually write this function
}