/********************************************************************************
** Form generated from reading UI file 'fourn.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURN_H
#define UI_FOURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fourn
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit__password;
    QPushButton *pushButton_login;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *modifier;
    QLabel *label_9;
    QLabel *label_17;
    QPushButton *ajouter;
    QLineEdit *l_CIN_3;
    QLineEdit *l_email;
    QLineEdit *l_CIN_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_2;
    QComboBox *l_nomentreprise;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *l_prenom;
    QLineEdit *l_CIN;
    QLabel *label_3;
    QPushButton *modifier_2;
    QLineEdit *l_tel;
    QLineEdit *l_nom;
    QPushButton *supprimer;
    QRadioButton *Homme;
    QRadioButton *Femme;
    QWidget *tab_4;
    QTableView *tab_etud;
    QLabel *label_4;
    QLineEdit *l_entreprise;
    QPushButton *pushButto_stat;
    QLineEdit *lineEdit;
    QPushButton *PDF;
    QPushButton *qr_code;
    QComboBox *comboBox;
    QLabel *codeQr;
    QPushButton *pushButto_afficher;
    QPushButton *camera;
    QPushButton *pushButton;

    void setupUi(QDialog *fourn)
    {
        if (fourn->objectName().isEmpty())
            fourn->setObjectName(QStringLiteral("fourn"));
        fourn->resize(1173, 662);
        stackedWidget = new QStackedWidget(fourn);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 2061, 571));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(290, 140, 551, 291));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 70, 80, 16));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 130, 80, 16));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(220, 60, 161, 31));
        lineEdit__password = new QLineEdit(groupBox);
        lineEdit__password->setObjectName(QStringLiteral("lineEdit__password"));
        lineEdit__password->setGeometry(QRect(220, 130, 161, 31));
        lineEdit__password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(190, 210, 160, 40));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 1171, 521));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        modifier = new QPushButton(tab_3);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(170, 440, 141, 41));
        modifier->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(380, 230, 69, 20));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 150, 131, 20));
        ajouter = new QPushButton(tab_3);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(180, 380, 112, 41));
        ajouter->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        l_CIN_3 = new QLineEdit(tab_3);
        l_CIN_3->setObjectName(QStringLiteral("l_CIN_3"));
        l_CIN_3->setGeometry(QRect(450, 230, 113, 25));
        l_CIN_3->setMinimumSize(QSize(113, 0));
        l_CIN_3->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        l_email = new QLineEdit(tab_3);
        l_email->setObjectName(QStringLiteral("l_email"));
        l_email->setGeometry(QRect(200, 150, 113, 25));
        l_email->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        l_CIN_2 = new QLineEdit(tab_3);
        l_CIN_2->setObjectName(QStringLiteral("l_CIN_2"));
        l_CIN_2->setGeometry(QRect(450, 100, 113, 25));
        l_CIN_2->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 200, 69, 20));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 110, 69, 20));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 280, 69, 20));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 40, 69, 20));
        l_nomentreprise = new QComboBox(tab_3);
        l_nomentreprise->setObjectName(QStringLiteral("l_nomentreprise"));
        l_nomentreprise->setGeometry(QRect(190, 240, 111, 26));
        l_nomentreprise->setStyleSheet(QLatin1String("QComboBox {\n"
"    border-radius: 9px;\n"
"    border: 2px solid #000000;\n"
"    background: qlineargradient(spread: pad, x1: 0, y1: 0.5056, x2: 0.5, y2: 0.477, stop: 0 rgba(176, 242, 182, 255), stop: 1 rgba(150, 200, 142, 255));\n"
"    color: #000000; /* Couleur du texte */\n"
"}\n"
""));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 110, 69, 20));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 240, 131, 20));
        l_prenom = new QLineEdit(tab_3);
        l_prenom->setObjectName(QStringLiteral("l_prenom"));
        l_prenom->setGeometry(QRect(200, 40, 113, 25));
        l_prenom->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        l_CIN = new QLineEdit(tab_3);
        l_CIN->setObjectName(QStringLiteral("l_CIN"));
        l_CIN->setGeometry(QRect(200, 110, 113, 25));
        l_CIN->setMinimumSize(QSize(113, 0));
        l_CIN->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 70, 69, 20));
        modifier_2 = new QPushButton(tab_3);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(400, 270, 221, 41));
        modifier_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        l_tel = new QLineEdit(tab_3);
        l_tel->setObjectName(QStringLiteral("l_tel"));
        l_tel->setGeometry(QRect(200, 200, 113, 25));
        l_tel->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        l_nom = new QLineEdit(tab_3);
        l_nom->setObjectName(QStringLiteral("l_nom"));
        l_nom->setGeometry(QRect(200, 70, 113, 25));
        l_nom->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        supprimer = new QPushButton(tab_3);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(450, 140, 111, 41));
        supprimer->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("poubelle");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("../Projetcpp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        supprimer->setIcon(icon);
        Homme = new QRadioButton(tab_3);
        Homme->setObjectName(QStringLiteral("Homme"));
        Homme->setGeometry(QRect(190, 290, 97, 20));
        Femme = new QRadioButton(tab_3);
        Femme->setObjectName(QStringLiteral("Femme"));
        Femme->setGeometry(QRect(190, 320, 97, 20));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_etud = new QTableView(tab_4);
        tab_etud->setObjectName(QStringLiteral("tab_etud"));
        tab_etud->setGeometry(QRect(20, 140, 735, 241));
        tab_etud->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 101, 16));
        l_entreprise = new QLineEdit(tab_4);
        l_entreprise->setObjectName(QStringLiteral("l_entreprise"));
        l_entreprise->setGeometry(QRect(640, 20, 113, 25));
        l_entreprise->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"\n"
"padding-bottom:7px;\n"
"}"));
        pushButto_stat = new QPushButton(tab_4);
        pushButto_stat->setObjectName(QStringLiteral("pushButto_stat"));
        pushButto_stat->setGeometry(QRect(510, 70, 141, 31));
        pushButto_stat->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 70, 130, 30));
        PDF = new QPushButton(tab_4);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(670, 70, 141, 30));
        PDF->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        qr_code = new QPushButton(tab_4);
        qr_code->setObjectName(QStringLiteral("qr_code"));
        qr_code->setGeometry(QRect(830, 70, 141, 31));
        qr_code->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 70, 160, 31));
        comboBox->setStyleSheet(QStringLiteral(""));
        codeQr = new QLabel(tab_4);
        codeQr->setObjectName(QStringLiteral("codeQr"));
        codeQr->setGeometry(QRect(800, 140, 291, 271));
        pushButto_afficher = new QPushButton(tab_4);
        pushButto_afficher->setObjectName(QStringLiteral("pushButto_afficher"));
        pushButto_afficher->setGeometry(QRect(350, 70, 141, 31));
        pushButto_afficher->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        camera = new QPushButton(tab_4);
        camera->setObjectName(QStringLiteral("camera"));
        camera->setGeometry(QRect(980, 70, 141, 31));
        camera->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(176, 242, 182, 255), stop:1 rgba(150, 200, 142, 255));\n"
"    color:rgba(255,255,255,210);\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.5056, x2:0.5, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
" 	border-radius:15px;\n"
"}"));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 20, 141, 41));
        tabWidget->addTab(tab_4, QString());
        stackedWidget->addWidget(page_2);

        retranslateUi(fourn);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(fourn);
    } // setupUi

    void retranslateUi(QDialog *fourn)
    {
        fourn->setWindowTitle(QApplication::translate("fourn", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("fourn", "GroupBox", Q_NULLPTR));
        label_10->setText(QApplication::translate("fourn", "Username", Q_NULLPTR));
        label_11->setText(QApplication::translate("fourn", "Password", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("fourn", "Login", Q_NULLPTR));
        modifier->setText(QApplication::translate("fourn", "Modifier", Q_NULLPTR));
        label_9->setText(QApplication::translate("fourn", "Old CIN:", Q_NULLPTR));
        label_17->setText(QApplication::translate("fourn", "EMAIL", Q_NULLPTR));
        ajouter->setText(QApplication::translate("fourn", "Ajouter", Q_NULLPTR));
        l_CIN_3->setText(QString());
        l_CIN_2->setText(QString());
        label_7->setText(QApplication::translate("fourn", "Num-tel:", Q_NULLPTR));
        label_8->setText(QApplication::translate("fourn", "CIN:", Q_NULLPTR));
        label_6->setText(QApplication::translate("fourn", "Sexe:", Q_NULLPTR));
        label_2->setText(QApplication::translate("fourn", "Prenom:", Q_NULLPTR));
        l_nomentreprise->clear();
        l_nomentreprise->insertItems(0, QStringList()
         << QApplication::translate("fourn", "Choisi", Q_NULLPTR)
         << QApplication::translate("fourn", "Kalkhoff", Q_NULLPTR)
         << QApplication::translate("fourn", "Tesla", Q_NULLPTR)
         << QApplication::translate("fourn", "Hyundai", Q_NULLPTR)
         << QApplication::translate("fourn", "Mazda", Q_NULLPTR)
         << QApplication::translate("fourn", "Beaufort", Q_NULLPTR)
         << QApplication::translate("fourn", "Trek", Q_NULLPTR)
        );
        label->setText(QApplication::translate("fourn", "CIN:", Q_NULLPTR));
        label_5->setText(QApplication::translate("fourn", "Nom de lentreprise : ", Q_NULLPTR));
        l_prenom->setText(QString());
        l_CIN->setText(QString());
        label_3->setText(QApplication::translate("fourn", "Nom:", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("fourn", "Afficher avant mofication", Q_NULLPTR));
        l_nom->setText(QString());
        supprimer->setText(QApplication::translate("fourn", "Supprimer", Q_NULLPTR));
        Homme->setText(QApplication::translate("fourn", "Homme", Q_NULLPTR));
        Femme->setText(QApplication::translate("fourn", "Femme", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("fourn", "Ajouter Fornisseur", Q_NULLPTR));
        label_4->setText(QApplication::translate("fourn", "Recherche :", Q_NULLPTR));
        pushButto_stat->setText(QApplication::translate("fourn", "Statistique", Q_NULLPTR));
        PDF->setText(QApplication::translate("fourn", "PDF", Q_NULLPTR));
        qr_code->setText(QApplication::translate("fourn", "QR CODE", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("fourn", "Trier les fournisseurs", Q_NULLPTR)
         << QApplication::translate("fourn", "Tri par Id", Q_NULLPTR)
         << QApplication::translate("fourn", "Tri par Nom", Q_NULLPTR)
         << QApplication::translate("fourn", "Tri par NomEntreprise", Q_NULLPTR)
        );
        codeQr->setText(QString());
        pushButto_afficher->setText(QApplication::translate("fourn", "Afficher", Q_NULLPTR));
        camera->setText(QApplication::translate("fourn", "Camera", Q_NULLPTR));
        pushButton->setText(QApplication::translate("fourn", "Afficher Sur LCD", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("fourn", "Afficher Fournisseur", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fourn: public Ui_fourn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURN_H
