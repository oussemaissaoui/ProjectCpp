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
    ClickableLabel *label_profil;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_setting1;
    QPushButton *pushButton_signout1;
    QPushButton *pushButton_exit1;
    QLabel *label;
    QLabel *label_logo_alleco;
    QLineEdit *lineEdit_username;
    QLabel *label_login_noeditable;
    QLineEdit *lineEdit_password;
    QLabel *label_wrong;
    ClickableLabel *label_eye;
    QCheckBox *checkBox_stayLogin;
    QPushButton *pushButton_login;
    ClickableLabel *label_signup;
    QLabel *label_2;
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
        label_profil = new ClickableLabel(page);
        label_profil->setObjectName(QStringLiteral("label_profil"));
        label_profil->setGeometry(QRect(1130, 30, 61, 61));
        label_profil->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:30;"));
        label_profil->setPixmap(QPixmap(QString::fromUtf8(":/img/image/profil.png")));
        label_profil->setScaledContents(true);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(930, 90, 191, 131));
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

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, -10, 1251, 641));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/d9c105d19a69658c8c819ac633d9eb64.jpg")));
        label->setScaledContents(true);
        label_logo_alleco = new QLabel(page);
        label_logo_alleco->setObjectName(QStringLiteral("label_logo_alleco"));
        label_logo_alleco->setGeometry(QRect(30, 20, 71, 51));
        label_logo_alleco->setPixmap(QPixmap(QString::fromUtf8(":/img/alleco.png")));
        label_logo_alleco->setScaledContents(true);
        label_logo_alleco->setAlignment(Qt::AlignCenter);
        label_logo_alleco->setWordWrap(false);
        lineEdit_username = new QLineEdit(page);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setEnabled(true);
        lineEdit_username->setGeometry(QRect(30, 200, 321, 40));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        lineEdit_username->setFont(font);
        lineEdit_username->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_username->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des QLineEdit */\n"
"QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Bordure grise */\n"
"  border-radius: 5px; /* Coins arrondis */\n"
"  background-color: white; /* Fond blanc */\n"
"  color: black; /* Couleur du texte noir */\n"
"}\n"
"\n"
"/* Style au survol du QLineEdit */\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au survol */\n"
"}\n"
"\n"
"/* Style au focus du QLineEdit */\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au focus */\n"
"  outline: none; /* Supprime le contour du focus */\n"
"}"));
        label_login_noeditable = new QLabel(page);
        label_login_noeditable->setObjectName(QStringLiteral("label_login_noeditable"));
        label_login_noeditable->setGeometry(QRect(120, 140, 151, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_login_noeditable->setFont(font1);
        label_login_noeditable->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_login_noeditable->setAlignment(Qt::AlignCenter);
        lineEdit_password = new QLineEdit(page);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEnabled(true);
        lineEdit_password->setGeometry(QRect(30, 260, 321, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des QLineEdit */\n"
"QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Bordure grise */\n"
"  border-radius: 5px; /* Coins arrondis */\n"
"  background-color: white; /* Fond blanc */\n"
"  color: black; /* Couleur du texte noir */\n"
"}\n"
"\n"
"/* Style au survol du QLineEdit */\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au survol */\n"
"}\n"
"\n"
"/* Style au focus du QLineEdit */\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au focus */\n"
"  outline: none; /* Supprime le contour du focus */\n"
"}"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_wrong = new QLabel(page);
        label_wrong->setObjectName(QStringLiteral("label_wrong"));
        label_wrong->setGeometry(QRect(30, 320, 201, 21));
        label_wrong->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        label_eye = new ClickableLabel(page);
        label_eye->setObjectName(QStringLiteral("label_eye"));
        label_eye->setGeometry(QRect(310, 270, 31, 21));
        label_eye->setPixmap(QPixmap(QString::fromUtf8(":/img/image/eyes_close.png")));
        label_eye->setScaledContents(true);
        checkBox_stayLogin = new QCheckBox(page);
        checkBox_stayLogin->setObjectName(QStringLiteral("checkBox_stayLogin"));
        checkBox_stayLogin->setGeometry(QRect(30, 350, 111, 20));
        checkBox_stayLogin->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_stayLogin->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QCheckBox */\n"
"QCheckBox {\n"
"  spacing: 5px; /* Espacement entre le texte et la case */\n"
"  font-size: 14px; /* Taille de police */\n"
"  color: black; /* Couleur du texte */\n"
"}\n"
"\n"
"/* Style de la case \303\240 cocher */\n"
"QCheckBox::indicator {\n"
"  width: 16px; /* Largeur de la case */\n"
"  height: 16px; /* Hauteur de la case */\n"
"}\n"
"\n"
"/* Style de la case \303\240 cocher lorsque coch\303\251e */\n"
"QCheckBox::indicator:checked {\n"
"  background-color: #2CBB63; /* Couleur de fond lorsque coch\303\251e */\n"
"  border: 1px solid #2CBB63; /* Bordure de la case lorsque coch\303\251e */\n"
"}\n"
"\n"
"/* Style de la case \303\240 cocher lorsque d\303\251sactiv\303\251e */\n"
"QCheckBox::indicator:disabled {\n"
"  background-color: #ccc; /* Couleur de fond lorsque d\303\251sactiv\303\251e */\n"
"  border: 1px solid #ccc; /* Bordure de la case lorsque d\303\251sactiv\303\251e */\n"
"}\n"
"\n"
"/* Style du texte du QCheckBox */\n"
"QCheckBox::indicator::u"
                        "nchecked {\n"
"  /* Style du texte lorsque la case n'est pas coch\303\251e */\n"
"}\n"
"\n"
"/* Style du texte du QCheckBox lorsque coch\303\251e */\n"
"QCheckBox::indicator::checked {\n"
"  /* Style du texte lorsque la case est coch\303\251e */\n"
"}"));
        pushButton_login = new QPushButton(page);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(90, 400, 211, 61));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_login->setFont(font2);
        pushButton_login->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QPushButton */\n"
"QPushButton {\n"
"  padding: 8px 16px; /* Espacement int\303\251rieur du bouton */\n"
"  border: none; /* Suppression de la bordure par d\303\251faut */\n"
"  border-radius: 5px; /* Coins arrondis */\n"
"  background-color: #2CBB63; /* Couleur de fond */\n"
"  color: white; /* Couleur du texte */\n"
"  font-size: 14px; /* Taille de police */\n"
"}\n"
"\n"
"/* Style au survol du QPushButton */\n"
"QPushButton:hover {\n"
"  background-color: #26A859; /* Couleur de fond au survol */\n"
"}\n"
"\n"
"/* Style lors du clic sur QPushButton */\n"
"QPushButton:pressed {\n"
"  background-color: #1E834E; /* Couleur de fond lors du clic */\n"
"}\n"
"\n"
"/* Style du QPushButton lorsque d\303\251sactiv\303\251 */\n"
"QPushButton:disabled {\n"
"  background-color: #ccc; /* Couleur de fond lorsque d\303\251sactiv\303\251 */\n"
"  color: #999; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"}"));
        label_signup = new ClickableLabel(page);
        label_signup->setObjectName(QStringLiteral("label_signup"));
        label_signup->setGeometry(QRect(160, 520, 61, 21));
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
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 540, 241, 41));
        stackedWidget->addWidget(page);
        label->raise();
        label_profil->raise();
        groupBox_2->raise();
        label_logo_alleco->raise();
        lineEdit_username->raise();
        label_login_noeditable->raise();
        lineEdit_password->raise();
        label_wrong->raise();
        label_eye->raise();
        checkBox_stayLogin->raise();
        pushButton_login->raise();
        label_signup->raise();
        label_2->raise();
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1200, 1200));
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

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AllEco", Q_NULLPTR));
        label_profil->setText(QString());
        groupBox_2->setTitle(QString());
        pushButton_setting1->setText(QApplication::translate("MainWindow", "SETTINGS", Q_NULLPTR));
        pushButton_signout1->setText(QApplication::translate("MainWindow", "SIGN OUT", Q_NULLPTR));
        pushButton_exit1->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
        label->setText(QString());
        label_logo_alleco->setText(QString());
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("MainWindow", "USERNAME", Q_NULLPTR));
        label_login_noeditable->setText(QApplication::translate("MainWindow", "Sign In", Q_NULLPTR));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        label_wrong->setText(QApplication::translate("MainWindow", "wrong password or username!", Q_NULLPTR));
        label_eye->setText(QString());
        checkBox_stayLogin->setText(QApplication::translate("MainWindow", "Stay signed in", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("MainWindow", "Sign in", Q_NULLPTR));
        label_signup->setText(QApplication::translate("MainWindow", "Sign Up!", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "THIS APP IS PROTECTED BY DEEPCODE TM AND ITS PRIVACY POLICY \n"
"AND TERMS OF SERVICES APPLY .", Q_NULLPTR));
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
