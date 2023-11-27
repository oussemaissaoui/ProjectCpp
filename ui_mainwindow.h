/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_bg_main;
    ClickableLabel *label_profil;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_setting1;
    QPushButton *pushButton_signout1;
    QPushButton *pushButton_exit1;
    QGroupBox *groupBox;
    QLabel *label_logo_alleco;
    QLabel *label_login_noeditable;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QTextEdit *textEdit_copyright;
    QPushButton *pushButton_login;
    QCheckBox *checkBox_stayLogin;
    ClickableLabel *label_signup;
    ClickableLabel *label_eye;
    QLabel *label_wrong;
    QWidget *page_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    ClickableLabel *label_profil_2;
    QLabel *label_Menuapp;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_setting2;
    QPushButton *pushButton_signout2;
    QPushButton *pushButton_exit2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1200, 600);
        MainWindow->setMinimumSize(QSize(1200, 600));
        MainWindow->setMaximumSize(QSize(1200, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/image/Logo_noir.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 600));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_bg_main = new QLabel(page);
        label_bg_main->setObjectName(QStringLiteral("label_bg_main"));
        label_bg_main->setEnabled(true);
        label_bg_main->setGeometry(QRect(270, 0, 941, 641));
        label_bg_main->setPixmap(QPixmap(QString::fromUtf8(":/img/26760.jpg")));
        label_bg_main->setScaledContents(true);
        label_bg_main->setAlignment(Qt::AlignCenter);
        label_bg_main->setWordWrap(false);
        label_bg_main->setTextInteractionFlags(Qt::NoTextInteraction);
        label_profil = new ClickableLabel(page);
        label_profil->setObjectName(QStringLiteral("label_profil"));
        label_profil->setGeometry(QRect(1120, 20, 61, 61));
        label_profil->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:30;"));
        label_profil->setPixmap(QPixmap(QString::fromUtf8(":/img/image/profil.png")));
        label_profil->setScaledContents(true);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(920, 50, 191, 131));
        groupBox_2->setStyleSheet(QLatin1String("background-color: rgb(33, 31, 31);\n"
"border:none;"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 20, 0);
        pushButton_setting1 = new QPushButton(groupBox_2);
        pushButton_setting1->setObjectName(QStringLiteral("pushButton_setting1"));
        pushButton_setting1->setMinimumSize(QSize(150, 30));
        pushButton_setting1->setStyleSheet(QLatin1String("QPushButton{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border-radius:7;\n"
"}\n"
"\n"
"QPushButton:hover{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-radius:7;\n"
"}"));

        verticalLayout->addWidget(pushButton_setting1);

        pushButton_signout1 = new QPushButton(groupBox_2);
        pushButton_signout1->setObjectName(QStringLiteral("pushButton_signout1"));
        pushButton_signout1->setEnabled(false);
        pushButton_signout1->setMinimumSize(QSize(150, 30));
        pushButton_signout1->setStyleSheet(QLatin1String("QPushButton{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border-radius:7;\n"
"}\n"
"\n"
"QPushButton:hover{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-radius:7;\n"
"}\n"
"QPushButton:disabled {\n"
"    /* Your specific styles for disabled state */\n"
"    color: rgba(128, 128, 128, 128);  /* Example: Gray text color for disabled state */\n"
"    background-color: rgba(255, 255, 255, 10);  /* Example: Same background color as normal state */\n"
"    border: 1px solid rgba(128, 128, 128, 128);  /* Example: Gray border for disabled state */\n"
"}"));

        verticalLayout->addWidget(pushButton_signout1);

        pushButton_exit1 = new QPushButton(groupBox_2);
        pushButton_exit1->setObjectName(QStringLiteral("pushButton_exit1"));
        pushButton_exit1->setMinimumSize(QSize(150, 30));
        pushButton_exit1->setStyleSheet(QLatin1String("QPushButton{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border-radius:7;\n"
"}\n"
"\n"
"QPushButton:hover{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-radius:7;\n"
"}"));

        verticalLayout->addWidget(pushButton_exit1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 271, 611));
        label_logo_alleco = new QLabel(groupBox);
        label_logo_alleco->setObjectName(QStringLiteral("label_logo_alleco"));
        label_logo_alleco->setGeometry(QRect(50, 20, 171, 81));
        label_logo_alleco->setPixmap(QPixmap(QString::fromUtf8(":/img/alleco.png")));
        label_logo_alleco->setScaledContents(true);
        label_logo_alleco->setAlignment(Qt::AlignCenter);
        label_logo_alleco->setWordWrap(false);
        label_login_noeditable = new QLabel(groupBox);
        label_login_noeditable->setObjectName(QStringLiteral("label_login_noeditable"));
        label_login_noeditable->setGeometry(QRect(85, 140, 111, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_login_noeditable->setFont(font);
        label_login_noeditable->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_login_noeditable->setAlignment(Qt::AlignCenter);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setEnabled(true);
        lineEdit_username->setGeometry(QRect(30, 200, 210, 40));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit_username->setFont(font1);
        lineEdit_username->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_username->setStyleSheet(QLatin1String("/* Default state (when the cursor is not on the line edit) */\n"
"QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: none;\n"
"    border-bottom-color: rgb(136, 212, 119);\n"
"    color: rgba(0, 0, 0, 240);\n"
"    padding-bottom: 7px;\n"
"}\n"
"\n"
"/* Hover state (when the cursor is on the line edit) */\n"
"QLineEdit:focus{\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: 2px solid black;\n"
"    border-bottom-color: rgb(136, 212, 119);\n"
"    color: rgba(0, 0, 0, 240);\n"
"    padding-bottom: 7px;\n"
"	border-radius:3px;\n"
"\n"
"    \n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"    \n"
"	background-color: rgb(231, 231, 231);\n"
"   \n"
"\n"
"    \n"
"}\n"
""));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEnabled(true);
        lineEdit_password->setGeometry(QRect(30, 270, 210, 40));
        lineEdit_password->setStyleSheet(QLatin1String("/* Default state (when the cursor is not on the line edit) */\n"
"QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: none;\n"
"    border-bottom-color: rgb(136, 212, 119);\n"
"    color: rgba(0, 0, 0, 240);\n"
"    padding-bottom: 7px;\n"
"}\n"
"\n"
"/* Hover state (when the cursor is on the line edit) */\n"
"QLineEdit:focus{\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: 2px solid black;\n"
"    border-bottom-color: rgb(136, 212, 119);\n"
"    color: rgba(0, 0, 0, 240);\n"
"    padding-bottom: 7px;\n"
"	border-radius:3px;\n"
"\n"
"    \n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"    \n"
"	background-color: rgb(231, 231, 231);\n"
"   \n"
"\n"
"    \n"
"}\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        textEdit_copyright = new QTextEdit(groupBox);
        textEdit_copyright->setObjectName(QStringLiteral("textEdit_copyright"));
        textEdit_copyright->setGeometry(QRect(0, 570, 271, 31));
        textEdit_copyright->setStyleSheet(QStringLiteral("border:none;"));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(110, 420, 50, 50));
        QFont font2;
        font2.setPointSize(17);
        pushButton_login->setFont(font2);
        pushButton_login->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgb(113, 186, 95);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(113, 220, 95);\n"
"border-radius:5px;\n"
"}\n"
"\n"
""));
        checkBox_stayLogin = new QCheckBox(groupBox);
        checkBox_stayLogin->setObjectName(QStringLiteral("checkBox_stayLogin"));
        checkBox_stayLogin->setGeometry(QRect(30, 330, 101, 20));
        checkBox_stayLogin->setCursor(QCursor(Qt::PointingHandCursor));
        label_signup = new ClickableLabel(groupBox);
        label_signup->setObjectName(QStringLiteral("label_signup"));
        label_signup->setGeometry(QRect(110, 534, 50, 16));
        QFont font3;
        font3.setPointSize(10);
        font3.setUnderline(true);
        font3.setStrikeOut(false);
        font3.setKerning(false);
        label_signup->setFont(font3);
        label_signup->setStyleSheet(QLatin1String("QLabel{\n"
"	\n"
"	\n"
"	color: rgb(154, 154, 154);\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        label_eye = new ClickableLabel(groupBox);
        label_eye->setObjectName(QStringLiteral("label_eye"));
        label_eye->setGeometry(QRect(200, 280, 31, 21));
        label_eye->setPixmap(QPixmap(QString::fromUtf8(":/img/image/eyes_close.png")));
        label_eye->setScaledContents(true);
        label_wrong = new QLabel(groupBox);
        label_wrong->setObjectName(QStringLiteral("label_wrong"));
        label_wrong->setGeometry(QRect(40, 310, 151, 21));
        label_wrong->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(-10, -40, 1200, 600));
        scrollArea->setMinimumSize(QSize(1200, 600));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -616, 1200, 1200));
        scrollAreaWidgetContents->setMinimumSize(QSize(1200, 1200));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(383, 400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(140, 110, 901, 211));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_3->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_3->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_3->addWidget(pushButton_10);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label_profil_2 = new ClickableLabel(page_2);
        label_profil_2->setObjectName(QStringLiteral("label_profil_2"));
        label_profil_2->setGeometry(QRect(1120, 20, 61, 61));
        label_profil_2->setMaximumSize(QSize(100, 100));
        label_profil_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:30;"));
        label_profil_2->setPixmap(QPixmap(QString::fromUtf8(":/img/image/profil.png")));
        label_profil_2->setScaledContents(true);
        label_Menuapp = new QLabel(page_2);
        label_Menuapp->setObjectName(QStringLiteral("label_Menuapp"));
        label_Menuapp->setGeometry(QRect(20, 30, 61, 61));
        label_Menuapp->setMaximumSize(QSize(100, 100));
        label_Menuapp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:30;"));
        label_Menuapp->setPixmap(QPixmap(QString::fromUtf8(":/img/image/Menuapp.png")));
        label_Menuapp->setScaledContents(true);
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(920, 50, 191, 131));
        groupBox_4->setStyleSheet(QLatin1String("background-color: rgb(33, 31, 31);\n"
"border:none;"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 20, 0);
        pushButton_setting2 = new QPushButton(groupBox_4);
        pushButton_setting2->setObjectName(QStringLiteral("pushButton_setting2"));
        pushButton_setting2->setMinimumSize(QSize(150, 30));
        pushButton_setting2->setStyleSheet(QLatin1String("QPushButton{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border-radius:7;\n"
"}\n"
"\n"
"QPushButton:hover{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-radius:7;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_setting2);

        pushButton_signout2 = new QPushButton(groupBox_4);
        pushButton_signout2->setObjectName(QStringLiteral("pushButton_signout2"));
        pushButton_signout2->setEnabled(false);
        pushButton_signout2->setMinimumSize(QSize(150, 30));
        pushButton_signout2->setStyleSheet(QLatin1String("QPushButton{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border-radius:7;\n"
"}\n"
"\n"
"QPushButton:hover{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-radius:7;\n"
"}\n"
"QPushButton:disabled {\n"
"    /* Your specific styles for disabled state */\n"
"    color: rgba(128, 128, 128, 128);  /* Example: Gray text color for disabled state */\n"
"    background-color: rgba(255, 255, 255, 10);  /* Example: Same background color as normal state */\n"
"    border: 1px solid rgba(128, 128, 128, 128);  /* Example: Gray border for disabled state */\n"
"}"));

        verticalLayout_2->addWidget(pushButton_signout2);

        pushButton_exit2 = new QPushButton(groupBox_4);
        pushButton_exit2->setObjectName(QStringLiteral("pushButton_exit2"));
        pushButton_exit2->setMinimumSize(QSize(150, 30));
        pushButton_exit2->setStyleSheet(QLatin1String("QPushButton{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 10);\n"
"border-radius:7;\n"
"}\n"
"\n"
"QPushButton:hover{	font: 87 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"border-radius:7;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_exit2);

        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AllEco", Q_NULLPTR));
        label_bg_main->setText(QString());
        label_profil->setText(QString());
        groupBox_2->setTitle(QString());
        pushButton_setting1->setText(QApplication::translate("MainWindow", "SETTINGS", Q_NULLPTR));
        pushButton_signout1->setText(QApplication::translate("MainWindow", "SIGN OUT", Q_NULLPTR));
        pushButton_exit1->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_logo_alleco->setText(QString());
        label_login_noeditable->setText(QApplication::translate("MainWindow", "Sign In", Q_NULLPTR));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("MainWindow", "USERNAME", Q_NULLPTR));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        textEdit_copyright->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:6pt;\">THIS APP IS PROTECTED BY DEEPCODE TM AND ITS </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:6pt; text-decoration: underline;\">PRIVACY POLICY</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:6pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:6pt;\">AND </span><span style=\" font-family:'"
                        "MS Shell Dlg 2'; font-size:6pt; text-decoration: underline;\">TERMS OF SERVICES</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:6pt;\"> APPLY .</span></p></body></html>", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("MainWindow", "->", Q_NULLPTR));
        checkBox_stayLogin->setText(QApplication::translate("MainWindow", "Stay signed in", Q_NULLPTR));
        label_signup->setText(QApplication::translate("MainWindow", "Sign Up!", Q_NULLPTR));
        label_eye->setText(QString());
        label_wrong->setText(QApplication::translate("MainWindow", "wrong password or username!", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_profil_2->setText(QString());
        label_Menuapp->setText(QString());
        groupBox_4->setTitle(QString());
        pushButton_setting2->setText(QApplication::translate("MainWindow", "SETTINGS", Q_NULLPTR));
        pushButton_signout2->setText(QApplication::translate("MainWindow", "SIGN OUT", Q_NULLPTR));
        pushButton_exit2->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
