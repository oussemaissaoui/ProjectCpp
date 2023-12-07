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
    QLabel *label_12;
    QWidget *tab_4;
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
    QTableView *tab_etud;
    QLabel *label_13;

    void setupUi(QDialog *fourn)
    {
        if (fourn->objectName().isEmpty())
            fourn->setObjectName(QStringLiteral("fourn"));
        fourn->resize(1448, 712);
        stackedWidget = new QStackedWidget(fourn);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 2061, 611));
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
        tabWidget->setGeometry(QRect(9, 20, 1181, 561));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"  border: 0px solid #2CBB63; /* Green contour */\n"
"  border-radius: 8px;\n"
"  background-color: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"  alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"  background-color: white;\n"
"  color: black; /* Black text color */\n"
"  border: none; /* Remove the border */\n"
"  padding: 14px 25px;\n"
"  font-size: 12px;\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"  background-color: white; /* Green color */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #2CBB63; /* Green underline */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"  background-color: white; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline */\n"
"}\n"
"\n"
"QTabBar::tab:selected:hover {\n"
"  background-color: white; /* Green color */\n"
"  color: black; /* Black text color */\n"
"}"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        modifier = new QPushButton(tab_3);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(250, 400, 160, 41));
        modifier->setStyleSheet(QLatin1String("QPushButton{\n"
" 	border-radius:15px;\n"
"	color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	}"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 140, 80, 30));
        label_9->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 190, 160, 30));
        label_17->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        ajouter = new QPushButton(tab_3);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(60, 400, 160, 41));
        ajouter->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: #2CBB63; /* Green color */\n"
" 	border-radius:15px;\n"
"	\n"
"	}\n"
""));
        l_CIN_3 = new QLineEdit(tab_3);
        l_CIN_3->setObjectName(QStringLiteral("l_CIN_3"));
        l_CIN_3->setGeometry(QRect(620, 140, 170, 25));
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
        l_email->setGeometry(QRect(240, 190, 160, 25));
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
        l_CIN_2->setGeometry(QRect(620, 40, 170, 25));
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
        label_7->setGeometry(QRect(60, 240, 160, 30));
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(520, 40, 80, 30));
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 340, 160, 30));
        label_6->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 40, 160, 30));
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        l_nomentreprise = new QComboBox(tab_3);
        l_nomentreprise->setObjectName(QStringLiteral("l_nomentreprise"));
        l_nomentreprise->setGeometry(QRect(240, 290, 160, 26));
        l_nomentreprise->setStyleSheet(QLatin1String("QComboBox {\n"
"    border-radius: 9px;\n"
"    border: 2px solid #000000;\n"
"   background-color: #2CBB63; /* Green color */\n"
"    color: #000000; /* Couleur du texte */\n"
"}\n"
""));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 140, 160, 30));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 290, 160, 30));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        l_prenom = new QLineEdit(tab_3);
        l_prenom->setObjectName(QStringLiteral("l_prenom"));
        l_prenom->setGeometry(QRect(240, 40, 160, 25));
        l_prenom->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}\n"
""));
        l_CIN = new QLineEdit(tab_3);
        l_CIN->setObjectName(QStringLiteral("l_CIN"));
        l_CIN->setGeometry(QRect(240, 140, 160, 25));
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
        label_3->setGeometry(QRect(60, 90, 160, 30));
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}\n"
""));
        modifier_2 = new QPushButton(tab_3);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(810, 130, 190, 41));
        modifier_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(0, 0, 255);\n"
" 	border-radius:15px;\n"
"    color: white;\n"
"	}"));
        l_tel = new QLineEdit(tab_3);
        l_tel->setObjectName(QStringLiteral("l_tel"));
        l_tel->setGeometry(QRect(240, 240, 160, 25));
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
        l_nom->setGeometry(QRect(240, 90, 160, 25));
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
        supprimer->setGeometry(QRect(810, 30, 190, 41));
        supprimer->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: rgb(255, 0, 0);\n"
" 	border-radius:15px;\n"
"	\n"
"	}"));
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
        Homme->setGeometry(QRect(246, 347, 97, 20));
        Femme = new QRadioButton(tab_3);
        Femme->setObjectName(QStringLiteral("Femme"));
        Femme->setGeometry(QRect(340, 347, 97, 20));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(620, 230, 241, 191));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/img/alleco.png")));
        label_12->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 110, 16));
        l_entreprise = new QLineEdit(tab_4);
        l_entreprise->setObjectName(QStringLiteral("l_entreprise"));
        l_entreprise->setGeometry(QRect(970, 30, 113, 20));
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
        pushButto_stat->setGeometry(QRect(580, 120, 200, 40));
        pushButto_stat->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: #2CBB63; /* Green color */\n"
" 	border-radius:15px;\n"
"	\n"
"	}\n"
""));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 180, 40));
        PDF = new QPushButton(tab_4);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(580, 70, 200, 40));
        PDF->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: #2CBB63; /* Green color */\n"
" 	border-radius:15px;\n"
"	\n"
"	}\n"
""));
        qr_code = new QPushButton(tab_4);
        qr_code->setObjectName(QStringLiteral("qr_code"));
        qr_code->setGeometry(QRect(860, 120, 190, 40));
        qr_code->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: #2CBB63; /* Green color */\n"
" 	border-radius:15px;\n"
"	\n"
"	}\n"
""));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 120, 180, 40));
        comboBox->setStyleSheet(QLatin1String("background-color: #2CBB63;\n"
""));
        codeQr = new QLabel(tab_4);
        codeQr->setObjectName(QStringLiteral("codeQr"));
        codeQr->setGeometry(QRect(800, 170, 291, 271));
        pushButto_afficher = new QPushButton(tab_4);
        pushButto_afficher->setObjectName(QStringLiteral("pushButto_afficher"));
        pushButto_afficher->setGeometry(QRect(280, 120, 190, 40));
        pushButto_afficher->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: #2CBB63; /* Green color */\n"
" 	border-radius:15px;\n"
"	\n"
"	}\n"
""));
        camera = new QPushButton(tab_4);
        camera->setObjectName(QStringLiteral("camera"));
        camera->setGeometry(QRect(860, 70, 190, 40));
        camera->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: #2CBB63; /* Green color */\n"
" 	border-radius:15px;\n"
"	\n"
"	}\n"
""));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 70, 190, 40));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color: rgb(255, 0, 0);\n"
" 	border-radius:15px;\n"
"	\n"
"	}"));
        tab_etud = new QTableView(tab_4);
        tab_etud->setObjectName(QStringLiteral("tab_etud"));
        tab_etud->setGeometry(QRect(10, 180, 741, 261));
        tab_etud->setStyleSheet(QLatin1String("QTableView {\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  gridline-color: #2CBB63; /* Grid line color */\n"
"}\n"
"\n"
"QTableView::item {\n"
"  padding: 5px; /* Add padding to table cells */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"  background-color: #2CBB63; /* Set the background color of selected cells */\n"
"  color: white; /* Set the text color of selected cells */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"  background-color: #2CBB63; /* Set the background color of header sections */\n"
"  color: white; /* Set the text color of header sections */\n"
"  font-weight: bold; /* Bolder text */\n"
"}"));
        tabWidget->addTab(tab_4, QString());
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 0, 71, 51));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/img/alleco.png")));
        label_13->setScaledContents(true);
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
        label_12->setText(QString());
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
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fourn: public Ui_fourn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURN_H
