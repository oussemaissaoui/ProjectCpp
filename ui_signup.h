/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QStackedWidget *stackedWidget;
    QWidget *signup1;
    QLineEdit *lineEdit_email;
    QPushButton *pushButton;
    QLabel *step1_1;
    QLabel *step2_1;
    QLabel *step3_1;
    QLabel *label;
    QLabel *label_9;
    QWidget *signup2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_confirmpass;
    QLabel *label_pass_err1;
    QLabel *label_pass_err2;
    QLabel *label_pass_err3;
    QPushButton *pushButton_next;
    QLabel *step1_4;
    QLabel *step1_5;
    QLabel *step1_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *signup3;
    QPushButton *pushButton_signup;
    QLabel *step1_3;
    QLabel *step2_3;
    QLabel *step3_3;
    QLineEdit *lineEdit_nom;
    QDateEdit *date_naissance;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_cin;
    QLineEdit *lineEdit_tel;
    QComboBox *comboBox_sexe;
    QComboBox *comboBox_status;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QStringLiteral("Signup"));
        Signup->resize(1203, 599);
        stackedWidget = new QStackedWidget(Signup);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 90, 900, 450));
        stackedWidget->setMinimumSize(QSize(900, 450));
        stackedWidget->setMaximumSize(QSize(900, 450));
        signup1 = new QWidget();
        signup1->setObjectName(QStringLiteral("signup1"));
        lineEdit_email = new QLineEdit(signup1);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(80, 200, 300, 41));
        QFont font;
        font.setPointSize(16);
        lineEdit_email->setFont(font);
        lineEdit_email->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_email->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: black;\n"
"}\n"
"\n"
"\n"
""));
        lineEdit_email->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(signup1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 310, 120, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        step1_1 = new QLabel(signup1);
        step1_1->setObjectName(QStringLiteral("step1_1"));
        step1_1->setGeometry(QRect(50, 380, 61, 16));
        step1_1->setStyleSheet(QLatin1String("\n"
"\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color: #2CBB63;\n"
"}"));
        step2_1 = new QLabel(signup1);
        step2_1->setObjectName(QStringLiteral("step2_1"));
        step2_1->setGeometry(QRect(110, 380, 131, 20));
        step2_1->setStyleSheet(QLatin1String("\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color:black;\n"
"}"));
        step3_1 = new QLabel(signup1);
        step3_1->setObjectName(QStringLiteral("step3_1"));
        step3_1->setGeometry(QRect(240, 380, 141, 20));
        step3_1->setStyleSheet(QLatin1String("\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color:black;\n"
"}"));
        label = new QLabel(signup1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 371, 20));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  font-weight: bold; /* Texte en gras */\n"
"  font-size: 24px; /* Taille de police */\n"
"  color: black; /* Couleur du texte */\n"
"  background-color: transparent; /* Fond transparent */\n"
"}"));
        label_9 = new QLabel(signup1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 80, 281, 61));
        label_9->setStyleSheet(QLatin1String("QLabel {\n"
"  font-weight: bold; /* Texte en gras */\n"
"  font-size: 18px; /* Taille de police */\n"
"  color: #2CBB63; /* Couleur du texte */\n"
"  background-color: transparent; /* Fond transparent */\n"
"}"));
        stackedWidget->addWidget(signup1);
        signup2 = new QWidget();
        signup2->setObjectName(QStringLiteral("signup2"));
        lineEdit_username = new QLineEdit(signup2);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(80, 110, 260, 30));
        QFont font1;
        font1.setPointSize(10);
        lineEdit_username->setFont(font1);
        lineEdit_username->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_username->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_username->setAlignment(Qt::AlignCenter);
        lineEdit_password = new QLineEdit(signup2);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(80, 160, 260, 30));
        lineEdit_password->setFont(font1);
        lineEdit_password->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_password->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color:black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_password->setAlignment(Qt::AlignCenter);
        lineEdit_confirmpass = new QLineEdit(signup2);
        lineEdit_confirmpass->setObjectName(QStringLiteral("lineEdit_confirmpass"));
        lineEdit_confirmpass->setGeometry(QRect(80, 240, 260, 30));
        lineEdit_confirmpass->setFont(font1);
        lineEdit_confirmpass->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_confirmpass->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_confirmpass->setAlignment(Qt::AlignCenter);
        label_pass_err1 = new QLabel(signup2);
        label_pass_err1->setObjectName(QStringLiteral("label_pass_err1"));
        label_pass_err1->setEnabled(true);
        label_pass_err1->setGeometry(QRect(80, 190, 311, 16));
        label_pass_err1->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_pass_err1->setTextInteractionFlags(Qt::NoTextInteraction);
        label_pass_err2 = new QLabel(signup2);
        label_pass_err2->setObjectName(QStringLiteral("label_pass_err2"));
        label_pass_err2->setGeometry(QRect(80, 210, 311, 16));
        label_pass_err2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_pass_err2->setTextInteractionFlags(Qt::NoTextInteraction);
        label_pass_err3 = new QLabel(signup2);
        label_pass_err3->setObjectName(QStringLiteral("label_pass_err3"));
        label_pass_err3->setEnabled(true);
        label_pass_err3->setGeometry(QRect(80, 280, 311, 16));
        label_pass_err3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_pass_err3->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_next = new QPushButton(signup2);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(160, 310, 120, 31));
        pushButton_next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_next->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        step1_4 = new QLabel(signup2);
        step1_4->setObjectName(QStringLiteral("step1_4"));
        step1_4->setGeometry(QRect(50, 380, 131, 16));
        step1_4->setStyleSheet(QLatin1String("\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color:black;\n"
"}"));
        step1_5 = new QLabel(signup2);
        step1_5->setObjectName(QStringLiteral("step1_5"));
        step1_5->setGeometry(QRect(180, 380, 61, 16));
        step1_5->setStyleSheet(QLatin1String("\n"
"\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color: #2CBB63;\n"
"}"));
        step1_6 = new QLabel(signup2);
        step1_6->setObjectName(QStringLiteral("step1_6"));
        step1_6->setGeometry(QRect(240, 380, 211, 20));
        step1_6->setStyleSheet(QLatin1String("\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color:black;\n"
"}"));
        label_7 = new QLabel(signup2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 20, 341, 41));
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"  font-weight: bold; /* Texte en gras */\n"
"  font-size: 24px; /* Taille de police */\n"
"  color: black; /* Couleur du texte */\n"
"  background-color: transparent; /* Fond transparent */\n"
"}"));
        label_8 = new QLabel(signup2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 60, 171, 20));
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"  font-weight: bold; /* Texte en gras */\n"
"  font-size: 24px; /* Taille de police */\n"
"  color: black; /* Couleur du texte */\n"
"  background-color: transparent; /* Fond transparent */\n"
"}"));
        stackedWidget->addWidget(signup2);
        label_pass_err1->raise();
        label_pass_err2->raise();
        label_pass_err3->raise();
        lineEdit_confirmpass->raise();
        lineEdit_username->raise();
        lineEdit_password->raise();
        pushButton_next->raise();
        step1_4->raise();
        step1_5->raise();
        step1_6->raise();
        label_7->raise();
        label_8->raise();
        signup3 = new QWidget();
        signup3->setObjectName(QStringLiteral("signup3"));
        pushButton_signup = new QPushButton(signup3);
        pushButton_signup->setObjectName(QStringLiteral("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(160, 310, 120, 31));
        pushButton_signup->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        step1_3 = new QLabel(signup3);
        step1_3->setObjectName(QStringLiteral("step1_3"));
        step1_3->setGeometry(QRect(50, 380, 131, 16));
        step1_3->setStyleSheet(QLatin1String("\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color:black;\n"
"}"));
        step2_3 = new QLabel(signup3);
        step2_3->setObjectName(QStringLiteral("step2_3"));
        step2_3->setGeometry(QRect(180, 380, 141, 16));
        step2_3->setStyleSheet(QLatin1String("\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color:black;\n"
"}"));
        step3_3 = new QLabel(signup3);
        step3_3->setObjectName(QStringLiteral("step3_3"));
        step3_3->setGeometry(QRect(320, 380, 61, 16));
        step3_3->setStyleSheet(QLatin1String("\n"
"\n"
"QLabel {\n"
"  font-weight: bold;\n"
"  font-size: 16px;\n"
"color: #2CBB63;\n"
"}"));
        lineEdit_nom = new QLineEdit(signup3);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(40, 110, 130, 21));
        lineEdit_nom->setFont(font1);
        lineEdit_nom->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_nom->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"    border-top-color: rgba(0, 0, 0, 0);\n"
"    border-right-color: rgba(0, 0, 0, 0);\n"
"    border-left-color: rgba(0, 0, 0, 0);\n"
"    color: black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: black;\n"
"}\n"
"\n"
"QLineEdit::!enabled::placeholder {\n"
"    color: rgba(0, 0, 0, 127);\n"
"}"));
        lineEdit_nom->setAlignment(Qt::AlignCenter);
        date_naissance = new QDateEdit(signup3);
        date_naissance->setObjectName(QStringLiteral("date_naissance"));
        date_naissance->setGeometry(QRect(260, 210, 131, 21));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        date_naissance->setFont(font2);
        date_naissance->setStyleSheet(QLatin1String("QDateEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"  border-bottom: 2px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        date_naissance->setAlignment(Qt::AlignCenter);
        date_naissance->setButtonSymbols(QAbstractSpinBox::NoButtons);
        date_naissance->setAccelerated(false);
        date_naissance->setDate(QDate(1998, 1, 1));
        lineEdit_prenom = new QLineEdit(signup3);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(260, 110, 130, 21));
        lineEdit_prenom->setFont(font1);
        lineEdit_prenom->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_prenom->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color:black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_prenom->setAlignment(Qt::AlignCenter);
        lineEdit_cin = new QLineEdit(signup3);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(40, 160, 130, 21));
        lineEdit_cin->setFont(font1);
        lineEdit_cin->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_cin->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_cin->setAlignment(Qt::AlignCenter);
        lineEdit_tel = new QLineEdit(signup3);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(260, 160, 130, 21));
        lineEdit_tel->setFont(font1);
        lineEdit_tel->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_tel->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: #2CBB63;\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: black;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_tel->setAlignment(Qt::AlignCenter);
        comboBox_sexe = new QComboBox(signup3);
        comboBox_sexe->setObjectName(QStringLiteral("comboBox_sexe"));
        comboBox_sexe->setGeometry(QRect(40, 220, 131, 21));
        comboBox_sexe->setStyleSheet(QLatin1String("QComboBox {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        comboBox_status = new QComboBox(signup3);
        comboBox_status->setObjectName(QStringLiteral("comboBox_status"));
        comboBox_status->setGeometry(QRect(160, 260, 111, 21));
        comboBox_status->setStyleSheet(QLatin1String("QComboBox {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        label_3 = new QLabel(signup3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 10, 351, 71));
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"  font-weight: bold; /* Texte en gras */\n"
"  font-size: 24px; /* Taille de police */\n"
"  color: black; /* Couleur du texte */\n"
"  background-color: transparent; /* Fond transparent */\n"
"}"));
        label_4 = new QLabel(signup3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 50, 231, 71));
        label_4->setStyleSheet(QLatin1String("QLabel {\n"
"  font-weight: bold; /* Texte en gras */\n"
"  font-size: 24px; /* Taille de police */\n"
"  color: black; /* Couleur du texte */\n"
"  background-color: transparent; /* Fond transparent */\n"
"}"));
        label_6 = new QLabel(signup3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 350, 47, 14));
        stackedWidget->addWidget(signup3);
        label_2 = new QLabel(Signup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, -10, 1271, 611));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/d9c105d19a69658c8c819ac633d9eb64.jpg")));
        label_2->setScaledContents(true);
        label_5 = new QLabel(Signup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 20, 71, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/alleco.png")));
        label_5->setScaledContents(true);
        label_2->raise();
        stackedWidget->raise();
        label_5->raise();

        retranslateUi(Signup);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QApplication::translate("Signup", "Dialog", Q_NULLPTR));
        lineEdit_email->setText(QString());
        lineEdit_email->setPlaceholderText(QApplication::translate("Signup", "ENTER EMAIL HERE", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Signup", "START", Q_NULLPTR));
        step1_1->setText(QApplication::translate("Signup", "STEP 1", Q_NULLPTR));
        step2_1->setText(QApplication::translate("Signup", "-----------STEP 2", Q_NULLPTR));
        step3_1->setText(QApplication::translate("Signup", "-----------STEP 3", Q_NULLPTR));
        label->setText(QApplication::translate("Signup", "YOUR MISSION START HERE", Q_NULLPTR));
        label_9->setText(QApplication::translate("Signup", "FIRST LET'S GET YOUR EMAIL.", Q_NULLPTR));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("Signup", "USERNAME", Q_NULLPTR));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("Signup", "PASSWORD", Q_NULLPTR));
        lineEdit_confirmpass->setText(QString());
        lineEdit_confirmpass->setPlaceholderText(QApplication::translate("Signup", "CONFIRM PASSWORD", Q_NULLPTR));
        label_pass_err1->setText(QApplication::translate("Signup", "Password must be at least 8 characters long.", Q_NULLPTR));
        label_pass_err2->setText(QApplication::translate("Signup", "Password must contain at least one letter and one non-letter character.", Q_NULLPTR));
        label_pass_err3->setText(QApplication::translate("Signup", "Does not match password field.", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("Signup", "NEXT", Q_NULLPTR));
        step1_4->setText(QApplication::translate("Signup", "STEP 1------------------------------", Q_NULLPTR));
        step1_5->setText(QApplication::translate("Signup", "STEP 2", Q_NULLPTR));
        step1_6->setText(QApplication::translate("Signup", "-----------STEP 3", Q_NULLPTR));
        label_7->setText(QApplication::translate("Signup", "CREATE A USERNAME AND", Q_NULLPTR));
        label_8->setText(QApplication::translate("Signup", "PASSWORD", Q_NULLPTR));
        pushButton_signup->setText(QApplication::translate("Signup", "SIGN UP", Q_NULLPTR));
        step1_3->setText(QApplication::translate("Signup", "STEP 1-----------------", Q_NULLPTR));
        step2_3->setText(QApplication::translate("Signup", "STEP 2--------------------", Q_NULLPTR));
        step3_3->setText(QApplication::translate("Signup", "STEP 3", Q_NULLPTR));
        lineEdit_nom->setText(QString());
        lineEdit_nom->setPlaceholderText(QApplication::translate("Signup", "NAME", Q_NULLPTR));
        lineEdit_prenom->setText(QString());
        lineEdit_prenom->setPlaceholderText(QApplication::translate("Signup", "LAST-NAME", Q_NULLPTR));
        lineEdit_cin->setText(QString());
        lineEdit_cin->setPlaceholderText(QApplication::translate("Signup", "CIN", Q_NULLPTR));
        lineEdit_tel->setText(QString());
        lineEdit_tel->setPlaceholderText(QApplication::translate("Signup", "PHONE-NUMBER", Q_NULLPTR));
        comboBox_sexe->clear();
        comboBox_sexe->insertItems(0, QStringList()
         << QApplication::translate("Signup", "Homme", Q_NULLPTR)
         << QApplication::translate("Signup", "Femme", Q_NULLPTR)
        );
        comboBox_status->clear();
        comboBox_status->insertItems(0, QStringList()
         << QApplication::translate("Signup", "Celibataire", Q_NULLPTR)
         << QApplication::translate("Signup", "marie", Q_NULLPTR)
         << QApplication::translate("Signup", "divorce", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Signup", "COMPLETE YOUR PERSONAL", Q_NULLPTR));
        label_4->setText(QApplication::translate("Signup", " INFORMATION", Q_NULLPTR));
        label_6->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
