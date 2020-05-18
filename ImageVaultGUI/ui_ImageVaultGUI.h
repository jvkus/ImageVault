/********************************************************************************
** Form generated from reading UI file 'ImageVaultGUIdIFMQi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef IMAGEVAULTGUIDIFMQI_H
#define IMAGEVAULTGUIDIFMQI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsEffect>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
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
    QFrame *userInteractSpace;
    QVBoxLayout *userSettingSpace;
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
    QLabel *EnterTextLabel;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_5;
    QPushButton *DecryptEncryptButton;
    QSpacerItem *verticalSpacer_6;
    QLabel *ProgressLabel;
    QProgressBar *DecryptProgress;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
	QGraphicsDropShadowEffect *ButtonGlow;
	QGraphicsOpacityEffect *NoEffect;

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
"	selection-background-color: #f71174;\n"
"	font: \"Source Sans Pro\";\n"
"}\n"
"QMenuBar {\n"
"	color: #5b5b80;\n"
"	background-color: #11111e;\n"
"	font: 24pt \"Source Sans Pro\";\n"
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
"QFrame {\n"
"	background-color: #10101d;\n"
"}\n"
"QFrame#userInteractSpace {\n"
"	padding: 10px 20px;\n"
"}\n"
"#line, #line_2 {\n"
"	background: transparent; \n"
"	border-top: 1px solid #000015;\n"
"}\n"
"QLabel {\n"
"	color: #ccccff;\n"
"	background: transparent;\n"
"	font: 18pt \"Source Sans Pro\";\n"
"	padding-bottom: 10px;\n"
"}\n"
"QLabel:disabled {\n"
"	color: #363659;\n"
"}\n"
"QRadioButton {\n"
"	color: #eaeaea;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	background: transparent;\n"
"}\n"
"QLineEdit, QPlainTextEdit, QComboBox {\n"
"	font: 16pt;\n"
"	color: #ccccff;\n"
"	background-color: #000015;\n"
"	border: 1px solid #363659;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"}\n"
"QLineEdit:disabled, QPlainTextEdit:disabled, QComboBox:disabled {\n"
"	color: #363659;\n"
"	background-color: #101024;\n"
"}\n"
"QPlainTextEdit {\n"
"	padding: 3px 5px;\n"
"	font: 14pt \"Source Sans Pro Semibold\";\n"
"}\n"
"QLineEdit:focus, QPlainTextEdit:focus, QComboBox:selected {\n"
"	border: 1px solid #18e8a6;\n"
"}\n"
"QPushButton {\n"
"	color: #5454b3;\n"
"	background-color: #1c1c34;\n"
"	border-top: 2px solid #000015;\n"
"	padding: 20px;\n"
"}\n"
"QPushButton#DecryptRadio {\n"
"	border-bottom: 2px solid #00"
                        "0015;\n"
"}\n"
"QPushButton:pressed, QPushButton:checked {\n"
"	color: #ccccff;\n"
"	background-color: #3c3c80\n"
"}\n"
"QPushButton#DecryptEncryptButton {\n"
"	border: 0;\n"
"	color: #181834;\n"
"	background-color: #18e8a6;\n"
"	font: 63 22pt \"Source Sans Pro Semibold\";\n"
"	padding: 15px 20px;\n"
"}\n"
"QPushButton#DecryptEncryptButton:!enabled {\n"
"	color: #11111e;\n"
"	background-color: #363659;\n"
"}\n"
"QProgressBar {\n"
"	border: 1px solid #000015;\n"
"	font: 14pt \"Source Sans Pro Semibold\";\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 132, 255), stop:1 rgba(255, 0, 90, 255));\n"
"}\n"
"QScrollArea {\n"
"	border: none;\n"
"}\n"
"QStatusBar {\n"
"	background-color: #101033;\n"
"	border-top: 1px solid #000015;\n"
"}"
"QScrollBar:horizontal, QScrollBar:vertical{\n"
"	border : 0; \n"
"	background: #000015; \n"
"}\n"
"QScrollBar:horizontal{ \n"
"	height: 18px; \n"
"	margin: 0px 18px; \n"
"}\n"
"QScrollBar:vertical{ \n"
"	width: 18px; \n"
"	margin: 18px 0px; \n"
"}\n"
"QScrollBar::handle:horizontal, QScrollBar::handle:vertical{ \n"
"	background: #191934; \n"
"	border-radius: 9px; \n"
"}\n"
"QScrollBar::handle:horizontal{ \n"
"	min-width: 18px; \n"
"}\n"
"QScrollBar::handle:vertical{ \n"
"	min-height: 18px; \n"
"}\n"
"QScrollBar::add-line:vertical{ \n"
"	height: 18px; \n"
"	subcontrol-position: bottom; \n"
"	subcontrol-origin: margin; \n"
"}\n"
"QScrollBar::sub-line:vertical{ \n"
"	height: 18px; \n"
"	subcontrol-position: top; \n"
"	subcontrol-origin: margin; \n"
"}\n"
"QScrollBar::add-line:horizontal{ \n"
"	width: 18px; \n"
"	subcontrol-position: right; \n"
"	subcontrol-origin: margin; \n"
"}\n"
"QScrollBar::sub-line:horizontal{ \n"
"	width: 18px; \n"
"	subcontrol-position: left; \n"
"	subcontrol-origin: margin; \n"
"}\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical, QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal{ \n"
"	border : 0; \n"
"	border-radius: 9px; \n"
"	background: #191934; \n"
"}\n"
"QScrollBar::left-arrow:horizontal, QScrollBar::right-arrow:horizontal, QScrollBar::down-arrow:vertical, QScrollBar::up-arrow:vertical{ \n"
"	background: #000015; \n"
"	width: 6px; \n"
"	height: 6px; \n"
"	border-radius: 3px; \n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal, QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical{ \n"
"	background: none; \n"
"}\n"));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 998, 784));
        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(310, 170, 800, 800));
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
		imageLabel->setMinimumWidth(400);
		imageLabel->setVisible(false);
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
        QFont radioFont;
        radioFont.setFamily(QString::fromUtf8("Source Sans Pro"));
        radioFont.setPointSize(24);
        radioFont.setBold(false);
        radioFont.setItalic(false);
        radioFont.setWeight(50);
		radioFont.setLetterSpacing(QFont::AbsoluteSpacing, 5);
        EncryptRadio->setFont(radioFont);
        EncryptRadio->setCheckable(true);

        verticalLayout_2->addWidget(EncryptRadio);

        DecryptRadio = new QPushButton(sidebar);
        DecryptRadio->setObjectName(QString::fromUtf8("DecryptRadio"));
        DecryptRadio->setEnabled(true);
        sizePolicy2.setHeightForWidth(DecryptRadio->sizePolicy().hasHeightForWidth());
        DecryptRadio->setSizePolicy(sizePolicy2);
        DecryptRadio->setMaximumSize(QSize(300, 16777215));
        DecryptRadio->setFont(radioFont);
        DecryptRadio->setCheckable(true);

        verticalLayout_2->addWidget(DecryptRadio);


        sideBar->addLayout(verticalLayout_2);

        userInteractSpace = new QFrame(sidebar);
        userInteractSpace->setObjectName(QString::fromUtf8("userInteractSpace"));
        userSettingSpace = new QVBoxLayout(userInteractSpace);
        userSettingSpace->setSpacing(0);
        userSettingSpace->setContentsMargins(11, 11, 11, 11);
        userSettingSpace->setObjectName(QString::fromUtf8("userSettingSpace"));
        userSettingSpace->setSizeConstraint(QLayout::SetMaximumSize);
        userSettingSpace->setContentsMargins(1, -1, 1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        EncryptionKeyLabel = new QLabel(userInteractSpace);
        EncryptionKeyLabel->setObjectName(QString::fromUtf8("EncryptionKeyLabel"));
        EncryptionKeyLabel->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(EncryptionKeyLabel->sizePolicy().hasHeightForWidth());
        EncryptionKeyLabel->setSizePolicy(sizePolicy3);
        EncryptionKeyLabel->setMaximumSize(QSize(300, 16777215));
        QFont labelFont;
        labelFont.setFamily(QString::fromUtf8("Source Sans Pro"));
        labelFont.setPointSize(18);
        labelFont.setBold(false);
        labelFont.setItalic(false);
        labelFont.setWeight(50);
		labelFont.setLetterSpacing(QFont::AbsoluteSpacing, 1);
        EncryptionKeyLabel->setFont(labelFont);
        EncryptionKeyLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        EncryptionKeyLabel->setMargin(0);
        EncryptionKeyLabel->setIndent(0);

        verticalLayout->addWidget(EncryptionKeyLabel);

        EncryptionKey = new QLineEdit(userInteractSpace);
        EncryptionKey->setObjectName(QString::fromUtf8("EncryptionKey"));
        EncryptionKey->setEnabled(false);
        sizePolicy3.setHeightForWidth(EncryptionKey->sizePolicy().hasHeightForWidth());
        EncryptionKey->setSizePolicy(sizePolicy3);
        EncryptionKey->setMaximumSize(QSize(300, 16777215));
        QFont keyFont;
        keyFont.setFamily(QString::fromUtf8("Source Sans Pro"));
        keyFont.setPointSize(16);
        keyFont.setBold(false);
        keyFont.setItalic(false);
        keyFont.setWeight(50);
        EncryptionKey->setFont(keyFont);
        EncryptionKey->setEchoMode(QLineEdit::Password);
        EncryptionKey->setReadOnly(false);

        verticalLayout->addWidget(EncryptionKey);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(userInteractSpace);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(0);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        AlgorithmSelectLabel = new QLabel(userInteractSpace);
        AlgorithmSelectLabel->setObjectName(QString::fromUtf8("AlgorithmSelectLabel"));
        AlgorithmSelectLabel->setEnabled(false);
        sizePolicy3.setHeightForWidth(AlgorithmSelectLabel->sizePolicy().hasHeightForWidth());
        AlgorithmSelectLabel->setSizePolicy(sizePolicy3);
        AlgorithmSelectLabel->setMaximumSize(QSize(300, 16777215));
        AlgorithmSelectLabel->setFont(labelFont);
        AlgorithmSelectLabel->setScaledContents(false);
        AlgorithmSelectLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        AlgorithmSelectLabel->setMargin(0);
        AlgorithmSelectLabel->setIndent(0);

        verticalLayout->addWidget(AlgorithmSelectLabel);

        comboBox = new QComboBox(userInteractSpace);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);
        comboBox->setMaximumSize(QSize(300, 16777215));
        comboBox->setFont(keyFont);
        comboBox->setEditable(false);

        verticalLayout->addWidget(comboBox);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        line_2 = new QFrame(userInteractSpace);
        line_2->setObjectName(QString::fromUtf8("line_2"));
		line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(0);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        EnterTextLabel = new QLabel(userInteractSpace);
        EnterTextLabel->setObjectName(QString::fromUtf8("EnterTextLabel"));
        EnterTextLabel->setEnabled(false);
        EnterTextLabel->setFont(labelFont);
        EnterTextLabel->setCursor(QCursor(Qt::ArrowCursor));
        EnterTextLabel->setIndent(0);

        verticalLayout->addWidget(EnterTextLabel);

        plainTextEdit = new QPlainTextEdit(userInteractSpace);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy5);
        plainTextEdit->setReadOnly(false);

        verticalLayout->addWidget(plainTextEdit);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_8);

        userSettingSpace->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, -1);
        DecryptEncryptButton = new QPushButton(userInteractSpace);
        DecryptEncryptButton->setObjectName(QString::fromUtf8("DecryptEncryptButton"));
        DecryptEncryptButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(DecryptEncryptButton->sizePolicy().hasHeightForWidth());
        DecryptEncryptButton->setSizePolicy(sizePolicy2);
        DecryptEncryptButton->setMaximumSize(QSize(300, 16777215));
        QFont submitFont;
        submitFont.setFamily(QString::fromUtf8("Source Sans Pro Semibold"));
        submitFont.setPointSize(22);
        submitFont.setBold(false);
        submitFont.setItalic(false);
        submitFont.setWeight(7);
		submitFont.setLetterSpacing(QFont::AbsoluteSpacing, 2);
        DecryptEncryptButton->setFont(submitFont);
        DecryptEncryptButton->setFlat(false);
		DecryptEncryptButton->setVisible(false);

		ButtonGlow = new QGraphicsDropShadowEffect();
		ButtonGlow->setBlurRadius(10);
		ButtonGlow->setOffset(0, 0);
		ButtonGlow->setColor(QColor(24, 232, 166));

		NoEffect = new QGraphicsOpacityEffect();
		NoEffect->setOpacity(1);

		DecryptEncryptButton->setGraphicsEffect(NoEffect);

        verticalLayout_5->addWidget(DecryptEncryptButton);

        verticalSpacer_6 = new QSpacerItem(170, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        ProgressLabel = new QLabel(userInteractSpace);
        ProgressLabel->setObjectName(QString::fromUtf8("ProgressLabel"));
        ProgressLabel->setEnabled(false);
        sizePolicy3.setHeightForWidth(ProgressLabel->sizePolicy().hasHeightForWidth());
        ProgressLabel->setSizePolicy(sizePolicy3);
        ProgressLabel->setMaximumSize(QSize(300, 16777215));
        ProgressLabel->setFont(labelFont);
        ProgressLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ProgressLabel->setMargin(0);
        ProgressLabel->setIndent(0);
		ProgressLabel->setVisible(false);

        verticalLayout_5->addWidget(ProgressLabel);

        DecryptProgress = new QProgressBar(userInteractSpace);
        DecryptProgress->setObjectName(QString::fromUtf8("DecryptProgress"));
        sizePolicy2.setHeightForWidth(DecryptProgress->sizePolicy().hasHeightForWidth());
        DecryptProgress->setSizePolicy(sizePolicy2);
        DecryptProgress->setMaximumSize(QSize(300, 16777215));
        QFont progressFont;
        progressFont.setFamily(QString::fromUtf8("Source Sans Pro Semibold"));
        progressFont.setPointSize(14);
        progressFont.setBold(false);
        progressFont.setItalic(false);
        progressFont.setWeight(50);
        DecryptProgress->setFont(progressFont);
        DecryptProgress->setValue(0);
        DecryptProgress->setAlignment(Qt::AlignCenter);
        DecryptProgress->setTextVisible(false);
        DecryptProgress->setOrientation(Qt::Horizontal);
        DecryptProgress->setInvertedAppearance(false);
        DecryptProgress->setTextDirection(QProgressBar::TopToBottom);
		DecryptProgress->setVisible(false);

        verticalLayout_5->addWidget(DecryptProgress);

        verticalSpacer_12 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_12);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        userSettingSpace->addLayout(verticalLayout_5);


        sideBar->addWidget(userInteractSpace);


        gridLayout_3->addWidget(sidebar, 1, 0, 1, 1);

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

        QMetaObject::connectSlotsByName(ImageVaultGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageVaultGUIClass)
    {
		// ImageVaultGUIClass->setWindowFlags(Qt::FramelessWindowHint);		Line that removes the frame for fun.
        ImageVaultGUIClass->setWindowTitle(QCoreApplication::translate("ImageVaultGUIClass", "Image Vault", nullptr));
        action_Image_Vault_Help->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Image Vault Help", nullptr));
        action_Version->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Version", nullptr));
        action_Open->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Open...", nullptr));
        action_Save->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Save", nullptr));
        action_Save_As->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Save As...", nullptr));
        actionExit->setText(QCoreApplication::translate("ImageVaultGUIClass", "&Exit", nullptr));
        imageLabel->setText(QString());
        EncryptRadio->setText(QCoreApplication::translate("ImageVaultGUIClass", "ENCRYPT", nullptr));
        DecryptRadio->setText(QCoreApplication::translate("ImageVaultGUIClass", "DECRYPT", nullptr));
        EncryptionKeyLabel->setText(QCoreApplication::translate("ImageVaultGUIClass", "Encryption key", nullptr));
        AlgorithmSelectLabel->setText(QCoreApplication::translate("ImageVaultGUIClass", "Encryption algorithm", nullptr));
        EnterTextLabel->setText(QCoreApplication::translate("ImageVaultGUIClass", "Enter text", nullptr));
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("ImageVaultGUIClass", "Start typing...", nullptr));
        DecryptEncryptButton->setText(QCoreApplication::translate("ImageVaultGUIClass", "ENCRYPT FILE", nullptr));
        ProgressLabel->setText(QCoreApplication::translate("ImageVaultGUIClass", "Progress", nullptr));
        menu_File->setTitle(QCoreApplication::translate("ImageVaultGUIClass", "&F I L E", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("ImageVaultGUIClass", "&H E L P", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageVaultGUIClass: public Ui_ImageVaultGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IMAGEVAULTGUIDIFMQI_H
