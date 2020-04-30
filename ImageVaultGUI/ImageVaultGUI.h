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
	void saveTextFile();	// for Save button
	void saveToTextFile();	// for Save As button

private:
	Ui::ImageVaultGUIClass ui;

	QAction *action_Open;
	QAction *action_Save;
	QAction *action_Save_As;

	QPushButton *DecryptEncryptButton;	// Button you hit to initiate data encryption
	QProgressBar *DecryptProgress;		// progress bar
	QComboBox *comboBox;		// drop-down menu to pick encryption type
	QLineEdit *EncryptionKey;	// field for typing in passkey

	QImage image;
	QString openedFileName;
	QLabel *imageLabel;
	QScrollArea *scrollArea;
	double scaleFactor = 1;		// For scaling the image

	void showPreview(const QImage &imageName);
	void loadPreview(const QString &fileName);
	void encryptDecryptFile(bool radioSignal, char encryptType);
};
