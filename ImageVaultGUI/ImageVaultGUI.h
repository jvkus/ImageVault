#pragma once

#include <QtWidgets>
#include "ui_ImageVaultGUI.h"

class ImageVaultGUI : public QMainWindow
{
	Q_OBJECT

public:
	ImageVaultGUI(QWidget *parent = Q_NULLPTR);

private slots:
	void loadFile();
	void saveToFile();

private:
	Ui::ImageVaultGUIClass ui;
	QAction *action_Open;	// change to work with menu
	QAction *action_Save;	// change to work with menu
};
