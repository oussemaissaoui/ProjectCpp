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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QStackedWidget *stackedWidget;
    QWidget *signup1;
    QLabel *bg;
    QLabel *arrowimg;
    QTextBrowser *title;
    QLineEdit *lineEdit_email;
    QPushButton *pushButton;
    QLabel *image_logo;
    QLabel *label;
    QLabel *step1_1;
    QLabel *step2_1;
    QLabel *step3_1;
    QWidget *signup2;
    QLabel *bg2;
    QTextBrowser *title2;
    QPushButton *pushButton_next;
    QLabel *image_logo_;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_confirmpass;
    QLabel *label_pass_err1;
    QLabel *label_pass_err2;
    QGroupBox *groupBox_step123;
    QLabel *step3_2;
    QLabel *step1_2;
    QLabel *step2_2;
    QLabel *label_image_step2;
    QLabel *label_pass_err3;
    QWidget *signup3;
    QLabel *bg3;
    QTextBrowser *title3;
    QPushButton *pushButton_signup;
    QLabel *image_logo_3;
    QLabel *label_image_step3;
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

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QStringLiteral("Signup"));
        Signup->resize(900, 450);
        stackedWidget = new QStackedWidget(Signup);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 900, 450));
        stackedWidget->setMinimumSize(QSize(900, 450));
        stackedWidget->setMaximumSize(QSize(900, 450));
        signup1 = new QWidget();
        signup1->setObjectName(QStringLiteral("signup1"));
        bg = new QLabel(signup1);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 900, 450));
        bg->setStyleSheet(QStringLiteral(""));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/img/image/signup.png")));
        bg->setScaledContents(true);
        arrowimg = new QLabel(signup1);
        arrowimg->setObjectName(QStringLiteral("arrowimg"));
        arrowimg->setGeometry(QRect(155, 120, 591, 51));
        arrowimg->setPixmap(QPixmap(QString::fromUtf8(":/img/image/divider.png")));
        arrowimg->setScaledContents(true);
        title = new QTextBrowser(signup1);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(225, 40, 451, 81));
        title->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border:none;"));
        title->setReadOnly(true);
        title->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        lineEdit_email = new QLineEdit(signup1);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(300, 230, 300, 41));
        QFont font;
        font.setPointSize(16);
        lineEdit_email->setFont(font);
        lineEdit_email->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_email->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
""));
        lineEdit_email->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(signup1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 311, 120, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"color: rgb(204, 170, 103);\n"
"	background-color: rgb(17, 17, 17);\n"
"border: 1px solid black;\n"
"border-bottom-color: rgb(204, 170, 103);\n"
"border-top-color: rgb(204, 170, 103);\n"
"border-right-color: rgb(204, 170, 103);\n"
"border-left-color: rgb(204, 170, 103);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 234, 183);\n"
"	background-color: rgb(17, 17, 17);\n"
"border: 1px solid black;\n"
"border-bottom-color: rgb(204, 170, 103);\n"
"border-top-color: rgb(204, 170, 103);\n"
"border-right-color: rgb(204, 170, 103);\n"
"border-left-color: rgb(204, 170, 103);\n"
"}"));
        image_logo = new QLabel(signup1);
        image_logo->setObjectName(QStringLiteral("image_logo"));
        image_logo->setGeometry(QRect(30, 20, 100, 100));
        image_logo->setPixmap(QPixmap(QString::fromUtf8(":/img/image/logo_blanc.png")));
        image_logo->setScaledContents(true);
        label = new QLabel(signup1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 360, 441, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/image/step1.png")));
        label->setScaledContents(true);
        step1_1 = new QLabel(signup1);
        step1_1->setObjectName(QStringLiteral("step1_1"));
        step1_1->setGeometry(QRect(260, 400, 41, 16));
        step1_1->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        step2_1 = new QLabel(signup1);
        step2_1->setObjectName(QStringLiteral("step2_1"));
        step2_1->setGeometry(QRect(430, 400, 41, 16));
        step2_1->setStyleSheet(QStringLiteral("color: rgb(161, 161, 161);"));
        step3_1 = new QLabel(signup1);
        step3_1->setObjectName(QStringLiteral("step3_1"));
        step3_1->setGeometry(QRect(602, 400, 41, 16));
        step3_1->setStyleSheet(QStringLiteral("color: rgb(161, 161, 161);"));
        stackedWidget->addWidget(signup1);
        signup2 = new QWidget();
        signup2->setObjectName(QStringLiteral("signup2"));
        bg2 = new QLabel(signup2);
        bg2->setObjectName(QStringLiteral("bg2"));
        bg2->setGeometry(QRect(0, 0, 900, 450));
        bg2->setStyleSheet(QStringLiteral(""));
        bg2->setPixmap(QPixmap(QString::fromUtf8(":/img/image/signup.png")));
        bg2->setScaledContents(true);
        title2 = new QTextBrowser(signup2);
        title2->setObjectName(QStringLiteral("title2"));
        title2->setGeometry(QRect(215, 40, 470, 81));
        title2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border:none;"));
        pushButton_next = new QPushButton(signup2);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(390, 311, 120, 31));
        pushButton_next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_next->setStyleSheet(QLatin1String("QPushButton{\n"
"color: rgb(204, 170, 103);\n"
"	background-color: rgb(17, 17, 17);\n"
"border: 1px solid black;\n"
"border-bottom-color: rgb(204, 170, 103);\n"
"border-top-color: rgb(204, 170, 103);\n"
"border-right-color: rgb(204, 170, 103);\n"
"border-left-color: rgb(204, 170, 103);\n"
"}QPushButton:hover{\n"
"	color: rgb(255, 234, 183);\n"
"	background-color: rgb(17, 17, 17);\n"
"border: 1px solid black;\n"
"border-bottom-color: rgb(204, 170, 103);\n"
"border-top-color: rgb(204, 170, 103);\n"
"border-right-color: rgb(204, 170, 103);\n"
"border-left-color: rgb(204, 170, 103);\n"
"}"));
        image_logo_ = new QLabel(signup2);
        image_logo_->setObjectName(QStringLiteral("image_logo_"));
        image_logo_->setGeometry(QRect(30, 20, 100, 100));
        image_logo_->setPixmap(QPixmap(QString::fromUtf8(":/img/image/logo_blanc.png")));
        image_logo_->setScaledContents(true);
        lineEdit_username = new QLineEdit(signup2);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(320, 140, 260, 30));
        QFont font1;
        font1.setPointSize(10);
        lineEdit_username->setFont(font1);
        lineEdit_username->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_username->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        lineEdit_password->setGeometry(QRect(320, 190, 260, 30));
        lineEdit_password->setFont(font1);
        lineEdit_password->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_password->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        lineEdit_confirmpass->setGeometry(QRect(320, 240, 260, 30));
        lineEdit_confirmpass->setFont(font1);
        lineEdit_confirmpass->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_confirmpass->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        label_pass_err1->setGeometry(QRect(320, 230, 311, 16));
        label_pass_err1->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_pass_err1->setTextInteractionFlags(Qt::NoTextInteraction);
        label_pass_err2 = new QLabel(signup2);
        label_pass_err2->setObjectName(QStringLiteral("label_pass_err2"));
        label_pass_err2->setGeometry(QRect(320, 250, 311, 16));
        label_pass_err2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_pass_err2->setTextInteractionFlags(Qt::NoTextInteraction);
        groupBox_step123 = new QGroupBox(signup2);
        groupBox_step123->setObjectName(QStringLiteral("groupBox_step123"));
        groupBox_step123->setGeometry(QRect(179, 330, 540, 91));
        groupBox_step123->setStyleSheet(QStringLiteral("border:none;"));
        step3_2 = new QLabel(groupBox_step123);
        step3_2->setObjectName(QStringLiteral("step3_2"));
        step3_2->setGeometry(QRect(420, 70, 41, 16));
        step3_2->setStyleSheet(QStringLiteral("color: rgb(161, 161, 161);"));
        step1_2 = new QLabel(groupBox_step123);
        step1_2->setObjectName(QStringLiteral("step1_2"));
        step1_2->setGeometry(QRect(78, 70, 41, 16));
        step1_2->setStyleSheet(QStringLiteral("color: rgb(161, 161, 161);"));
        step2_2 = new QLabel(groupBox_step123);
        step2_2->setObjectName(QStringLiteral("step2_2"));
        step2_2->setGeometry(QRect(248, 70, 41, 16));
        step2_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_image_step2 = new QLabel(groupBox_step123);
        label_image_step2->setObjectName(QStringLiteral("label_image_step2"));
        label_image_step2->setGeometry(QRect(61, 30, 440, 61));
        label_image_step2->setPixmap(QPixmap(QString::fromUtf8(":/img/image/step2.png")));
        label_image_step2->setScaledContents(true);
        label_pass_err3 = new QLabel(signup2);
        label_pass_err3->setObjectName(QStringLiteral("label_pass_err3"));
        label_pass_err3->setEnabled(true);
        label_pass_err3->setGeometry(QRect(320, 280, 311, 16));
        label_pass_err3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_pass_err3->setTextInteractionFlags(Qt::NoTextInteraction);
        stackedWidget->addWidget(signup2);
        bg2->raise();
        title2->raise();
        image_logo_->raise();
        label_pass_err1->raise();
        label_pass_err2->raise();
        groupBox_step123->raise();
        label_pass_err3->raise();
        lineEdit_confirmpass->raise();
        lineEdit_username->raise();
        lineEdit_password->raise();
        pushButton_next->raise();
        signup3 = new QWidget();
        signup3->setObjectName(QStringLiteral("signup3"));
        bg3 = new QLabel(signup3);
        bg3->setObjectName(QStringLiteral("bg3"));
        bg3->setGeometry(QRect(0, 0, 900, 450));
        bg3->setStyleSheet(QStringLiteral(""));
        bg3->setPixmap(QPixmap(QString::fromUtf8(":/img/image/signup.png")));
        bg3->setScaledContents(true);
        title3 = new QTextBrowser(signup3);
        title3->setObjectName(QStringLiteral("title3"));
        title3->setGeometry(QRect(210, 30, 480, 101));
        title3->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border:none;"));
        pushButton_signup = new QPushButton(signup3);
        pushButton_signup->setObjectName(QStringLiteral("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(390, 311, 120, 31));
        pushButton_signup->setStyleSheet(QLatin1String("QPushButton{\n"
"color: rgb(204, 170, 103);\n"
"	background-color: rgb(17, 17, 17);\n"
"border: 1px solid black;\n"
"border-bottom-color: rgb(204, 170, 103);\n"
"border-top-color: rgb(204, 170, 103);\n"
"border-right-color: rgb(204, 170, 103);\n"
"border-left-color: rgb(204, 170, 103);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 234, 183);\n"
"	background-color: rgb(17, 17, 17);\n"
"border: 1px solid black;\n"
"border-bottom-color: rgb(204, 170, 103);\n"
"border-top-color: rgb(204, 170, 103);\n"
"border-right-color: rgb(204, 170, 103);\n"
"border-left-color: rgb(204, 170, 103);\n"
"}"));
        image_logo_3 = new QLabel(signup3);
        image_logo_3->setObjectName(QStringLiteral("image_logo_3"));
        image_logo_3->setGeometry(QRect(30, 20, 100, 100));
        image_logo_3->setPixmap(QPixmap(QString::fromUtf8(":/img/image/logo_blanc.png")));
        image_logo_3->setScaledContents(true);
        label_image_step3 = new QLabel(signup3);
        label_image_step3->setObjectName(QStringLiteral("label_image_step3"));
        label_image_step3->setGeometry(QRect(240, 360, 441, 61));
        label_image_step3->setPixmap(QPixmap(QString::fromUtf8(":/img/image/step3.png")));
        label_image_step3->setScaledContents(true);
        step1_3 = new QLabel(signup3);
        step1_3->setObjectName(QStringLiteral("step1_3"));
        step1_3->setGeometry(QRect(260, 400, 41, 16));
        step1_3->setStyleSheet(QStringLiteral("color: rgb(161, 161, 161);"));
        step2_3 = new QLabel(signup3);
        step2_3->setObjectName(QStringLiteral("step2_3"));
        step2_3->setGeometry(QRect(430, 400, 41, 16));
        step2_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        step3_3 = new QLabel(signup3);
        step3_3->setObjectName(QStringLiteral("step3_3"));
        step3_3->setGeometry(QRect(602, 400, 41, 16));
        step3_3->setStyleSheet(QStringLiteral("color: rgb(161, 161, 161);"));
        lineEdit_nom = new QLineEdit(signup3);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(255, 140, 130, 21));
        lineEdit_nom->setFont(font1);
        lineEdit_nom->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_nom->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    \n"
"	font: 87 10pt \"Arial\";\n"
"}\n"
"\n"
""));
        lineEdit_nom->setAlignment(Qt::AlignCenter);
        date_naissance = new QDateEdit(signup3);
        date_naissance->setObjectName(QStringLiteral("date_naissance"));
        date_naissance->setGeometry(QRect(380, 260, 151, 21));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        date_naissance->setFont(font2);
        date_naissance->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
""));
        date_naissance->setAlignment(Qt::AlignCenter);
        date_naissance->setButtonSymbols(QAbstractSpinBox::NoButtons);
        date_naissance->setAccelerated(false);
        date_naissance->setDate(QDate(1998, 1, 1));
        lineEdit_prenom = new QLineEdit(signup3);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(515, 140, 130, 21));
        lineEdit_prenom->setFont(font1);
        lineEdit_prenom->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_prenom->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        lineEdit_cin->setGeometry(QRect(255, 200, 130, 21));
        lineEdit_cin->setFont(font1);
        lineEdit_cin->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_cin->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        lineEdit_tel->setGeometry(QRect(515, 200, 130, 21));
        lineEdit_tel->setFont(font1);
        lineEdit_tel->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_tel->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
" 	border: 2px solid black;\n"
"    border-bottom-color: rgb(204, 170, 103);\n"
"	border-top-color: rgba(0, 0, 0, 0);\n"
"border-right-color: rgba(0, 0, 0, 0);\n"
"border-left-color: rgba(0, 0, 0, 0);\n"
"\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
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
        comboBox_sexe->setGeometry(QRect(220, 260, 111, 21));
        comboBox_status = new QComboBox(signup3);
        comboBox_status->setObjectName(QStringLiteral("comboBox_status"));
        comboBox_status->setGeometry(QRect(580, 260, 111, 21));
        stackedWidget->addWidget(signup3);

        retranslateUi(Signup);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QApplication::translate("Signup", "Dialog", Q_NULLPTR));
        bg->setText(QString());
        arrowimg->setText(QString());
        title->setHtml(QApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:22pt; font-weight:600; color:#ffffff;\">YOUR MISSION START HERE</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; fon"
                        "t-size:10pt; font-weight:600; color:#ccaa67;\">FIRST LET'S GET YOUR EMAIL.</span></p></body></html>", Q_NULLPTR));
        lineEdit_email->setText(QString());
        lineEdit_email->setPlaceholderText(QApplication::translate("Signup", "ENTER EMAIL HERE", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Signup", "START", Q_NULLPTR));
        image_logo->setText(QString());
        label->setText(QString());
        step1_1->setText(QApplication::translate("Signup", "STEP 1", Q_NULLPTR));
        step2_1->setText(QApplication::translate("Signup", "STEP 2", Q_NULLPTR));
        step3_1->setText(QApplication::translate("Signup", "STEP 3", Q_NULLPTR));
        bg2->setText(QString());
        title2->setHtml(QApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:600; color:#ffffff;\">CREATE A USERNAME AND PASSWORD</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#ffffff;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("Signup", "NEXT", Q_NULLPTR));
        image_logo_->setText(QString());
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("Signup", "USERNAME", Q_NULLPTR));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("Signup", "PASSWORD", Q_NULLPTR));
        lineEdit_confirmpass->setText(QString());
        lineEdit_confirmpass->setPlaceholderText(QApplication::translate("Signup", "CONFIRM PASSWORD", Q_NULLPTR));
        label_pass_err1->setText(QApplication::translate("Signup", "Password must be at least 8 characters long.", Q_NULLPTR));
        label_pass_err2->setText(QApplication::translate("Signup", "Password must contain at least one letter and one non-letter character.", Q_NULLPTR));
        groupBox_step123->setTitle(QString());
        step3_2->setText(QApplication::translate("Signup", "STEP 3", Q_NULLPTR));
        step1_2->setText(QApplication::translate("Signup", "STEP 1", Q_NULLPTR));
        step2_2->setText(QApplication::translate("Signup", "STEP 2", Q_NULLPTR));
        label_image_step2->setText(QString());
        label_pass_err3->setText(QApplication::translate("Signup", "Does not match password field.", Q_NULLPTR));
        bg3->setText(QString());
        title3->setHtml(QApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:600; color:#ffffff;\">COMPLETE YOUR PERSONAL INFORMATION</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:600; color:#ffffff;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_signup->setText(QApplication::translate("Signup", "SIGN UP", Q_NULLPTR));
        image_logo_3->setText(QString());
        label_image_step3->setText(QString());
        step1_3->setText(QApplication::translate("Signup", "STEP 1", Q_NULLPTR));
        step2_3->setText(QApplication::translate("Signup", "STEP 2", Q_NULLPTR));
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
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
