#include "ImageVaultGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageVaultGUI w;
	w.show();
	return a.exec();
}
