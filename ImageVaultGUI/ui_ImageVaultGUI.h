/********************************************************************************
** Form generated from reading UI file 'ImageVaultGUImZdrNV.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef IMAGEVAULTGUIMZDRNV_H
#define IMAGEVAULTGUIMZDRNV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
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
    QGridLayout *previewArea;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *imageLabel;
    QFrame *sidebar;
    QVBoxLayout *sideBar;
    QVBoxLayout *verticalLayout_2;
    QPushButton *EncryptRadio;
    QPushButton *DecryptRadio;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *EncryptionKeyLabel;
    QLineEdit *EncryptionKey;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QLabel *AlgorithmSelectLabel;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_7;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *enterTextButton;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *DecryptEncryptButton;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QProgressBar *DecryptProgress;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QFrame *line_3;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;

    void setupUi(QMainWindow *ImageVaultGUIClass)
    {
        if (ImageVaultGUIClass->objectName().isEmpty())
            ImageVaultGUIClass->setObjectName(QString::fromUtf8("ImageVaultGUIClass"));
        ImageVaultGUIClass->resize(1300, 867);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageVaultGUIClass->sizePolicy().hasHeightForWidth());
        ImageVaultGUIClass->setSizePolicy(sizePolicy);
        ImageVaultGUIClass->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border: 0;\n"
"	color: #eaeaea;\n"
"	background-color: #000015;\n"
"	selection-color: #eaeaea;\n"
"	selection-background-color: #f77411;\n"
"	font: 24pt \"Source Sans Pro\";\n"
"}\n"
"QMenuBar {\n"
"	color: #5b5b80;\n"
"	background-color: #11111e;\n"
"}\n"
"QMenuBar::item {\n"
"	padding: 10px 40px;\n"
"	border-right: 1px solid #191927;\n"
"}\n"
"QMenuBar::item::selected {\n"
"	color: #b5b5ff;\n"
"	background-color: #191934;\n"
"}\n"
"QMenu {\n"
"	color: #b5b5ff;\n"
"	background-color: #11111e;\n"
"	font: 63 14pt \"Source Sans Pro Semibold\";\n"
"	letter-spacing: 5px;\n"
"}\n"
"QMenu::item {\n"
"	border-top: 1px solid #171725;\n"
"	padding-left: 40px;\n"
"	padding-right: 40px;\n"
"	padding-top: 5px;\n"
"	padding-bottom: 10px;\n"
"}\n"
"QMenu::item:selected {\n"
"	color: #d7d7d9;\n"
"	background-color: #26264d;\n"
"}\n"
"QFrame#sidebar {\n"
"	background-color: #101033;\n"
"	color: #ff0000;\n"
"}\n"
"QLabel {\n"
"	color: #5454b3;\n"
"	background: transparent;\n"
"	font: 63 18pt \"Source Sans Pro\";"
                        "\n"
"}\n"
"QRadioButton {\n"
"	color: #eaeaea;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	background: transparent;\n"
"}\n"
"QLineEdit {\n"
"	font: 16pt;\n"
"	color: #ccccff;\n"
"	border: 1px solid #363659;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"}\n"
"QLineEdit:!editable {\n"
"	color: #363659;\n"
"	background-color: #040414;\n"
"}\n"
"QLineEdit:focus {\n"
"	border: 1px solid #18e8a6;\n"
"}\n"
"QComboBox {\n"
"	color: #ccccff;\n"
"	border: 1px solid #363659;\n"
"}\n"
"QComboBox:!editable {\n"
"	color: #363659;\n"
"	background-color: #040414;\n"
"}\n"
"QComboBox:selected {\n"
"	border: 1px solid #18e8a6;\n"
"}\n"
"QPushButton {\n"
"	color: #5454b3;\n"
"	background-color: #1c1c34;\n"
"	border-top: 2px solid #000015;\n"
"	padding: 20px;\n"
"}\n"
"QPushButton:pressed, QPushButton:checked {\n"
"	color: #ccccff;\n"
"	background-color: #3c3c80\n"
"}\n"
"QProgressBar {\n"
"	border: 3px solid #000015;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #00ffe7;\n"
"}\n"
"QScrollArea {\n"
"	bord"
                        "er: none;\n"
"}\n"
"QStatusBar {\n"
"	background-color: #101033;\n"
"}"));
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
        QBrush brush(QColor(234, 234, 234, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 21, 255));
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
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(247, 116, 17, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        QBrush brush9(QColor(207, 207, 207, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        QBrush brush12(QColor(160, 160, 160, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        centralWidget->setPalette(palette);
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        previewArea = new QGridLayout();
        previewArea->setSpacing(0);
        previewArea->setObjectName(QString::fromUtf8("previewArea"));
        previewArea->setSizeConstraint(QLayout::SetDefaultConstraint);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setLineWidth(0);
        scrollArea->setMidLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1071, 759));
        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(320, 170, 441, 401));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy1);
        imageLabel->setAutoFillBackground(false);
        imageLabel->setFrameShape(QFrame::StyledPanel);
        imageLabel->setFrameShadow(QFrame::Sunken);
        imageLabel->setLineWidth(0);
        imageLabel->setTextFormat(Qt::AutoText);
        imageLabel->setScaledContents(true);
        imageLabel->setMargin(5);
        scrollArea->setWidget(scrollAreaWidgetContents);

        previewArea->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_3->addLayout(previewArea, 0, 1, 4, 1);

        sidebar = new QFrame(centralWidget);
        sidebar->setObjectName(QString::fromUtf8("sidebar"));
        sidebar->setFrameShape(QFrame::Panel);
        sidebar->setLineWidth(0);
        sideBar = new QVBoxLayout(sidebar);
        sideBar->setSpacing(0);
        sideBar->setContentsMargins(11, 11, 11, 11);
        sideBar->setObjectName(QString::fromUtf8("sideBar"));
        sideBar->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        EncryptRadio = new QPushButton(sidebar);
        EncryptRadio->setObjectName(QString::fromUtf8("EncryptRadio"));
        EncryptRadio->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(EncryptRadio->sizePolicy().hasHeightForWidth());
        EncryptRadio->setSizePolicy(sizePolicy2);
        EncryptRadio->setMaximumSize(QSize(300, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        EncryptRadio->setFont(font);
        EncryptRadio->setStyleSheet(QString::fromUtf8(""));
        EncryptRadio->setCheckable(true);

        verticalLayout_2->addWidget(EncryptRadio);

        DecryptRadio = new QPushButton(sidebar);
        DecryptRadio->setObjectName(QString::fromUtf8("DecryptRadio"));
        DecryptRadio->setEnabled(true);
        sizePolicy2.setHeightForWidth(DecryptRadio->sizePolicy().hasHeightForWidth());
        DecryptRadio->setSizePolicy(sizePolicy2);
        DecryptRadio->setMaximumSize(QSize(300, 16777215));
        DecryptRadio->setFont(font);
        DecryptRadio->setCheckable(true);

        verticalLayout_2->addWidget(DecryptRadio);


        sideBar->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(0, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        EncryptionKeyLabel = new QLabel(sidebar);
        EncryptionKeyLabel->setObjectName(QString::fromUtf8("EncryptionKeyLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(EncryptionKeyLabel->sizePolicy().hasHeightForWidth());
        EncryptionKeyLabel->setSizePolicy(sizePolicy3);
        EncryptionKeyLabel->setMaximumSize(QSize(300, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(7);
        EncryptionKeyLabel->setFont(font1);
        EncryptionKeyLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        EncryptionKeyLabel->setMargin(2);

        verticalLayout->addWidget(EncryptionKeyLabel);

        EncryptionKey = new QLineEdit(sidebar);
        EncryptionKey->setObjectName(QString::fromUtf8("EncryptionKey"));
        sizePolicy3.setHeightForWidth(EncryptionKey->sizePolicy().hasHeightForWidth());
        EncryptionKey->setSizePolicy(sizePolicy3);
        EncryptionKey->setMaximumSize(QSize(300, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans Pro"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        EncryptionKey->setFont(font2);
        EncryptionKey->setStyleSheet(QString::fromUtf8(""));
        EncryptionKey->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(EncryptionKey);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(sidebar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        AlgorithmSelectLabel = new QLabel(sidebar);
        AlgorithmSelectLabel->setObjectName(QString::fromUtf8("AlgorithmSelectLabel"));
        sizePolicy3.setHeightForWidth(AlgorithmSelectLabel->sizePolicy().hasHeightForWidth());
        AlgorithmSelectLabel->setSizePolicy(sizePolicy3);
        AlgorithmSelectLabel->setMaximumSize(QSize(300, 16777215));
        AlgorithmSelectLabel->setFont(font1);
        AlgorithmSelectLabel->setStyleSheet(QString::fromUtf8(""));
        AlgorithmSelectLabel->setScaledContents(false);
        AlgorithmSelectLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        AlgorithmSelectLabel->setMargin(2);

        verticalLayout->addWidget(AlgorithmSelectLabel);

        comboBox = new QComboBox(sidebar);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);
        comboBox->setMaximumSize(QSize(300, 16777215));
        comboBox->setFont(font);

        verticalLayout->addWidget(comboBox);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        line_2 = new QFrame(sidebar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        enterTextButton = new QPushButton(sidebar);
        enterTextButton->setObjectName(QString::fromUtf8("enterTextButton"));
        enterTextButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(enterTextButton->sizePolicy().hasHeightForWidth());
        enterTextButton->setSizePolicy(sizePolicy2);
        enterTextButton->setMaximumSize(QSize(300, 16777215));
        enterTextButton->setFont(font);
        enterTextButton->setFlat(false);

        verticalLayout->addWidget(enterTextButton);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_8);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(170, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);


        sideBar->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, -1);
        DecryptEncryptButton = new QPushButton(sidebar);
        DecryptEncryptButton->setObjectName(QString::fromUtf8("DecryptEncryptButton"));
        DecryptEncryptButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(DecryptEncryptButton->sizePolicy().hasHeightForWidth());
        DecryptEncryptButton->setSizePolicy(sizePolicy2);
        DecryptEncryptButton->setMaximumSize(QSize(300, 16777215));
        DecryptEncryptButton->setFont(font);
        DecryptEncryptButton->setFlat(false);

        verticalLayout_5->addWidget(DecryptEncryptButton);

        verticalSpacer_6 = new QSpacerItem(170, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        label = new QLabel(sidebar);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMaximumSize(QSize(300, 16777215));
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label);

        DecryptProgress = new QProgressBar(sidebar);
        DecryptProgress->setObjectName(QString::fromUtf8("DecryptProgress"));
        sizePolicy2.setHeightForWidth(DecryptProgress->sizePolicy().hasHeightForWidth());
        DecryptProgress->setSizePolicy(sizePolicy2);
        DecryptProgress->setMaximumSize(QSize(300, 16777215));
        DecryptProgress->setFont(font);
        DecryptProgress->setValue(0);
        DecryptProgress->setAlignment(Qt::AlignCenter);
        DecryptProgress->setTextVisible(true);
        DecryptProgress->setOrientation(Qt::Horizontal);
        DecryptProgress->setInvertedAppearance(false);
        DecryptProgress->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_5->addWidget(DecryptProgress);

        verticalSpacer_12 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_12);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        sideBar->addLayout(verticalLayout_5);


        gridLayout_3->addWidget(sidebar, 1, 0, 1, 1);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        gridLayout_3->addWidget(line_3, 2, 0, 1, 1);

        ImageVaultGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImageVaultGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(true);
        ImageVaultGUIClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(ImageVaultGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1300, 61));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_File->setTearOffEnabled(false);
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Help->setSeparatorsCollapsible(false);
        ImageVaultGUIClass->setMenuBar(menuBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_Save_As);
        menu_File->addAction(actionExit);
        menu_Help->addAction(action_Image_Vault_Help);
        menu_Help->addAction(action_Version);

        retranslateUi(ImageVaultGUIClass);
        QObject::connect(actionExit, SIGNAL(triggered()), ImageVaultGUIClass, SLOT(close()));
        QObject::connect(DecryptEncryptButton, SIGNAL(clicked()), DecryptProgress, SLOT(update()));

        QMetaObject::connectSlotsByName(ImageVaultGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageVaultGUIClass)
    {
        ImageVaultGUIClass->setWindowTitle(QCoreApplication::translate("ImageVaultGUIClass", "Image Vault", nullptr));
        action_Image_Vault_Help->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Image Vault Help", nullptr));
        action_Version->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Version", nullptr));
        action_Open->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Open...", nullptr));
        action_Save->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Save", nullptr));
        action_Save_As->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Save As...", nullptr));
        actionExit->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Exit", nullptr));
        imageLabel->setText(QString());
        EncryptRadio->setText(QCoreApplication::translate("ImageVaultGUIClass", "E N C R Y P T", nullptr));
        DecryptRadio->setText(QCoreApplication::translate("ImageVaultGUIClass", "D E C R Y P T", nullptr));
        EncryptionKeyLabel->setText(QCoreApplication::translate("ImageVaultGUIClass", "Encryption key", nullptr));
        AlgorithmSelectLabel->setText(QCoreApplication::translate("ImageVaultGUIClass", "Encryption algorithm", nullptr));
        enterTextButton->setText(QCoreApplication::translate("ImageVaultGUIClass", "Enter Text...", nullptr));
        DecryptEncryptButton->setText(QCoreApplication::translate("ImageVaultGUIClass", "ENCRYPT FILE", nullptr));
        label->setText(QCoreApplication::translate("ImageVaultGUIClass", "Progress", nullptr));
        menu_File->setTitle(QCoreApplication::translate("ImageVaultGUIClass", "&F I L E", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("ImageVaultGUIClass", "&H E L P", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageVaultGUIClass: public Ui_ImageVaultGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IMAGEVAULTGUIMZDRNV_H
