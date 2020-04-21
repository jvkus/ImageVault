#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageVaultGUI.h"

class ImageVaultGUI : public QMainWindow
{
	Q_OBJECT

public:
	ImageVaultGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::ImageVaultGUIClass ui;
};
