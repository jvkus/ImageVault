/********************************************************************************
** Form generated from reading UI file 'ImageVaultGUINEXUIR.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef IMAGEVAULTGUINEXUIR_H
#define IMAGEVAULTGUINEXUIR_H

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
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *EncryptionKeyLabel;
    QLineEdit *EncryptionKey;
    QSpacerItem *verticalSpacer_2;
    QLabel *AlgorithmSelectLabel;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QPushButton *DecryptEncryptButton;
    QProgressBar *DecryptProgress;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_10;
    QGraphicsView *OpenImage;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *EncryptRadio;
    QRadioButton *DecryptRadio;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_11;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageVaultGUIClass)
    {
        if (ImageVaultGUIClass->objectName().isEmpty())
            ImageVaultGUIClass->setObjectName(QString::fromUtf8("ImageVaultGUIClass"));
        ImageVaultGUIClass->resize(990, 700);
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
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_9 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_9, 7, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        EncryptionKeyLabel = new QLabel(centralWidget);
        EncryptionKeyLabel->setObjectName(QString::fromUtf8("EncryptionKeyLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EncryptionKeyLabel->sizePolicy().hasHeightForWidth());
        EncryptionKeyLabel->setSizePolicy(sizePolicy1);
        EncryptionKeyLabel->setMaximumSize(QSize(300, 16777215));
        QFont font;
        font.setPointSize(12);
        EncryptionKeyLabel->setFont(font);
        EncryptionKeyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(EncryptionKeyLabel);

        EncryptionKey = new QLineEdit(centralWidget);
        EncryptionKey->setObjectName(QString::fromUtf8("EncryptionKey"));
        sizePolicy1.setHeightForWidth(EncryptionKey->sizePolicy().hasHeightForWidth());
        EncryptionKey->setSizePolicy(sizePolicy1);
        EncryptionKey->setMaximumSize(QSize(300, 16777215));
        EncryptionKey->setFont(font);
        EncryptionKey->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(EncryptionKey);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        AlgorithmSelectLabel = new QLabel(centralWidget);
        AlgorithmSelectLabel->setObjectName(QString::fromUtf8("AlgorithmSelectLabel"));
        sizePolicy1.setHeightForWidth(AlgorithmSelectLabel->sizePolicy().hasHeightForWidth());
        AlgorithmSelectLabel->setSizePolicy(sizePolicy1);
        AlgorithmSelectLabel->setMaximumSize(QSize(300, 16777215));
        AlgorithmSelectLabel->setFont(font);
        AlgorithmSelectLabel->setScaledContents(false);
        AlgorithmSelectLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(AlgorithmSelectLabel);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMaximumSize(QSize(300, 16777215));
        comboBox->setFont(font);

        verticalLayout->addWidget(comboBox);


        gridLayout_3->addLayout(verticalLayout, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 3, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 6, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 6, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_6, 2, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(300, 16777215));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        DecryptEncryptButton = new QPushButton(centralWidget);
        DecryptEncryptButton->setObjectName(QString::fromUtf8("DecryptEncryptButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DecryptEncryptButton->sizePolicy().hasHeightForWidth());
        DecryptEncryptButton->setSizePolicy(sizePolicy2);
        DecryptEncryptButton->setMaximumSize(QSize(300, 16777215));
        DecryptEncryptButton->setFont(font);

        gridLayout_2->addWidget(DecryptEncryptButton, 1, 0, 1, 1);

        DecryptProgress = new QProgressBar(centralWidget);
        DecryptProgress->setObjectName(QString::fromUtf8("DecryptProgress"));
        sizePolicy2.setHeightForWidth(DecryptProgress->sizePolicy().hasHeightForWidth());
        DecryptProgress->setSizePolicy(sizePolicy2);
        DecryptProgress->setMaximumSize(QSize(300, 16777215));
        DecryptProgress->setFont(font);
        DecryptProgress->setValue(24);
        DecryptProgress->setTextVisible(true);
        DecryptProgress->setOrientation(Qt::Horizontal);
        DecryptProgress->setInvertedAppearance(false);

        gridLayout_2->addWidget(DecryptProgress, 4, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_12, 5, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_10 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_10, 1, 1, 1, 1);

        OpenImage = new QGraphicsView(centralWidget);
        OpenImage->setObjectName(QString::fromUtf8("OpenImage"));
        sizePolicy.setHeightForWidth(OpenImage->sizePolicy().hasHeightForWidth());
        OpenImage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(OpenImage, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(1, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 2, 6, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 4, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        EncryptRadio = new QRadioButton(centralWidget);
        EncryptRadio->setObjectName(QString::fromUtf8("EncryptRadio"));
        sizePolicy2.setHeightForWidth(EncryptRadio->sizePolicy().hasHeightForWidth());
        EncryptRadio->setSizePolicy(sizePolicy2);
        EncryptRadio->setMaximumSize(QSize(300, 16777215));
        EncryptRadio->setFont(font);

        verticalLayout_2->addWidget(EncryptRadio);

        DecryptRadio = new QRadioButton(centralWidget);
        DecryptRadio->setObjectName(QString::fromUtf8("DecryptRadio"));
        sizePolicy2.setHeightForWidth(DecryptRadio->sizePolicy().hasHeightForWidth());
        DecryptRadio->setSizePolicy(sizePolicy2);
        DecryptRadio->setMaximumSize(QSize(300, 16777215));
        DecryptRadio->setFont(font);

        verticalLayout_2->addWidget(DecryptRadio);


        gridLayout_3->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 5, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMaximumSize(QSize(300, 16777215));
        pushButton->setFont(font);

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);


        gridLayout_3->addLayout(verticalLayout_3, 5, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 4, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_11, 7, 2, 1, 1);

        ImageVaultGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageVaultGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 990, 21));
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
        QObject::connect(EncryptRadio, SIGNAL(toggled(bool)), DecryptEncryptButton, SLOT(update()));
        QObject::connect(DecryptRadio, SIGNAL(toggled(bool)), DecryptEncryptButton, SLOT(update()));
        QObject::connect(DecryptEncryptButton, SIGNAL(clicked()), DecryptProgress, SLOT(update()));
        QObject::connect(DecryptEncryptButton, SIGNAL(clicked()), OpenImage, SLOT(update()));
        QObject::connect(pushButton, SIGNAL(clicked()), pushButton, SLOT(showMenu()));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), DecryptEncryptButton, SLOT(update()));
        QObject::connect(EncryptionKey, SIGNAL(returnPressed()), DecryptEncryptButton, SLOT(update()));
        QObject::connect(EncryptRadio, SIGNAL(toggled(bool)), pushButton, SLOT(update()));
        QObject::connect(DecryptRadio, SIGNAL(toggled(bool)), pushButton, SLOT(update()));

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
        label->setText(QApplication::translate("ImageVaultGUIClass", "Progress", nullptr));
        DecryptEncryptButton->setText(QApplication::translate("ImageVaultGUIClass", "Decrypt", nullptr));
        EncryptRadio->setText(QApplication::translate("ImageVaultGUIClass", "Encrypt", nullptr));
        DecryptRadio->setText(QApplication::translate("ImageVaultGUIClass", "Decrypt", nullptr));
        pushButton->setText(QApplication::translate("ImageVaultGUIClass", "Enter Text", nullptr));
        menu_File->setTitle(QApplication::translate("ImageVaultGUIClass", "&File", nullptr));
        menu_Help->setTitle(QApplication::translate("ImageVaultGUIClass", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageVaultGUIClass: public Ui_ImageVaultGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IMAGEVAULTGUINEXUIR_H
