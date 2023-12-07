/********************************************************************************
** Form generated from reading UI file 'gest_vehi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEST_VEHI_H
#define UI_GEST_VEHI_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gest_vehi
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btn_supprimer;
    QLineEdit *le_mat_supp;
    QLabel *label_18;
    QLineEdit *le_mat;
    QLabel *label_16;
    QLineEdit *le_marque;
    QLabel *label_11;
    QLineEdit *le_nom;
    QLabel *label_15;
    QLineEdit *le_nb_porte;
    QLabel *label_14;
    QLabel *label_9;
    QComboBox *comboBox;
    QLabel *label_10;
    QLineEdit *le_puissance;
    QLabel *label_13;
    QPushButton *btn_modifier;
    QPushButton *btn_ajouter;
    QPushButton *tri_id;
    QPushButton *stat;
    QTableView *tab_voiture;
    QLineEdit *le_couleur;
    QGroupBox *groupBox_2;
    QLineEdit *le_rechercher_1;
    QLabel *label_12;
    QComboBox *le_rechercher_4;
    QLineEdit *le_rechercher_2;
    QLineEdit *le_rechercher_3;
    QLabel *label_17;
    QLabel *label_20;
    QLabel *label_19;
    QGroupBox *groupBox_3;
    QLineEdit *le_pdf_voiture;
    QPushButton *pdf_voiture;
    QLabel *label_21;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QDialog *gest_vehi)
    {
        if (gest_vehi->objectName().isEmpty())
            gest_vehi->setObjectName(QStringLiteral("gest_vehi"));
        gest_vehi->resize(1024, 695);
        centralwidget = new QWidget(gest_vehi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 981, 631));
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
        btn_supprimer = new QPushButton(groupBox);
        btn_supprimer->setObjectName(QStringLiteral("btn_supprimer"));
        btn_supprimer->setGeometry(QRect(630, 350, 151, 41));
        btn_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
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
        le_mat_supp = new QLineEdit(groupBox);
        le_mat_supp->setObjectName(QStringLiteral("le_mat_supp"));
        le_mat_supp->setGeometry(QRect(430, 351, 181, 31));
        le_mat_supp->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(330, 350, 91, 31));
        label_18->setStyleSheet(QLatin1String("QLabel {\n"
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
        le_mat = new QLineEdit(groupBox);
        le_mat->setObjectName(QStringLiteral("le_mat"));
        le_mat->setGeometry(QRect(140, 50, 131, 22));
        le_mat->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 40, 121, 31));
        label_16->setStyleSheet(QLatin1String("QLabel {\n"
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
        le_marque = new QLineEdit(groupBox);
        le_marque->setObjectName(QStringLiteral("le_marque"));
        le_marque->setGeometry(QRect(140, 90, 131, 22));
        le_marque->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 80, 121, 31));
        label_11->setStyleSheet(QLatin1String("QLabel {\n"
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
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 130, 131, 22));
        le_nom->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 120, 121, 31));
        label_15->setStyleSheet(QLatin1String("QLabel {\n"
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
        le_nb_porte = new QLineEdit(groupBox);
        le_nb_porte->setObjectName(QStringLiteral("le_nb_porte"));
        le_nb_porte->setGeometry(QRect(180, 170, 91, 22));
        le_nb_porte->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 160, 151, 31));
        label_14->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 200, 121, 31));
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
"}"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 210, 131, 22));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 240, 121, 31));
        label_10->setStyleSheet(QLatin1String("QLabel {\n"
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
        le_puissance = new QLineEdit(groupBox);
        le_puissance->setObjectName(QStringLiteral("le_puissance"));
        le_puissance->setGeometry(QRect(140, 290, 131, 22));
        le_puissance->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 280, 121, 31));
        label_13->setStyleSheet(QLatin1String("QLabel {\n"
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
        btn_modifier = new QPushButton(groupBox);
        btn_modifier->setObjectName(QStringLiteral("btn_modifier"));
        btn_modifier->setGeometry(QRect(20, 330, 111, 41));
        btn_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
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
        btn_ajouter = new QPushButton(groupBox);
        btn_ajouter->setObjectName(QStringLiteral("btn_ajouter"));
        btn_ajouter->setGeometry(QRect(150, 330, 111, 41));
        btn_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tri_id = new QPushButton(groupBox);
        tri_id->setObjectName(QStringLiteral("tri_id"));
        tri_id->setGeometry(QRect(790, 350, 131, 41));
        tri_id->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stat = new QPushButton(groupBox);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(730, 430, 181, 131));
        stat->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}border-image: url(C:/Users/21622/Desktop/staticon.png);"));
        tab_voiture = new QTableView(groupBox);
        tab_voiture->setObjectName(QStringLiteral("tab_voiture"));
        tab_voiture->setGeometry(QRect(320, 30, 631, 311));
        tab_voiture->setStyleSheet(QLatin1String("QTableView {\n"
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
        le_couleur = new QLineEdit(groupBox);
        le_couleur->setObjectName(QStringLiteral("le_couleur"));
        le_couleur->setGeometry(QRect(140, 250, 131, 22));
        le_couleur->setStyleSheet(QLatin1String("QLabel {\n"
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
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 380, 291, 231));
        groupBox_2->setFont(font);
        le_rechercher_1 = new QLineEdit(groupBox_2);
        le_rechercher_1->setObjectName(QStringLiteral("le_rechercher_1"));
        le_rechercher_1->setGeometry(QRect(150, 60, 111, 21));
        le_rechercher_1->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(28, 90, 111, 31));
        label_12->setStyleSheet(QLatin1String("QLabel {\n"
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
        le_rechercher_4 = new QComboBox(groupBox_2);
        le_rechercher_4->setObjectName(QStringLiteral("le_rechercher_4"));
        le_rechercher_4->setGeometry(QRect(148, 180, 111, 22));
        le_rechercher_2 = new QLineEdit(groupBox_2);
        le_rechercher_2->setObjectName(QStringLiteral("le_rechercher_2"));
        le_rechercher_2->setGeometry(QRect(148, 100, 113, 22));
        le_rechercher_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        le_rechercher_3 = new QLineEdit(groupBox_2);
        le_rechercher_3->setObjectName(QStringLiteral("le_rechercher_3"));
        le_rechercher_3->setGeometry(QRect(178, 140, 81, 22));
        le_rechercher_3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(28, 40, 111, 41));
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
"}"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(28, 170, 111, 31));
        label_20->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(28, 130, 141, 31));
        label_19->setStyleSheet(QLatin1String("QLabel {\n"
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
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 410, 311, 181));
        groupBox_3->setFont(font);
        le_pdf_voiture = new QLineEdit(groupBox_3);
        le_pdf_voiture->setObjectName(QStringLiteral("le_pdf_voiture"));
        le_pdf_voiture->setGeometry(QRect(150, 60, 113, 22));
        le_pdf_voiture->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        pdf_voiture = new QPushButton(groupBox_3);
        pdf_voiture->setObjectName(QStringLiteral("pdf_voiture"));
        pdf_voiture->setGeometry(QRect(80, 100, 131, 41));
        pdf_voiture->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}border-image: url(C:/Users/21622/Desktop/staticon.png);"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 40, 111, 41));
        label_21->setStyleSheet(QLatin1String("QLabel {\n"
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
        menubar = new QMenuBar(gest_vehi);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 22));
        statusbar = new QStatusBar(gest_vehi);
        statusbar->setObjectName(QStringLiteral("statusbar"));

        retranslateUi(gest_vehi);

        QMetaObject::connectSlotsByName(gest_vehi);
    } // setupUi

    void retranslateUi(QDialog *gest_vehi)
    {
        gest_vehi->setWindowTitle(QApplication::translate("gest_vehi", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gest_vehi", "Gesttion Des Vehicules", Q_NULLPTR));
        btn_supprimer->setText(QApplication::translate("gest_vehi", "SUPPRIMER", Q_NULLPTR));
        label_18->setText(QApplication::translate("gest_vehi", "Matricule : ", Q_NULLPTR));
        label_16->setText(QApplication::translate("gest_vehi", "Matricule :", Q_NULLPTR));
        label_11->setText(QApplication::translate("gest_vehi", "Marque : ", Q_NULLPTR));
        label_15->setText(QApplication::translate("gest_vehi", " Nom : ", Q_NULLPTR));
        label_14->setText(QApplication::translate("gest_vehi", "Nombre de portes : ", Q_NULLPTR));
        label_9->setText(QApplication::translate("gest_vehi", "Etat : ", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("gest_vehi", "Bonne", Q_NULLPTR)
         << QApplication::translate("gest_vehi", "En Panne", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("gest_vehi", "Couleur : ", Q_NULLPTR));
        label_13->setText(QApplication::translate("gest_vehi", "Puissance : ", Q_NULLPTR));
        btn_modifier->setText(QApplication::translate("gest_vehi", "MODIFIER", Q_NULLPTR));
        btn_ajouter->setText(QApplication::translate("gest_vehi", "AJOUTER", Q_NULLPTR));
        tri_id->setText(QApplication::translate("gest_vehi", "TRI ID", Q_NULLPTR));
        stat->setText(QApplication::translate("gest_vehi", "STAT", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("gest_vehi", "Recherche ", Q_NULLPTR));
        label_12->setText(QApplication::translate("gest_vehi", "Marque : ", Q_NULLPTR));
        le_rechercher_4->clear();
        le_rechercher_4->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("gest_vehi", "Bonne", Q_NULLPTR)
         << QApplication::translate("gest_vehi", "En Panne", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("gest_vehi", "Matricule :", Q_NULLPTR));
        label_20->setText(QApplication::translate("gest_vehi", "Etat : ", Q_NULLPTR));
        label_19->setText(QApplication::translate("gest_vehi", "Nombre de portes : ", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gest_vehi", "PDF", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        le_pdf_voiture->setWhatsThis(QApplication::translate("gest_vehi", "<html><head/><body><p>QLineEdit {</p><p>  padding: 5px;</p><p>  border: 2px solid #808080; /* Grey border */</p><p>  border-radius: 5px; /* Rounded corners */</p><p>  background-color: white; /* White background */</p><p>  color: black; /* Black text color */</p><p>}</p><p><br/></p><p>QLineEdit:hover {</p><p>  border-color: #2CBB63; /* Green border color on hover */</p><p>}</p><p><br/></p><p>QLineEdit:focus {</p><p>  border-color: #2CBB63; /* Green border color on focus */</p><p>  outline: none; /* Remove focus outline */</p><p>}</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pdf_voiture->setText(QApplication::translate("gest_vehi", "EXPORTER", Q_NULLPTR));
        label_21->setText(QApplication::translate("gest_vehi", "Matricule :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gest_vehi: public Ui_gest_vehi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEST_VEHI_H
