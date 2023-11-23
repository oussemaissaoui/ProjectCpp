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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_bg_main;
    QGroupBox *groupBox;
    QLabel *label_logo_alleco;
    QLabel *label_login_noeditable;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QTextEdit *textEdit_copyright;
    QPushButton *pushButton_login;
    QCheckBox *checkBox_stayLogin;
    ClickableLabel *label_signup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1200, 600);
        MainWindow->setMinimumSize(QSize(1200, 600));
        MainWindow->setMaximumSize(QSize(1200, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_bg_main = new QLabel(centralwidget);
        label_bg_main->setObjectName(QStringLiteral("label_bg_main"));
        label_bg_main->setEnabled(true);
        label_bg_main->setGeometry(QRect(270, -30, 941, 641));
        label_bg_main->setPixmap(QPixmap(QString::fromUtf8(":/img/26760.jpg")));
        label_bg_main->setScaledContents(true);
        label_bg_main->setAlignment(Qt::AlignCenter);
        label_bg_main->setWordWrap(false);
        label_bg_main->setTextInteractionFlags(Qt::NoTextInteraction);
        groupBox = new QGroupBox(centralwidget);
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
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AllEco", Q_NULLPTR));
        label_bg_main->setText(QString());
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
