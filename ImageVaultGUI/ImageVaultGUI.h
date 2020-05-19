#pragma once

#include <QtWidgets>
#include "ui_ImageVaultGUI.h"

class ImageVaultGUI : public QMainWindow
{
	Q_OBJECT

public:
	ImageVaultGUI(QWidget *parent = Q_NULLPTR);

private slots:
	void loadFile();	// for Open button
	void saveImageFile();
	void saveToImageFile();
	void saveTextFile();	// for Save button
	void saveToTextFile();	// for Save As button
	void zoomIn();
	void zoomOut();
	void encryptMode();	// Control application mode
	void decryptMode();
	void encryptDecryptFile();
	void about();
	void help();
	void test();

private:
	Ui::ImageVaultGUIClass ui;

	int confirmationDialog(QString title, QString info);	// Currently unused

	bool uiEnabled = false;
	void enableUI();		// Enables the sidebar

	QImage image;
	QString openedFileName;
	double scaleFactor = 1;		// For scaling the image

	QString userText;	// Used to hold user input text
	bool decrypt;	// Used for which mode is selected (false for encrypt, true for decrypt)

	enum encryptType {leastSignificantBits, vigenere, tripleVigenere};	// Enum to control encrypt method
	encryptType method = leastSignificantBits;	// Variable to store selected method type, with default value
	QString passkey;	// Holds the passkey, if one exists
	QImage encryptedImage;	// Image to be modified
	QString decodedText;	// Text 

	void vigenereEncrypt(QString passkey);
	void vigenereDecrypt(QString passkey);
	void triVigEncrypt(QString passkey);
	void triVigDecrypt(QString passkey);
	void encryptFile();
	void decryptFile();
	void showText();
	void selectMode();

	void showPreview(const QImage &imageName);
	void loadPreview(const QString &fileName);
	void scaleImage(double factor);
	void adjustScrollbar(QScrollBar *scrollBar, double factor);
};