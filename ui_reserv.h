/********************************************************************************
** Form generated from reading UI file 'reserv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERV_H
#define UI_RESERV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reserv
{
public:
    QWidget *centralwidget;
    QTabWidget *calendrier;
    QWidget *tab_5;
    QPushButton *pushButton_check;
    QWidget *ajouter_2;
    QGroupBox *groupBox;
    QPushButton *ajouter;
    QLabel *matricule;
    QLabel *date_fin;
    QLabel *id_client;
    QLabel *montant;
    QLineEdit *nomcl;
    QLabel *date_debut;
    QLineEdit *montant_2;
    QLabel *numero;
    QLineEdit *numres;
    QLineEdit *numvoiture;
    QDateEdit *dateEdit_2;
    QDateEdit *dateEdit_6;
    QGroupBox *groupBox_4;
    QGroupBox *modifier_2;
    QDateEdit *dateEdit_7;
    QLineEdit *numvoiture_3;
    QDateEdit *dateEdit_8;
    QLineEdit *montant_5;
    QLineEdit *nomcl_3;
    QLabel *id_client_4;
    QLabel *matricule_3;
    QLabel *date_debut_3;
    QLabel *date_fin_3;
    QLabel *montant_6;
    QPushButton *GENERER_PDF_2;
    QPushButton *ajouter_4;
    QPushButton *pushButton_6;
    QLineEdit *numres_3;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QLineEdit *rechercher;
    QPushButton *recherche;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QDateEdit *dateEdit_5;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QFrame *frame_2;
    QPushButton *pushButton_4;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *lineEditMatricule;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_2;
    QToolBar *toolBar;
    QMenuBar *menuBar;

    void setupUi(QDialog *Reserv)
    {
        if (Reserv->objectName().isEmpty())
            Reserv->setObjectName(QStringLiteral("Reserv"));
        Reserv->resize(1213, 694);
        Reserv->setStyleSheet(QLatin1String("\n"
"font: 87 10pt \"Poppins\"\n"
"rgb(0, 170, 0)"));
        centralwidget = new QWidget(Reserv);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 1181, 651));
        calendrier = new QTabWidget(centralwidget);
        calendrier->setObjectName(QStringLiteral("calendrier"));
        calendrier->setGeometry(QRect(10, 10, 1161, 631));
        calendrier->setFocusPolicy(Qt::StrongFocus);
        calendrier->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
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
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_check = new QPushButton(tab_5);
        pushButton_check->setObjectName(QStringLiteral("pushButton_check"));
        pushButton_check->setGeometry(QRect(250, 160, 601, 171));
        QFont font;
        font.setFamily(QStringLiteral("Poppins"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton_check->setFont(font);
        pushButton_check->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 30px;\n"
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
        calendrier->addTab(tab_5, QString());
        ajouter_2 = new QWidget();
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        groupBox = new QGroupBox(ajouter_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 40, 451, 481));
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
        ajouter = new QPushButton(groupBox);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(310, 420, 121, 41));
        ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
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
        matricule = new QLabel(groupBox);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(40, 160, 151, 41));
        matricule->setStyleSheet(QLatin1String("QLabel {\n"
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
        date_fin = new QLabel(groupBox);
        date_fin->setObjectName(QStringLiteral("date_fin"));
        date_fin->setGeometry(QRect(40, 260, 151, 41));
        date_fin->setStyleSheet(QLatin1String("QLabel {\n"
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
        id_client = new QLabel(groupBox);
        id_client->setObjectName(QStringLiteral("id_client"));
        id_client->setGeometry(QRect(40, 60, 151, 41));
        id_client->setStyleSheet(QLatin1String("QLabel {\n"
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
        montant = new QLabel(groupBox);
        montant->setObjectName(QStringLiteral("montant"));
        montant->setGeometry(QRect(40, 310, 151, 41));
        montant->setStyleSheet(QLatin1String("QLabel {\n"
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
        nomcl = new QLineEdit(groupBox);
        nomcl->setObjectName(QStringLiteral("nomcl"));
        nomcl->setGeometry(QRect(200, 60, 221, 41));
        nomcl->setStyleSheet(QLatin1String("QLabel {\n"
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
"}QLineEdit {\n"
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
        date_debut = new QLabel(groupBox);
        date_debut->setObjectName(QStringLiteral("date_debut"));
        date_debut->setGeometry(QRect(40, 210, 151, 41));
        date_debut->setStyleSheet(QLatin1String("QLabel {\n"
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
        montant_2 = new QLineEdit(groupBox);
        montant_2->setObjectName(QStringLiteral("montant_2"));
        montant_2->setGeometry(QRect(200, 310, 221, 41));
        montant_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        numero = new QLabel(groupBox);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(40, 110, 151, 41));
        numero->setStyleSheet(QLatin1String("QLabel {\n"
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
        numres = new QLineEdit(groupBox);
        numres->setObjectName(QStringLiteral("numres"));
        numres->setGeometry(QRect(200, 110, 221, 41));
        numres->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        numvoiture = new QLineEdit(groupBox);
        numvoiture->setObjectName(QStringLiteral("numvoiture"));
        numvoiture->setGeometry(QRect(200, 160, 221, 41));
        numvoiture->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(200, 210, 221, 41));
        dateEdit_2->setStyleSheet(QLatin1String("QDateEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        dateEdit_6 = new QDateEdit(groupBox);
        dateEdit_6->setObjectName(QStringLiteral("dateEdit_6"));
        dateEdit_6->setGeometry(QRect(200, 260, 221, 41));
        dateEdit_6->setStyleSheet(QLatin1String("QDateEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        groupBox_4 = new QGroupBox(ajouter_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(570, 80, 561, 481));
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
        modifier_2 = new QGroupBox(groupBox_4);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(60, 70, 451, 301));
        modifier_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    background-color: #f2f2f2;\n"
"    color: #333333;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QGroupBox:hover, QGroupBox:focus {\n"
"    background-color: blue;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* Position the title to the top-left */\n"
"    padding: 5px;\n"
"    background-color: white;\n"
"    border: none;\n"
"    border-top-left-radius: 10px; /* Rounded edge only on the top-left corner */\n"
"    border-top-right-radius: 10px; /* Rounded edge only on the top-right corner */\n"
"}\n"
"\n"
"QGroupBox::title:hover, QGroupBox::title:focus {\n"
"    background-color: blue;\n"
"}"));
        dateEdit_7 = new QDateEdit(modifier_2);
        dateEdit_7->setObjectName(QStringLiteral("dateEdit_7"));
        dateEdit_7->setGeometry(QRect(240, 180, 201, 41));
        dateEdit_7->setStyleSheet(QLatin1String("QDateEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        numvoiture_3 = new QLineEdit(modifier_2);
        numvoiture_3->setObjectName(QStringLiteral("numvoiture_3"));
        numvoiture_3->setGeometry(QRect(240, 80, 201, 41));
        numvoiture_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        dateEdit_8 = new QDateEdit(modifier_2);
        dateEdit_8->setObjectName(QStringLiteral("dateEdit_8"));
        dateEdit_8->setGeometry(QRect(240, 130, 201, 41));
        dateEdit_8->setStyleSheet(QLatin1String("QDateEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        montant_5 = new QLineEdit(modifier_2);
        montant_5->setObjectName(QStringLiteral("montant_5"));
        montant_5->setGeometry(QRect(240, 230, 201, 41));
        montant_5->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        nomcl_3 = new QLineEdit(modifier_2);
        nomcl_3->setObjectName(QStringLiteral("nomcl_3"));
        nomcl_3->setGeometry(QRect(240, 30, 201, 41));
        nomcl_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        id_client_4 = new QLabel(modifier_2);
        id_client_4->setObjectName(QStringLiteral("id_client_4"));
        id_client_4->setGeometry(QRect(40, 30, 171, 41));
        id_client_4->setStyleSheet(QLatin1String("QLabel {\n"
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
        matricule_3 = new QLabel(modifier_2);
        matricule_3->setObjectName(QStringLiteral("matricule_3"));
        matricule_3->setGeometry(QRect(40, 80, 171, 41));
        matricule_3->setStyleSheet(QLatin1String("QLabel {\n"
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
        date_debut_3 = new QLabel(modifier_2);
        date_debut_3->setObjectName(QStringLiteral("date_debut_3"));
        date_debut_3->setGeometry(QRect(40, 180, 171, 41));
        date_debut_3->setStyleSheet(QLatin1String("QLabel {\n"
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
        date_fin_3 = new QLabel(modifier_2);
        date_fin_3->setObjectName(QStringLiteral("date_fin_3"));
        date_fin_3->setGeometry(QRect(40, 130, 171, 41));
        date_fin_3->setStyleSheet(QLatin1String("QLabel {\n"
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
        montant_6 = new QLabel(modifier_2);
        montant_6->setObjectName(QStringLiteral("montant_6"));
        montant_6->setGeometry(QRect(40, 230, 171, 41));
        montant_6->setStyleSheet(QLatin1String("QLabel {\n"
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
        GENERER_PDF_2 = new QPushButton(groupBox_4);
        GENERER_PDF_2->setObjectName(QStringLiteral("GENERER_PDF_2"));
        GENERER_PDF_2->setGeometry(QRect(350, 390, 161, 41));
        GENERER_PDF_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        ajouter_4 = new QPushButton(groupBox_4);
        ajouter_4->setObjectName(QStringLiteral("ajouter_4"));
        ajouter_4->setGeometry(QRect(190, 390, 151, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(44, 187, 99, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        ajouter_4->setPalette(palette);
        ajouter_4->setCursor(QCursor(Qt::OpenHandCursor));
        ajouter_4->setMouseTracking(true);
        ajouter_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 390, 141, 41));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        numres_3 = new QLineEdit(ajouter_2);
        numres_3->setObjectName(QStringLiteral("numres_3"));
        numres_3->setGeometry(QRect(710, 40, 281, 41));
        numres_3->setAutoFillBackground(false);
        numres_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        calendrier->addTab(ajouter_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 20, 1101, 511));
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
        rechercher = new QLineEdit(groupBox_3);
        rechercher->setObjectName(QStringLiteral("rechercher"));
        rechercher->setGeometry(QRect(30, 60, 341, 31));
        rechercher->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        recherche = new QPushButton(groupBox_3);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(380, 60, 141, 31));
        recherche->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 60, 101, 31));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 110, 1041, 371));
        tableView->setStyleSheet(QLatin1String("QTableView {\n"
"  background-color: #ffffff;\n"
"  color: #000000;\n"
"  gridline-color: #cccccc;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"  background-color: #0066cc;\n"
"  color: #ffffff;\n"
"}\n"
"\n"
"QTableView QHeaderView::section {\n"
"  background-color: #0066cc;\n"
"  color: #ffffff;\n"
"  font-weight: bold;\n"
"  padding: 5px;\n"
"  border: none;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:pressed {\n"
"  background-color: #0044aa;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked {\n"
"  background-color: #0088ff;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked:disabled {\n"
"  background-color: #cccccc;\n"
"  color: #999999;\n"
"}"));
        dateEdit_5 = new QDateEdit(groupBox_3);
        dateEdit_5->setObjectName(QStringLiteral("dateEdit_5"));
        dateEdit_5->setGeometry(QRect(640, 60, 351, 31));
        dateEdit_5->setStyleSheet(QLatin1String("QDateEdit {\n"
"  border: 2px solid #808080; /* Add a solid black border */\n"
"  padding: 0;\n"
"  background-color: transparent; /* Transparent background */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding: 2px; /* Increase padding */\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1000, 60, 91, 31));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        calendrier->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        frame_2 = new QFrame(tab_4);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(40, 30, 1051, 481));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(970, 520, 151, 41));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        calendrier->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 30, 1091, 531));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 480, 281, 31));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    padding: 5px;\n"
"    background-color: red;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: semi bold;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: #b30000;\n"
"}\n"
"\n"
"QLabel:pressed {\n"
"    background-color: #800000;\n"
"}"));
        lineEditMatricule = new QLineEdit(groupBox_2);
        lineEditMatricule->setObjectName(QStringLiteral("lineEditMatricule"));
        lineEditMatricule->setGeometry(QRect(110, 80, 501, 31));
        lineEditMatricule->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 50, 501, 31));
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
"}"));
        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 120, 1001, 341));
        calendarWidget->setStyleSheet(QLatin1String("QCalendarWidget {\n"
"  border: 1px solid black; /* Add a solid black border */\n"
"  background-color: white; /* Set the background color */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView {\n"
"  selection-background-color: #2CBB63; /* Set the background color of selected dates */\n"
"  selection-color: white; /* Set the text color of selected dates */\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"  background-color: white; /* Set the background color of navigation buttons */\n"
"  color: black; /* Set the text color of navigation buttons */\n"
"}\n"
"\n"
"QCalendarWidget QToolButton:hover {\n"
"  background-color: #2CBB63; /* Set the background color on hover */\n"
"  color: white; /* Set the text color on hover */\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 80, 141, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        calendrier->addTab(tab_2, QString());
        toolBar = new QToolBar(Reserv);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setGeometry(QRect(0, 0, 8, 17));
        menuBar = new QMenuBar(Reserv);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1213, 21));

        retranslateUi(Reserv);

        calendrier->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Reserv);
    } // setupUi

    void retranslateUi(QDialog *Reserv)
    {
        Reserv->setWindowTitle(QApplication::translate("Reserv", "Gestion Reservation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        calendrier->setToolTip(QApplication::translate("Reserv", "<html><head/><body><p>file:///C:/Users/chebb/OneDrive - ESPRIT/Bureau/unnamed.png</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_check->setText(QApplication::translate("Reserv", "check the reservation code", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_5), QApplication::translate("Reserv", "Acceuil ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Reserv", " Ajouter", Q_NULLPTR));
        ajouter->setText(QApplication::translate("Reserv", "Ajouter", Q_NULLPTR));
        matricule->setText(QApplication::translate("Reserv", "Matricule voiture :", Q_NULLPTR));
        date_fin->setText(QApplication::translate("Reserv", "date fin : ", Q_NULLPTR));
        id_client->setText(QApplication::translate("Reserv", "Nom client :", Q_NULLPTR));
        montant->setText(QApplication::translate("Reserv", "Montant totale : ", Q_NULLPTR));
        nomcl->setPlaceholderText(QApplication::translate("Reserv", "Nom Prenom ", Q_NULLPTR));
        date_debut->setText(QApplication::translate("Reserv", "date debut : ", Q_NULLPTR));
        numero->setText(QApplication::translate("Reserv", "Num r\303\251servation :", Q_NULLPTR));
        numres->setPlaceholderText(QApplication::translate("Reserv", "exp : 12345", Q_NULLPTR));
        numvoiture->setPlaceholderText(QApplication::translate("Reserv", "exp : 12345", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Reserv", "Modifier ", Q_NULLPTR));
        modifier_2->setTitle(QString());
        id_client_4->setText(QApplication::translate("Reserv", "Nom client :", Q_NULLPTR));
        matricule_3->setText(QApplication::translate("Reserv", "Matricule voiture :", Q_NULLPTR));
        date_debut_3->setText(QApplication::translate("Reserv", "date debut : ", Q_NULLPTR));
        date_fin_3->setText(QApplication::translate("Reserv", "date fin : ", Q_NULLPTR));
        montant_6->setText(QApplication::translate("Reserv", "montan totale : ", Q_NULLPTR));
        GENERER_PDF_2->setText(QApplication::translate("Reserv", "Exporter en pdf", Q_NULLPTR));
        ajouter_4->setText(QApplication::translate("Reserv", "Modifier", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Reserv", "supprimer", Q_NULLPTR));
        numres_3->setPlaceholderText(QApplication::translate("Reserv", "num de la reservation ", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(ajouter_2), QApplication::translate("Reserv", "Ajouter une r\303\251servation", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Reserv", "Afficher ", Q_NULLPTR));
        rechercher->setText(QString());
        rechercher->setPlaceholderText(QApplication::translate("Reserv", "numero de la reservation", Q_NULLPTR));
        recherche->setText(QApplication::translate("Reserv", "Rechercher ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Reserv", "Trier ", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Reserv", "Check", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab), QApplication::translate("Reserv", "Liste des r\303\251servations", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Reserv", "statistique", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_4), QApplication::translate("Reserv", "Statistique ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Reserv", "Verifier la disponibilit\303\251 ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Reserv", "non disponible : en rouge ", Q_NULLPTR));
        lineEditMatricule->setPlaceholderText(QApplication::translate("Reserv", "Matricule ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Reserv", "Saisir la matricule de la v\303\251hicule \303\240 verifier ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Reserv", "V\303\251rifier", Q_NULLPTR));
        calendrier->setTabText(calendrier->indexOf(tab_2), QApplication::translate("Reserv", "Calendrier des disponibilit\303\251es", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("Reserv", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Reserv: public Ui_Reserv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERV_H
