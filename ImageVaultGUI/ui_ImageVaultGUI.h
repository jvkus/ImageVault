/********************************************************************************
** Form generated from reading UI file 'ImageVaultGUInFrLts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef IMAGEVAULTGUINFRLTS_H
#define IMAGEVAULTGUINFRLTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageVaultGUIClass
{
public:
    QAction *action_Image_Vault_Help;
    QAction *action_Version;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Save_As;
    QAction *actionExit;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *OpenImage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *EncryptionKeyLabel;
    QLineEdit *EncryptionKey;
    QLabel *AlgorithmSelectLabel;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *EncryptRadio;
    QRadioButton *DecryptRadio;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *DecryptEncryptButton;
    QProgressBar *DecryptProgress;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageVaultGUIClass)
    {
        if (ImageVaultGUIClass->objectName().isEmpty())
            ImageVaultGUIClass->setObjectName(QString::fromUtf8("ImageVaultGUIClass"));
        ImageVaultGUIClass->resize(1071, 833);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageVaultGUIClass->sizePolicy().hasHeightForWidth());
        ImageVaultGUIClass->setSizePolicy(sizePolicy);
        action_Image_Vault_Help = new QAction(ImageVaultGUIClass);
        action_Image_Vault_Help->setObjectName(QString::fromUtf8("action_Image_Vault_Help"));
        action_Version = new QAction(ImageVaultGUIClass);
        action_Version->setObjectName(QString::fromUtf8("action_Version"));
        action_Open = new QAction(ImageVaultGUIClass);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(ImageVaultGUIClass);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_Save_As = new QAction(ImageVaultGUIClass);
        action_Save_As->setObjectName(QString::fromUtf8("action_Save_As"));
        actionExit = new QAction(ImageVaultGUIClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(ImageVaultGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(160, 160, 160, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(200, 200, 200, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(80, 80, 80, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(107, 107, 107, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(207, 207, 207, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
        centralWidget->setPalette(palette);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 0, 821, 781));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        OpenImage = new QGraphicsView(gridLayoutWidget);
        OpenImage->setObjectName(QString::fromUtf8("OpenImage"));

        gridLayout->addWidget(OpenImage, 0, 0, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 100, 251, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        EncryptionKeyLabel = new QLabel(verticalLayoutWidget);
        EncryptionKeyLabel->setObjectName(QString::fromUtf8("EncryptionKeyLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EncryptionKeyLabel->sizePolicy().hasHeightForWidth());
        EncryptionKeyLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        EncryptionKeyLabel->setFont(font);
        EncryptionKeyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(EncryptionKeyLabel);

        EncryptionKey = new QLineEdit(verticalLayoutWidget);
        EncryptionKey->setObjectName(QString::fromUtf8("EncryptionKey"));
        sizePolicy1.setHeightForWidth(EncryptionKey->sizePolicy().hasHeightForWidth());
        EncryptionKey->setSizePolicy(sizePolicy1);
        EncryptionKey->setFont(font);
        EncryptionKey->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(EncryptionKey);

        AlgorithmSelectLabel = new QLabel(verticalLayoutWidget);
        AlgorithmSelectLabel->setObjectName(QString::fromUtf8("AlgorithmSelectLabel"));
        AlgorithmSelectLabel->setFont(font);
        AlgorithmSelectLabel->setScaledContents(false);
        AlgorithmSelectLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AlgorithmSelectLabel);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setFont(font);

        verticalLayout->addWidget(comboBox);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 251, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        EncryptRadio = new QRadioButton(verticalLayoutWidget_2);
        EncryptRadio->setObjectName(QString::fromUtf8("EncryptRadio"));
        sizePolicy.setHeightForWidth(EncryptRadio->sizePolicy().hasHeightForWidth());
        EncryptRadio->setSizePolicy(sizePolicy);
        EncryptRadio->setFont(font);

        verticalLayout_2->addWidget(EncryptRadio);

        DecryptRadio = new QRadioButton(verticalLayoutWidget_2);
        DecryptRadio->setObjectName(QString::fromUtf8("DecryptRadio"));
        sizePolicy.setHeightForWidth(DecryptRadio->sizePolicy().hasHeightForWidth());
        DecryptRadio->setSizePolicy(sizePolicy);
        DecryptRadio->setFont(font);

        verticalLayout_2->addWidget(DecryptRadio);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 360, 251, 141));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        DecryptEncryptButton = new QPushButton(gridLayoutWidget_2);
        DecryptEncryptButton->setObjectName(QString::fromUtf8("DecryptEncryptButton"));
        DecryptEncryptButton->setFont(font);

        gridLayout_2->addWidget(DecryptEncryptButton, 1, 0, 1, 1);

        DecryptProgress = new QProgressBar(gridLayoutWidget_2);
        DecryptProgress->setObjectName(QString::fromUtf8("DecryptProgress"));
        DecryptProgress->setFont(font);
        DecryptProgress->setValue(24);

        gridLayout_2->addWidget(DecryptProgress, 3, 0, 1, 1);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 290, 251, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout_3->addWidget(pushButton);

        ImageVaultGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageVaultGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1071, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        ImageVaultGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageVaultGUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ImageVaultGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageVaultGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ImageVaultGUIClass->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_Save_As);
        menu_File->addAction(actionExit);
        menu_Help->addAction(action_Image_Vault_Help);
        menu_Help->addAction(action_Version);

        retranslateUi(ImageVaultGUIClass);
        QObject::connect(pushButton, SIGNAL(clicked()), pushButton, SLOT(show()));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), comboBox, SLOT(update()));
        QObject::connect(EncryptRadio, SIGNAL(toggled(bool)), EncryptRadio, SLOT(update()));
        QObject::connect(DecryptRadio, SIGNAL(toggled(bool)), DecryptRadio, SLOT(update()));
        QObject::connect(DecryptEncryptButton, SIGNAL(clicked()), DecryptEncryptButton, SLOT(update()));
        QObject::connect(DecryptProgress, SIGNAL(valueChanged(int)), DecryptProgress, SLOT(repaint()));

        QMetaObject::connectSlotsByName(ImageVaultGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageVaultGUIClass)
    {
        ImageVaultGUIClass->setWindowTitle(QApplication::translate("ImageVaultGUIClass", "Image Vault", nullptr));
        action_Image_Vault_Help->setText(QApplication::translate("ImageVaultGUIClass", "&Image Vault Help", nullptr));
        action_Version->setText(QApplication::translate("ImageVaultGUIClass", "&Version", nullptr));
        action_Open->setText(QApplication::translate("ImageVaultGUIClass", "&Open", nullptr));
        action_Save->setText(QApplication::translate("ImageVaultGUIClass", "&Save", nullptr));
        action_Save_As->setText(QApplication::translate("ImageVaultGUIClass", "&Save As", nullptr));
        actionExit->setText(QApplication::translate("ImageVaultGUIClass", "&Exit", nullptr));
        EncryptionKeyLabel->setText(QApplication::translate("ImageVaultGUIClass", "Encryption Key", nullptr));
        AlgorithmSelectLabel->setText(QApplication::translate("ImageVaultGUIClass", "Encryption Algorithm", nullptr));
        EncryptRadio->setText(QApplication::translate("ImageVaultGUIClass", "Encrypt", nullptr));
        DecryptRadio->setText(QApplication::translate("ImageVaultGUIClass", "Decrypt", nullptr));
        DecryptEncryptButton->setText(QApplication::translate("ImageVaultGUIClass", "Decrypt", nullptr));
        pushButton->setText(QApplication::translate("ImageVaultGUIClass", "Enter Text", nullptr));
        menu_File->setTitle(QApplication::translate("ImageVaultGUIClass", "&File", nullptr));
        menu_Help->setTitle(QApplication::translate("ImageVaultGUIClass", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageVaultGUIClass: public Ui_ImageVaultGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IMAGEVAULTGUINFRLTS_H
