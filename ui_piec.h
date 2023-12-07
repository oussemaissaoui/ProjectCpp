/********************************************************************************
** Form generated from reading UI file 'piec.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIEC_H
#define UI_PIEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_piec
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_Valider_2;
    QLabel *label_Reference_2;
    QLabel *label_categorie_2;
    QLabel *label_fournisseur_2;
    QLabel *label_Marque_2;
    QLabel *label_nb_pieces_2;
    QLineEdit *lineEdit_Reference_2;
    QLineEdit *lineEdit_Categorie_2;
    QLineEdit *lineEdit_Fournisseur_2;
    QLineEdit *lineEdit_Marque_2;
    QLineEdit *lineEdit_nb_pieces_2;
    QLabel *label_prix_unit_2;
    QLineEdit *lineEdit_prix_unit_2;
    QGroupBox *groupBox_4;
    QLabel *label_categorie_3;
    QLabel *label_fournisseur_3;
    QLabel *label_Marque_3;
    QLabel *label_nb_pieces_3;
    QLineEdit *lineEdit_Categorie_3;
    QLineEdit *lineEdit_Fournisseur_3;
    QLineEdit *lineEdit_Marque_3;
    QLineEdit *lineEdit_nb_pieces_3;
    QLabel *label_prix_unit_3;
    QLineEdit *lineEdit_prix_unit_3;
    QLineEdit *lineEdit_Modification;
    QPushButton *pushButton_Modifier;
    QPushButton *pushButton_Supprimer;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_Chercher_3;
    QLineEdit *lineEdit_Reference_3;
    QTableView *TableViewPieceRecherche;
    QPushButton *pushButton_Trier;
    QPushButton *pushButton_PDF;
    QPushButton *pushButton_statistiques;
    QWidget *tab_7;
    QGroupBox *groupBox_6;
    QPushButton *sendBtn;
    QLabel *label_Reference_6;
    QLabel *label_Reference_8;
    QLabel *label_Reference_9;
    QLabel *label_Reference_10;
    QLineEdit *lineEdit_Serveur;
    QLineEdit *lineEdit_port_serveur;
    QLineEdit *lineEdit_Employe;
    QLineEdit *lineEdit_MDP;
    QLineEdit *lineEdit_Fournisseur;
    QLineEdit *lineEdit_ObjetMail;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QDialog *piec)
    {
        if (piec->objectName().isEmpty())
            piec->setObjectName(QStringLiteral("piec"));
        piec->resize(1206, 598);
        centralWidget = new QWidget(piec);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1191, 561));
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
"  padding: 16px 26px;\n"
"  font-size: 11px;\n"
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
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 10, 501, 481));
        QFont font;
        font.setFamily(QStringLiteral("Poppins"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"  border: none;\n"
"  margin-top: 10px;\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"background-color:white;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 8px;\n"
"  color: white;\n"
"  font-size: 20px; /* Increased font size */\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"  background-color: #2CBB63;\n"
"  border-bottom: 2px solid #2CBB63; /* Green bottom border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-right: 2px solid #2CBB63; /* Green right border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"}"));
        pushButton_Valider_2 = new QPushButton(groupBox);
        pushButton_Valider_2->setObjectName(QStringLiteral("pushButton_Valider_2"));
        pushButton_Valider_2->setGeometry(QRect(170, 390, 131, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Poppins"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Valider_2->setFont(font1);
        pushButton_Valider_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_Reference_2 = new QLabel(groupBox);
        label_Reference_2->setObjectName(QStringLiteral("label_Reference_2"));
        label_Reference_2->setGeometry(QRect(50, 60, 161, 41));
        label_Reference_2->setFont(font1);
        label_Reference_2->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_categorie_2 = new QLabel(groupBox);
        label_categorie_2->setObjectName(QStringLiteral("label_categorie_2"));
        label_categorie_2->setGeometry(QRect(50, 110, 161, 41));
        label_categorie_2->setFont(font1);
        label_categorie_2->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
" font-style:poppins;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_fournisseur_2 = new QLabel(groupBox);
        label_fournisseur_2->setObjectName(QStringLiteral("label_fournisseur_2"));
        label_fournisseur_2->setGeometry(QRect(50, 160, 161, 41));
        label_fournisseur_2->setFont(font1);
        label_fournisseur_2->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_Marque_2 = new QLabel(groupBox);
        label_Marque_2->setObjectName(QStringLiteral("label_Marque_2"));
        label_Marque_2->setGeometry(QRect(50, 210, 161, 41));
        label_Marque_2->setFont(font1);
        label_Marque_2->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_nb_pieces_2 = new QLabel(groupBox);
        label_nb_pieces_2->setObjectName(QStringLiteral("label_nb_pieces_2"));
        label_nb_pieces_2->setGeometry(QRect(50, 260, 161, 41));
        label_nb_pieces_2->setFont(font1);
        label_nb_pieces_2->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        lineEdit_Reference_2 = new QLineEdit(groupBox);
        lineEdit_Reference_2->setObjectName(QStringLiteral("lineEdit_Reference_2"));
        lineEdit_Reference_2->setGeometry(QRect(220, 60, 241, 41));
        lineEdit_Reference_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Categorie_2 = new QLineEdit(groupBox);
        lineEdit_Categorie_2->setObjectName(QStringLiteral("lineEdit_Categorie_2"));
        lineEdit_Categorie_2->setGeometry(QRect(220, 110, 241, 41));
        lineEdit_Categorie_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Fournisseur_2 = new QLineEdit(groupBox);
        lineEdit_Fournisseur_2->setObjectName(QStringLiteral("lineEdit_Fournisseur_2"));
        lineEdit_Fournisseur_2->setGeometry(QRect(220, 160, 241, 41));
        lineEdit_Fournisseur_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Marque_2 = new QLineEdit(groupBox);
        lineEdit_Marque_2->setObjectName(QStringLiteral("lineEdit_Marque_2"));
        lineEdit_Marque_2->setGeometry(QRect(220, 210, 241, 41));
        lineEdit_Marque_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_nb_pieces_2 = new QLineEdit(groupBox);
        lineEdit_nb_pieces_2->setObjectName(QStringLiteral("lineEdit_nb_pieces_2"));
        lineEdit_nb_pieces_2->setGeometry(QRect(220, 260, 241, 41));
        lineEdit_nb_pieces_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        label_prix_unit_2 = new QLabel(groupBox);
        label_prix_unit_2->setObjectName(QStringLiteral("label_prix_unit_2"));
        label_prix_unit_2->setGeometry(QRect(50, 310, 161, 41));
        label_prix_unit_2->setFont(font1);
        label_prix_unit_2->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        lineEdit_prix_unit_2 = new QLineEdit(groupBox);
        lineEdit_prix_unit_2->setObjectName(QStringLiteral("lineEdit_prix_unit_2"));
        lineEdit_prix_unit_2->setGeometry(QRect(220, 310, 241, 41));
        lineEdit_prix_unit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(590, 10, 511, 481));
        groupBox_4->setFont(font);
        groupBox_4->setStyleSheet(QLatin1String("QGroupBox {\n"
"  border: none;\n"
"  margin-top: 10px;\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"background-color:white;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 8px;\n"
"  color: white;\n"
"  font-size: 20px; /* Increased font size */\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"  background-color: #2CBB63;\n"
"  border-bottom: 2px solid #2CBB63; /* Green bottom border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-right: 2px solid #2CBB63; /* Green right border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"}"));
        label_categorie_3 = new QLabel(groupBox_4);
        label_categorie_3->setObjectName(QStringLiteral("label_categorie_3"));
        label_categorie_3->setGeometry(QRect(60, 120, 151, 41));
        label_categorie_3->setFont(font1);
        label_categorie_3->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_fournisseur_3 = new QLabel(groupBox_4);
        label_fournisseur_3->setObjectName(QStringLiteral("label_fournisseur_3"));
        label_fournisseur_3->setGeometry(QRect(60, 170, 151, 41));
        label_fournisseur_3->setFont(font1);
        label_fournisseur_3->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_Marque_3 = new QLabel(groupBox_4);
        label_Marque_3->setObjectName(QStringLiteral("label_Marque_3"));
        label_Marque_3->setGeometry(QRect(60, 220, 151, 41));
        label_Marque_3->setFont(font1);
        label_Marque_3->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_nb_pieces_3 = new QLabel(groupBox_4);
        label_nb_pieces_3->setObjectName(QStringLiteral("label_nb_pieces_3"));
        label_nb_pieces_3->setGeometry(QRect(60, 270, 151, 41));
        label_nb_pieces_3->setFont(font1);
        label_nb_pieces_3->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        lineEdit_Categorie_3 = new QLineEdit(groupBox_4);
        lineEdit_Categorie_3->setObjectName(QStringLiteral("lineEdit_Categorie_3"));
        lineEdit_Categorie_3->setGeometry(QRect(220, 120, 241, 41));
        lineEdit_Categorie_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Fournisseur_3 = new QLineEdit(groupBox_4);
        lineEdit_Fournisseur_3->setObjectName(QStringLiteral("lineEdit_Fournisseur_3"));
        lineEdit_Fournisseur_3->setGeometry(QRect(220, 170, 241, 41));
        lineEdit_Fournisseur_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Marque_3 = new QLineEdit(groupBox_4);
        lineEdit_Marque_3->setObjectName(QStringLiteral("lineEdit_Marque_3"));
        lineEdit_Marque_3->setGeometry(QRect(220, 220, 241, 41));
        lineEdit_Marque_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_nb_pieces_3 = new QLineEdit(groupBox_4);
        lineEdit_nb_pieces_3->setObjectName(QStringLiteral("lineEdit_nb_pieces_3"));
        lineEdit_nb_pieces_3->setGeometry(QRect(220, 270, 241, 41));
        lineEdit_nb_pieces_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        label_prix_unit_3 = new QLabel(groupBox_4);
        label_prix_unit_3->setObjectName(QStringLiteral("label_prix_unit_3"));
        label_prix_unit_3->setGeometry(QRect(60, 320, 151, 41));
        label_prix_unit_3->setFont(font1);
        label_prix_unit_3->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        lineEdit_prix_unit_3 = new QLineEdit(groupBox_4);
        lineEdit_prix_unit_3->setObjectName(QStringLiteral("lineEdit_prix_unit_3"));
        lineEdit_prix_unit_3->setGeometry(QRect(220, 320, 241, 41));
        lineEdit_prix_unit_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Modification = new QLineEdit(groupBox_4);
        lineEdit_Modification->setObjectName(QStringLiteral("lineEdit_Modification"));
        lineEdit_Modification->setGeometry(QRect(120, 70, 281, 41));
        lineEdit_Modification->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Grey border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Green border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"  outline: none; /* Remove focus outline */\n"
"}"));
        lineEdit_Modification->setReadOnly(false);
        pushButton_Modifier = new QPushButton(groupBox_4);
        pushButton_Modifier->setObjectName(QStringLiteral("pushButton_Modifier"));
        pushButton_Modifier->setGeometry(QRect(120, 390, 131, 51));
        pushButton_Modifier->setFont(font1);
        pushButton_Modifier->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_Supprimer = new QPushButton(groupBox_4);
        pushButton_Supprimer->setObjectName(QStringLiteral("pushButton_Supprimer"));
        pushButton_Supprimer->setGeometry(QRect(260, 390, 131, 51));
        pushButton_Supprimer->setFont(font1);
        pushButton_Supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 1181, 481));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox {\n"
"  border: none;\n"
"  margin-top: 10px;\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"background-color:white;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 8px;\n"
"  color: white;\n"
"  font-size: 20px; /* Increased font size */\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"  background-color: #2CBB63;\n"
"  border-bottom: 2px solid #2CBB63; /* Green bottom border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-right: 2px solid #2CBB63; /* Green right border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"}"));
        pushButton_Chercher_3 = new QPushButton(groupBox_3);
        pushButton_Chercher_3->setObjectName(QStringLiteral("pushButton_Chercher_3"));
        pushButton_Chercher_3->setGeometry(QRect(480, 50, 141, 51));
        pushButton_Chercher_3->setFont(font1);
        pushButton_Chercher_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        lineEdit_Reference_3 = new QLineEdit(groupBox_3);
        lineEdit_Reference_3->setObjectName(QStringLiteral("lineEdit_Reference_3"));
        lineEdit_Reference_3->setGeometry(QRect(40, 50, 421, 51));
        lineEdit_Reference_3->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Grey border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Green border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"  outline: none; /* Remove focus outline */\n"
"}"));
        TableViewPieceRecherche = new QTableView(groupBox_3);
        TableViewPieceRecherche->setObjectName(QStringLiteral("TableViewPieceRecherche"));
        TableViewPieceRecherche->setGeometry(QRect(30, 120, 1141, 341));
        TableViewPieceRecherche->setStyleSheet(QString::fromUtf8("QTableView {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Bordure grise */\n"
"  border-radius: 5px; /* Coins arrondis */\n"
"  background-color: white; /* Arri\303\250re-plan blanc */\n"
"  color: black; /* Couleur du texte noire */\n"
"}\n"
"\n"
"QTableView:hover {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au survol */\n"
"}\n"
"\n"
"QTableView:focus {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au focus */\n"
"  outline: none; /* Supprimer la mise en \303\251vidence lors du focus */\n"
"}"));
        pushButton_Trier = new QPushButton(groupBox_3);
        pushButton_Trier->setObjectName(QStringLiteral("pushButton_Trier"));
        pushButton_Trier->setGeometry(QRect(630, 50, 141, 51));
        pushButton_Trier->setFont(font1);
        pushButton_Trier->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_PDF = new QPushButton(groupBox_3);
        pushButton_PDF->setObjectName(QStringLiteral("pushButton_PDF"));
        pushButton_PDF->setGeometry(QRect(780, 50, 111, 51));
        pushButton_PDF->setFont(font1);
        pushButton_PDF->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_statistiques = new QPushButton(groupBox_3);
        pushButton_statistiques->setObjectName(QStringLiteral("pushButton_statistiques"));
        pushButton_statistiques->setGeometry(QRect(900, 50, 131, 51));
        pushButton_statistiques->setFont(font1);
        pushButton_statistiques->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBox_6 = new QGroupBox(tab_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(40, 0, 1101, 481));
        groupBox_6->setFont(font);
        groupBox_6->setStyleSheet(QLatin1String("QGroupBox {\n"
"  border: none;\n"
"  margin-top: 10px;\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"background-color:white;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 8px;\n"
"  color: white;\n"
"  font-size: 20px; /* Increased font size */\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"  background-color: #2CBB63;\n"
"  border-bottom: 2px solid #2CBB63; /* Green bottom border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-right: 2px solid #2CBB63; /* Green right border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"}"));
        sendBtn = new QPushButton(groupBox_6);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(970, 410, 121, 51));
        sendBtn->setFont(font1);
        sendBtn->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_Reference_6 = new QLabel(groupBox_6);
        label_Reference_6->setObjectName(QStringLiteral("label_Reference_6"));
        label_Reference_6->setGeometry(QRect(60, 50, 181, 41));
        label_Reference_6->setFont(font1);
        label_Reference_6->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_Reference_8 = new QLabel(groupBox_6);
        label_Reference_8->setObjectName(QStringLiteral("label_Reference_8"));
        label_Reference_8->setGeometry(QRect(60, 100, 181, 41));
        label_Reference_8->setFont(font1);
        label_Reference_8->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_Reference_9 = new QLabel(groupBox_6);
        label_Reference_9->setObjectName(QStringLiteral("label_Reference_9"));
        label_Reference_9->setGeometry(QRect(540, 50, 181, 41));
        label_Reference_9->setFont(font1);
        label_Reference_9->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        label_Reference_10 = new QLabel(groupBox_6);
        label_Reference_10->setObjectName(QStringLiteral("label_Reference_10"));
        label_Reference_10->setGeometry(QRect(540, 100, 181, 41));
        label_Reference_10->setFont(font1);
        label_Reference_10->setStyleSheet(QLatin1String("QLabel {\n"
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
"}"));
        lineEdit_Serveur = new QLineEdit(groupBox_6);
        lineEdit_Serveur->setObjectName(QStringLiteral("lineEdit_Serveur"));
        lineEdit_Serveur->setGeometry(QRect(250, 50, 271, 41));
        lineEdit_Serveur->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_port_serveur = new QLineEdit(groupBox_6);
        lineEdit_port_serveur->setObjectName(QStringLiteral("lineEdit_port_serveur"));
        lineEdit_port_serveur->setGeometry(QRect(250, 100, 271, 41));
        lineEdit_port_serveur->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Employe = new QLineEdit(groupBox_6);
        lineEdit_Employe->setObjectName(QStringLiteral("lineEdit_Employe"));
        lineEdit_Employe->setGeometry(QRect(720, 50, 351, 41));
        lineEdit_Employe->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_MDP = new QLineEdit(groupBox_6);
        lineEdit_MDP->setObjectName(QStringLiteral("lineEdit_MDP"));
        lineEdit_MDP->setGeometry(QRect(730, 100, 351, 41));
        lineEdit_MDP->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"}"));
        lineEdit_Fournisseur = new QLineEdit(groupBox_6);
        lineEdit_Fournisseur->setObjectName(QStringLiteral("lineEdit_Fournisseur"));
        lineEdit_Fournisseur->setGeometry(QRect(30, 150, 1061, 41));
        lineEdit_Fournisseur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Grey border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Green border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"  outline: none; /* Remove focus outline */\n"
"}"));
        lineEdit_ObjetMail = new QLineEdit(groupBox_6);
        lineEdit_ObjetMail->setObjectName(QStringLiteral("lineEdit_ObjetMail"));
        lineEdit_ObjetMail->setGeometry(QRect(30, 190, 1061, 41));
        lineEdit_ObjetMail->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Grey border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Green border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"  outline: none; /* Remove focus outline */\n"
"}"));
        plainTextEdit = new QPlainTextEdit(groupBox_6);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 230, 1061, 171));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Bordure grise */\n"
"  border-radius: 5px; /* Coins arrondis */\n"
"  background-color: white; /* Arri\303\250re-plan blanc */\n"
"  color: black; /* Couleur du texte noire */\n"
"}\n"
"\n"
"QPlainTextEdit:hover {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au survol */\n"
"}\n"
"\n"
"QPlainTextEdit:focus {\n"
"  border-color: #2CBB63; /* Couleur de la bordure verte au focus */\n"
"  outline: none; /* Supprimer la mise en \303\251vidence lors du focus */\n"
"}"));
        tabWidget->addTab(tab_7, QString());
        menuBar = new QMenuBar(piec);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1206, 22));
        mainToolBar = new QToolBar(piec);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        statusBar = new QStatusBar(piec);
        statusBar->setObjectName(QStringLiteral("statusBar"));

        retranslateUi(piec);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(piec);
    } // setupUi

    void retranslateUi(QDialog *piec)
    {
        piec->setWindowTitle(QApplication::translate("piec", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("piec", "Ajouter une pi\303\250ce de rechange", Q_NULLPTR));
        pushButton_Valider_2->setText(QApplication::translate("piec", "Ajouter", Q_NULLPTR));
        label_Reference_2->setText(QApplication::translate("piec", "R\303\251f\303\251rence", Q_NULLPTR));
        label_categorie_2->setText(QApplication::translate("piec", "Cat\303\251gorie", Q_NULLPTR));
        label_fournisseur_2->setText(QApplication::translate("piec", "Fournisseur", Q_NULLPTR));
        label_Marque_2->setText(QApplication::translate("piec", "Marque", Q_NULLPTR));
        label_nb_pieces_2->setText(QApplication::translate("piec", "Nombre de Pi\303\250ces ", Q_NULLPTR));
        label_prix_unit_2->setText(QApplication::translate("piec", "Prix unitaire", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("piec", "Modifier une pi\303\250ce de rechange", Q_NULLPTR));
        label_categorie_3->setText(QApplication::translate("piec", "Cat\303\251gorie", Q_NULLPTR));
        label_fournisseur_3->setText(QApplication::translate("piec", "Fournisseur", Q_NULLPTR));
        label_Marque_3->setText(QApplication::translate("piec", "Marque", Q_NULLPTR));
        label_nb_pieces_3->setText(QApplication::translate("piec", "Nombre de pieces ", Q_NULLPTR));
        label_prix_unit_3->setText(QApplication::translate("piec", "Prix unitaire", Q_NULLPTR));
        lineEdit_Modification->setPlaceholderText(QApplication::translate("piec", "Reference de la pi\303\251ce a modifier", Q_NULLPTR));
        pushButton_Modifier->setText(QApplication::translate("piec", "Modifier", Q_NULLPTR));
        pushButton_Supprimer->setText(QApplication::translate("piec", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("piec", "Ajouter une Pi\303\250ce", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("piec", "Chercher une pi\303\250ce de rechange", Q_NULLPTR));
        pushButton_Chercher_3->setText(QApplication::translate("piec", "Chercher", Q_NULLPTR));
        lineEdit_Reference_3->setPlaceholderText(QApplication::translate("piec", "R\303\251ference de la pi\303\251ce", Q_NULLPTR));
        pushButton_Trier->setText(QApplication::translate("piec", "Trier", Q_NULLPTR));
        pushButton_PDF->setText(QApplication::translate("piec", "PDF", Q_NULLPTR));
        pushButton_statistiques->setText(QApplication::translate("piec", "Statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("piec", "Liste des pi\303\251ces", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("piec", "Mailing des Fournisseurs", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("piec", "Envoyer", Q_NULLPTR));
        label_Reference_6->setText(QApplication::translate("piec", "Serveur", Q_NULLPTR));
        label_Reference_8->setText(QApplication::translate("piec", "Serveur", Q_NULLPTR));
        label_Reference_9->setText(QApplication::translate("piec", "Mail de l'Employ\303\251", Q_NULLPTR));
        label_Reference_10->setText(QApplication::translate("piec", "Mot de Passe", Q_NULLPTR));
        lineEdit_Serveur->setText(QApplication::translate("piec", "smtp.gmail.com", Q_NULLPTR));
        lineEdit_port_serveur->setText(QApplication::translate("piec", "465", Q_NULLPTR));
        lineEdit_Fournisseur->setText(QString());
        lineEdit_Fournisseur->setPlaceholderText(QApplication::translate("piec", "Mail du Fournisseur", Q_NULLPTR));
        lineEdit_ObjetMail->setText(QString());
        lineEdit_ObjetMail->setPlaceholderText(QApplication::translate("piec", "Objet", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("piec", "Mailing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class piec: public Ui_piec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIEC_H
