#include "ImageVaultGUI.h"

ImageVaultGUI::ImageVaultGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.action_Save, SIGNAL(triggered()), this, SLOT(saveToFile()));
	connect(ui.action_Open, SIGNAL(triggered()), this, SLOT(loadFile()));
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

		QDataStream in(&file);	// Creates data stream for file
	}

	//updateUI function goes here to load image preview.
}

void ImageVaultGUI::saveToFile() {
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
