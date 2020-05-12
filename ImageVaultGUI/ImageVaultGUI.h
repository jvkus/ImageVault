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
	void enterText();	// for text entry button
	void encryptMode();	// Control application mode
	void decryptMode();
	void encryptDecryptFile();
	void about();

private:
	Ui::ImageVaultGUIClass ui;

	int confirmationDialog(QString title, QString info);	// Currently unused

	QAction *action_Open;
	QAction *action_Save;
	QAction *action_Save_As;

	QPushButton *DecryptEncryptButton;	// Button you hit to initiate data encryption
	QProgressBar *DecryptProgress;		// progress bar
	QComboBox *comboBox;		// drop-down menu to pick encryption type
	QLineEdit *EncryptionKey;	// field for typing in passkey
	QPushButton *enterTextButton;	// Brings up text entry dialog

	QRadioButton *EncryptRadio;	// Buttons to control mode of application
	QRadioButton *DecryptRadio;

	QImage image;
	QString openedFileName;
	QLabel *imageLabel;
	QScrollArea *scrollArea;
	double scaleFactor = 1;		// For scaling the image

	QString userText;	// Used to hold user input text
	bool decrypt;	// Used for which mode is selected (false for encrypt, true for decrypt)

	enum encryptType {leastSignificantBits};	// Enum to control encrypt method
	encryptType method = leastSignificantBits;	// Variable to store selected method type, set to default
	QString passkey;	// Holds the passkey, if one exists
	QImage encryptedImage;	// Image to be modified
	QString decodedText;	// Text 

	void encryptFile();
	void decryptFile();

	void showPreview(const QImage &imageName);
	void loadPreview(const QString &fileName);
};
