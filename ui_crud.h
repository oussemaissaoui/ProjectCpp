/********************************************************************************
** Form generated from reading UI file 'crud.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUD_H
#define UI_CRUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRUD
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *ajouter;
    QGroupBox *groupBox;
    QGroupBox *Userside;
    QLabel *label_nom_5;
    QLabel *label_nom_4;
    QLabel *label_nom_2;
    QLabel *label_email;
    QComboBox *comboBox_role;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_username;
    QDateEdit *datenaiss_Edit;
    QLabel *label_nom_14;
    QGroupBox *EmployerSide;
    QLabel *label;
    QComboBox *comboBox_status;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_cin;
    QLineEdit *lineEdit_prenom;
    QLabel *label_prenom;
    QLabel *label_cin;
    QLineEdit *lineEdit_tel;
    QLabel *label_status;
    QLabel *label_tel;
    QComboBox *comboBox_sexe;
    QLabel *label_nom;
    QComboBox *comboBox_poste_2;
    QLabel *label_7;
    QLineEdit *lineEdit_salaire_2;
    QLabel *label_6;
    QPushButton *ajouter_emp;
    QWidget *affichier;
    QTableView *table_employe;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QComboBox *requete1;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QComboBox *requete4;
    QPushButton *pushButton;
    QLabel *label_10;
    QComboBox *requete3;
    QWidget *Modifier;
    QGroupBox *EmployerSide_2;
    QLabel *label_3;
    QComboBox *comboBox_status_2;
    QLineEdit *lineEdit_nom_2;
    QLineEdit *lineEdit_prenom_2;
    QLabel *label_prenom_2;
    QLineEdit *lineEdit_tel_2;
    QLabel *label_status_2;
    QLabel *label_tel_2;
    QComboBox *comboBox_sexe_2;
    QLabel *label_nom_3;
    QLabel *label_4;
    QComboBox *comboBox_poste;
    QLabel *label_5;
    QLineEdit *lineEdit_salaire;
    QGroupBox *Userside_2;
    QLabel *label_nom_6;
    QLabel *label_nom_7;
    QLabel *label_nom_8;
    QLabel *label_email_2;
    QComboBox *comboBox_role_2;
    QLineEdit *lineEdit_pass_2;
    QLineEdit *lineEdit_email_2;
    QLineEdit *lineEdit_username_2;
    QDateEdit *datenaiss_Edit_2;
    QLabel *label_nom_13;
    QLineEdit *lineEdit_cin_2;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_supp;
    QPushButton *pushButton_genpdf;
    QWidget *tab;
    QPushButton *stat;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QLineEdit *lineEdit_question;
    QPushButton *ask_ai;
    QGroupBox *groupBox_5;
    QLabel *label_12;
    QComboBox *comboBox_Language;
    QComboBox *comboBox_Length;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *comboBox_mode;
    QLabel *label_15;
    QComboBox *comboBox_Style;

    void setupUi(QDialog *CRUD)
    {
        if (CRUD->objectName().isEmpty())
            CRUD->setObjectName(QStringLiteral("CRUD"));
        CRUD->resize(1202, 597);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/crud.png"), QSize(), QIcon::Normal, QIcon::Off);
        CRUD->setWindowIcon(icon);
        gridLayout = new QGridLayout(CRUD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(CRUD);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        ajouter = new QWidget();
        ajouter->setObjectName(QStringLiteral("ajouter"));
        groupBox = new QGroupBox(ajouter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 1141, 511));
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
        Userside = new QGroupBox(groupBox);
        Userside->setObjectName(QStringLiteral("Userside"));
        Userside->setGeometry(QRect(590, 50, 381, 381));
        label_nom_5 = new QLabel(Userside);
        label_nom_5->setObjectName(QStringLiteral("label_nom_5"));
        label_nom_5->setGeometry(QRect(27, 189, 141, 31));
        label_nom_5->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_nom_4 = new QLabel(Userside);
        label_nom_4->setObjectName(QStringLiteral("label_nom_4"));
        label_nom_4->setGeometry(QRect(27, 150, 141, 31));
        label_nom_4->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_nom_2 = new QLabel(Userside);
        label_nom_2->setObjectName(QStringLiteral("label_nom_2"));
        label_nom_2->setGeometry(QRect(30, 70, 141, 31));
        label_nom_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_email = new QLabel(Userside);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(30, 109, 141, 31));
        label_email->setStyleSheet(QLatin1String("QLabel {\n"
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
        comboBox_role = new QComboBox(Userside);
        comboBox_role->setObjectName(QStringLiteral("comboBox_role"));
        comboBox_role->setGeometry(QRect(180, 190, 191, 31));
        comboBox_role->setStyleSheet(QLatin1String("QComboBox {\n"
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
        lineEdit_pass = new QLineEdit(Userside);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(180, 150, 191, 31));
        lineEdit_pass->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_email = new QLineEdit(Userside);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(180, 110, 191, 31));
        lineEdit_email->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_username = new QLineEdit(Userside);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(180, 70, 191, 31));
        lineEdit_username->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        datenaiss_Edit = new QDateEdit(Userside);
        datenaiss_Edit->setObjectName(QStringLiteral("datenaiss_Edit"));
        datenaiss_Edit->setGeometry(QRect(180, 240, 191, 31));
        datenaiss_Edit->setStyleSheet(QLatin1String("QDateEdit {\n"
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
        label_nom_14 = new QLabel(Userside);
        label_nom_14->setObjectName(QStringLiteral("label_nom_14"));
        label_nom_14->setGeometry(QRect(20, 240, 151, 31));
        label_nom_14->setStyleSheet(QLatin1String("QLabel {\n"
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
        EmployerSide = new QGroupBox(groupBox);
        EmployerSide->setObjectName(QStringLiteral("EmployerSide"));
        EmployerSide->setGeometry(QRect(90, 50, 431, 381));
        label = new QLabel(EmployerSide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 250, 91, 31));
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
"}"));
        comboBox_status = new QComboBox(EmployerSide);
        comboBox_status->setObjectName(QStringLiteral("comboBox_status"));
        comboBox_status->setGeometry(QRect(140, 211, 281, 31));
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
        lineEdit_nom = new QLineEdit(EmployerSide);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(140, 50, 281, 31));
        lineEdit_nom->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_cin = new QLineEdit(EmployerSide);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(140, 130, 281, 31));
        lineEdit_cin->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_prenom = new QLineEdit(EmployerSide);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(140, 90, 281, 31));
        lineEdit_prenom->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_prenom = new QLabel(EmployerSide);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(30, 90, 91, 31));
        label_prenom->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_cin = new QLabel(EmployerSide);
        label_cin->setObjectName(QStringLiteral("label_cin"));
        label_cin->setGeometry(QRect(30, 130, 91, 31));
        label_cin->setStyleSheet(QLatin1String("QLabel {\n"
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
        lineEdit_tel = new QLineEdit(EmployerSide);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(140, 170, 281, 31));
        lineEdit_tel->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_status = new QLabel(EmployerSide);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(30, 210, 91, 31));
        label_status->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_tel = new QLabel(EmployerSide);
        label_tel->setObjectName(QStringLiteral("label_tel"));
        label_tel->setGeometry(QRect(30, 170, 91, 31));
        label_tel->setStyleSheet(QLatin1String("QLabel {\n"
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
        comboBox_sexe = new QComboBox(EmployerSide);
        comboBox_sexe->setObjectName(QStringLiteral("comboBox_sexe"));
        comboBox_sexe->setGeometry(QRect(140, 251, 281, 31));
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
        label_nom = new QLabel(EmployerSide);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(30, 50, 91, 31));
        label_nom->setStyleSheet(QLatin1String("QLabel {\n"
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
        comboBox_poste_2 = new QComboBox(EmployerSide);
        comboBox_poste_2->setObjectName(QStringLiteral("comboBox_poste_2"));
        comboBox_poste_2->setGeometry(QRect(140, 291, 281, 31));
        comboBox_poste_2->setStyleSheet(QLatin1String("QComboBox {\n"
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
        label_7 = new QLabel(EmployerSide);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 330, 91, 31));
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
"}"));
        lineEdit_salaire_2 = new QLineEdit(EmployerSide);
        lineEdit_salaire_2->setObjectName(QStringLiteral("lineEdit_salaire_2"));
        lineEdit_salaire_2->setGeometry(QRect(140, 330, 281, 31));
        lineEdit_salaire_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_6 = new QLabel(EmployerSide);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 290, 91, 31));
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
"}"));
        ajouter_emp = new QPushButton(groupBox);
        ajouter_emp->setObjectName(QStringLiteral("ajouter_emp"));
        ajouter_emp->setGeometry(QRect(1010, 460, 111, 41));
        ajouter_emp->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(ajouter, QString());
        affichier = new QWidget();
        affichier->setObjectName(QStringLiteral("affichier"));
        table_employe = new QTableView(affichier);
        table_employe->setObjectName(QStringLiteral("table_employe"));
        table_employe->setGeometry(QRect(0, 250, 1181, 271));
        table_employe->setStyleSheet(QLatin1String("QTableView {\n"
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
        groupBox_2 = new QGroupBox(affichier);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 20, 601, 211));
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
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 121, 31));
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
"}"));
        requete1 = new QComboBox(groupBox_2);
        requete1->setObjectName(QStringLiteral("requete1"));
        requete1->setGeometry(QRect(140, 60, 151, 31));
        requete1->setStyleSheet(QLatin1String("QComboBox {\n"
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
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 110, 121, 31));
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
"}"));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 110, 151, 31));
        comboBox_2->setStyleSheet(QLatin1String("QComboBox {\n"
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
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 109, 121, 31));
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
        requete4 = new QComboBox(groupBox_2);
        requete4->setObjectName(QStringLiteral("requete4"));
        requete4->setGeometry(QRect(430, 110, 151, 31));
        requete4->setStyleSheet(QLatin1String("QComboBox {\n"
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
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 160, 141, 41));
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
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(300, 60, 121, 31));
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
        requete3 = new QComboBox(groupBox_2);
        requete3->setObjectName(QStringLiteral("requete3"));
        requete3->setGeometry(QRect(430, 60, 151, 31));
        requete3->setStyleSheet(QLatin1String("QComboBox {\n"
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
        tabWidget->addTab(affichier, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        EmployerSide_2 = new QGroupBox(Modifier);
        EmployerSide_2->setObjectName(QStringLiteral("EmployerSide_2"));
        EmployerSide_2->setGeometry(QRect(150, 100, 411, 391));
        EmployerSide_2->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        label_3 = new QLabel(EmployerSide_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 230, 91, 31));
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
        comboBox_status_2 = new QComboBox(EmployerSide_2);
        comboBox_status_2->setObjectName(QStringLiteral("comboBox_status_2"));
        comboBox_status_2->setGeometry(QRect(120, 191, 271, 31));
        comboBox_status_2->setStyleSheet(QLatin1String("QComboBox {\n"
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
        lineEdit_nom_2 = new QLineEdit(EmployerSide_2);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(120, 70, 271, 31));
        lineEdit_nom_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        lineEdit_prenom_2 = new QLineEdit(EmployerSide_2);
        lineEdit_prenom_2->setObjectName(QStringLiteral("lineEdit_prenom_2"));
        lineEdit_prenom_2->setGeometry(QRect(120, 120, 271, 21));
        lineEdit_prenom_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_prenom_2 = new QLabel(EmployerSide_2);
        label_prenom_2->setObjectName(QStringLiteral("label_prenom_2"));
        label_prenom_2->setGeometry(QRect(16, 110, 91, 31));
        label_prenom_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        lineEdit_tel_2 = new QLineEdit(EmployerSide_2);
        lineEdit_tel_2->setObjectName(QStringLiteral("lineEdit_tel_2"));
        lineEdit_tel_2->setGeometry(QRect(120, 160, 271, 21));
        lineEdit_tel_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_status_2 = new QLabel(EmployerSide_2);
        label_status_2->setObjectName(QStringLiteral("label_status_2"));
        label_status_2->setGeometry(QRect(20, 189, 91, 31));
        label_status_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_tel_2 = new QLabel(EmployerSide_2);
        label_tel_2->setObjectName(QStringLiteral("label_tel_2"));
        label_tel_2->setGeometry(QRect(16, 149, 91, 31));
        label_tel_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        comboBox_sexe_2 = new QComboBox(EmployerSide_2);
        comboBox_sexe_2->setObjectName(QStringLiteral("comboBox_sexe_2"));
        comboBox_sexe_2->setGeometry(QRect(120, 231, 271, 31));
        comboBox_sexe_2->setStyleSheet(QLatin1String("QComboBox {\n"
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
        label_nom_3 = new QLabel(EmployerSide_2);
        label_nom_3->setObjectName(QStringLiteral("label_nom_3"));
        label_nom_3->setGeometry(QRect(20, 70, 91, 31));
        label_nom_3->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_4 = new QLabel(EmployerSide_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 270, 91, 31));
        label_4->setStyleSheet(QLatin1String("QLabel {\n"
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
        comboBox_poste = new QComboBox(EmployerSide_2);
        comboBox_poste->setObjectName(QStringLiteral("comboBox_poste"));
        comboBox_poste->setGeometry(QRect(120, 270, 271, 31));
        comboBox_poste->setStyleSheet(QLatin1String("QComboBox {\n"
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
        label_5 = new QLabel(EmployerSide_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 310, 91, 31));
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
"}"));
        lineEdit_salaire = new QLineEdit(EmployerSide_2);
        lineEdit_salaire->setObjectName(QStringLiteral("lineEdit_salaire"));
        lineEdit_salaire->setGeometry(QRect(120, 310, 271, 31));
        lineEdit_salaire->setStyleSheet(QLatin1String("QLabel {\n"
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
        Userside_2 = new QGroupBox(Modifier);
        Userside_2->setObjectName(QStringLiteral("Userside_2"));
        Userside_2->setGeometry(QRect(600, 100, 461, 391));
        Userside_2->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        label_nom_6 = new QLabel(Userside_2);
        label_nom_6->setObjectName(QStringLiteral("label_nom_6"));
        label_nom_6->setGeometry(QRect(20, 199, 151, 31));
        label_nom_6->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_nom_7 = new QLabel(Userside_2);
        label_nom_7->setObjectName(QStringLiteral("label_nom_7"));
        label_nom_7->setGeometry(QRect(20, 160, 151, 31));
        label_nom_7->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_nom_8 = new QLabel(Userside_2);
        label_nom_8->setObjectName(QStringLiteral("label_nom_8"));
        label_nom_8->setGeometry(QRect(17, 70, 151, 41));
        label_nom_8->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_email_2 = new QLabel(Userside_2);
        label_email_2->setObjectName(QStringLiteral("label_email_2"));
        label_email_2->setGeometry(QRect(20, 120, 151, 31));
        label_email_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        comboBox_role_2 = new QComboBox(Userside_2);
        comboBox_role_2->setObjectName(QStringLiteral("comboBox_role_2"));
        comboBox_role_2->setGeometry(QRect(180, 201, 251, 31));
        comboBox_role_2->setStyleSheet(QLatin1String("QComboBox {\n"
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
        lineEdit_pass_2 = new QLineEdit(Userside_2);
        lineEdit_pass_2->setObjectName(QStringLiteral("lineEdit_pass_2"));
        lineEdit_pass_2->setGeometry(QRect(180, 160, 251, 31));
        lineEdit_pass_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        lineEdit_email_2 = new QLineEdit(Userside_2);
        lineEdit_email_2->setObjectName(QStringLiteral("lineEdit_email_2"));
        lineEdit_email_2->setGeometry(QRect(180, 120, 251, 31));
        lineEdit_email_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        lineEdit_username_2 = new QLineEdit(Userside_2);
        lineEdit_username_2->setObjectName(QStringLiteral("lineEdit_username_2"));
        lineEdit_username_2->setGeometry(QRect(180, 80, 251, 31));
        lineEdit_username_2->setStyleSheet(QLatin1String("QLabel {\n"
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
        datenaiss_Edit_2 = new QDateEdit(Userside_2);
        datenaiss_Edit_2->setObjectName(QStringLiteral("datenaiss_Edit_2"));
        datenaiss_Edit_2->setGeometry(QRect(180, 250, 251, 31));
        datenaiss_Edit_2->setStyleSheet(QLatin1String("QDateEdit {\n"
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
        label_nom_13 = new QLabel(Userside_2);
        label_nom_13->setObjectName(QStringLiteral("label_nom_13"));
        label_nom_13->setGeometry(QRect(20, 250, 151, 31));
        label_nom_13->setStyleSheet(QLatin1String("QLabel {\n"
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
        lineEdit_cin_2 = new QLineEdit(Modifier);
        lineEdit_cin_2->setObjectName(QStringLiteral("lineEdit_cin_2"));
        lineEdit_cin_2->setGeometry(QRect(170, 30, 371, 41));
        lineEdit_cin_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        pushButton_modifier = new QPushButton(Modifier);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(550, 30, 121, 41));
        pushButton_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_supp = new QPushButton(Modifier);
        pushButton_supp->setObjectName(QStringLiteral("pushButton_supp"));
        pushButton_supp->setGeometry(QRect(680, 30, 131, 41));
        pushButton_supp->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_genpdf = new QPushButton(Modifier);
        pushButton_genpdf->setObjectName(QStringLiteral("pushButton_genpdf"));
        pushButton_genpdf->setGeometry(QRect(820, 30, 181, 41));
        pushButton_genpdf->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(Modifier, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stat = new QPushButton(tab);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(1000, 20, 141, 51));
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
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 260, 1161, 361));
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
        textEdit_2 = new QTextEdit(groupBox_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 30, 1131, 231));
        textEdit_2->setStyleSheet(QLatin1String("QTextEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080;\n"
"  border-radius: 5px;\n"
"  background-color: white;\n"
"  color: black;\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"  border-color: #2CBB63;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"  border-color: #2CBB63;\n"
"  outline: none;\n"
"}\n"
""));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 771, 251));
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
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(300, 20, 151, 31));
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
        lineEdit_question = new QLineEdit(groupBox_4);
        lineEdit_question->setObjectName(QStringLiteral("lineEdit_question"));
        lineEdit_question->setGeometry(QRect(20, 60, 741, 141));
        lineEdit_question->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        ask_ai = new QPushButton(groupBox_4);
        ask_ai->setObjectName(QStringLiteral("ask_ai"));
        ask_ai->setGeometry(QRect(660, 210, 101, 31));
        ask_ai->setStyleSheet(QLatin1String("QPushButton {\n"
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
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(790, 10, 381, 251));
        groupBox_5->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 39, 161, 41));
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
        comboBox_Language = new QComboBox(groupBox_5);
        comboBox_Language->setObjectName(QStringLiteral("comboBox_Language"));
        comboBox_Language->setGeometry(QRect(200, 50, 171, 31));
        comboBox_Language->setStyleSheet(QLatin1String("QComboBox {\n"
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
        comboBox_Length = new QComboBox(groupBox_5);
        comboBox_Length->setObjectName(QStringLiteral("comboBox_Length"));
        comboBox_Length->setGeometry(QRect(200, 100, 171, 31));
        comboBox_Length->setStyleSheet(QLatin1String("QComboBox {\n"
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
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 89, 161, 41));
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
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 139, 161, 41));
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
        comboBox_mode = new QComboBox(groupBox_5);
        comboBox_mode->setObjectName(QStringLiteral("comboBox_mode"));
        comboBox_mode->setGeometry(QRect(200, 150, 171, 31));
        comboBox_mode->setStyleSheet(QLatin1String("QComboBox {\n"
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
"}background-color: rgb(130, 255, 102);\n"
"color: rgb(0, 0, 0);"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 189, 161, 41));
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
        comboBox_Style = new QComboBox(groupBox_5);
        comboBox_Style->setObjectName(QStringLiteral("comboBox_Style"));
        comboBox_Style->setGeometry(QRect(200, 200, 171, 31));
        comboBox_Style->setStyleSheet(QLatin1String("QComboBox {\n"
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
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(CRUD);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CRUD);
    } // setupUi

    void retranslateUi(QDialog *CRUD)
    {
        CRUD->setWindowTitle(QApplication::translate("CRUD", "Gestion_Employe", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CRUD", "Add Employer", Q_NULLPTR));
        Userside->setTitle(QApplication::translate("CRUD", "User", Q_NULLPTR));
        label_nom_5->setText(QApplication::translate("CRUD", "Role", Q_NULLPTR));
        label_nom_4->setText(QApplication::translate("CRUD", "password", Q_NULLPTR));
        label_nom_2->setText(QApplication::translate("CRUD", "username", Q_NULLPTR));
        label_email->setText(QApplication::translate("CRUD", "Email", Q_NULLPTR));
        comboBox_role->clear();
        comboBox_role->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Employe", Q_NULLPTR)
         << QApplication::translate("CRUD", "User", Q_NULLPTR)
         << QApplication::translate("CRUD", "Fourni", Q_NULLPTR)
         << QApplication::translate("CRUD", "Finance", Q_NULLPTR)
        );
        lineEdit_pass->setPlaceholderText(QApplication::translate("CRUD", "*********", Q_NULLPTR));
        lineEdit_email->setPlaceholderText(QApplication::translate("CRUD", "user@gmailcom", Q_NULLPTR));
        label_nom_14->setText(QApplication::translate("CRUD", "Date de naissance ", Q_NULLPTR));
        EmployerSide->setTitle(QApplication::translate("CRUD", "Employer", Q_NULLPTR));
        label->setText(QApplication::translate("CRUD", "sexe", Q_NULLPTR));
        comboBox_status->clear();
        comboBox_status->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Celibataire", Q_NULLPTR)
         << QApplication::translate("CRUD", "Marie", Q_NULLPTR)
         << QApplication::translate("CRUD", "Divorce", Q_NULLPTR)
        );
        label_prenom->setText(QApplication::translate("CRUD", "Prenom", Q_NULLPTR));
        label_cin->setText(QApplication::translate("CRUD", "CIN/Id", Q_NULLPTR));
        lineEdit_tel->setPlaceholderText(QApplication::translate("CRUD", "+216 99 999 999", Q_NULLPTR));
        label_status->setText(QApplication::translate("CRUD", "Status", Q_NULLPTR));
        label_tel->setText(QApplication::translate("CRUD", "Telephone", Q_NULLPTR));
        comboBox_sexe->clear();
        comboBox_sexe->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "homme", Q_NULLPTR)
         << QApplication::translate("CRUD", "femme", Q_NULLPTR)
        );
        label_nom->setText(QApplication::translate("CRUD", "Nom", Q_NULLPTR));
        comboBox_poste_2->clear();
        comboBox_poste_2->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Directeur General ", Q_NULLPTR)
         << QApplication::translate("CRUD", "Directeur des Op\303\251rations", Q_NULLPTR)
         << QApplication::translate("CRUD", "Responsable des Ressources Humaines", Q_NULLPTR)
         << QApplication::translate("CRUD", "Directeur Financier", Q_NULLPTR)
         << QApplication::translate("CRUD", "Analyste", Q_NULLPTR)
         << QApplication::translate("CRUD", "Comptable", Q_NULLPTR)
         << QApplication::translate("CRUD", "Recrue", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("CRUD", "Salaire", Q_NULLPTR));
        label_6->setText(QApplication::translate("CRUD", "Poste", Q_NULLPTR));
        ajouter_emp->setText(QApplication::translate("CRUD", "ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ajouter), QApplication::translate("CRUD", "Ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CRUD", "Settings of sort", Q_NULLPTR));
        label_2->setText(QApplication::translate("CRUD", "Table to show :", Q_NULLPTR));
        requete1->clear();
        requete1->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "users", Q_NULLPTR)
         << QApplication::translate("CRUD", "employe", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("CRUD", "Data to show :", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "All", Q_NULLPTR)
         << QApplication::translate("CRUD", "ID_user", Q_NULLPTR)
         << QApplication::translate("CRUD", "Email", Q_NULLPTR)
         << QApplication::translate("CRUD", "username", Q_NULLPTR)
         << QApplication::translate("CRUD", "prenom", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("CRUD", "Type of sort:", Q_NULLPTR));
        requete4->clear();
        requete4->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "smallest to largest", Q_NULLPTR)
         << QApplication::translate("CRUD", "largest to smallest", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("CRUD", "Sort", Q_NULLPTR));
        label_10->setText(QApplication::translate("CRUD", "Order by :", Q_NULLPTR));
        requete3->clear();
        requete3->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "id_user", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(affichier), QApplication::translate("CRUD", "Afficher", Q_NULLPTR));
        EmployerSide_2->setTitle(QApplication::translate("CRUD", "Employer", Q_NULLPTR));
        label_3->setText(QApplication::translate("CRUD", "sexe", Q_NULLPTR));
        comboBox_status_2->clear();
        comboBox_status_2->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Celibataire", Q_NULLPTR)
         << QApplication::translate("CRUD", "Marie", Q_NULLPTR)
         << QApplication::translate("CRUD", "Divorce", Q_NULLPTR)
        );
        label_prenom_2->setText(QApplication::translate("CRUD", "Prenom", Q_NULLPTR));
        label_status_2->setText(QApplication::translate("CRUD", "Status", Q_NULLPTR));
        label_tel_2->setText(QApplication::translate("CRUD", "Telephone", Q_NULLPTR));
        comboBox_sexe_2->clear();
        comboBox_sexe_2->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "homme", Q_NULLPTR)
         << QApplication::translate("CRUD", "femme", Q_NULLPTR)
        );
        label_nom_3->setText(QApplication::translate("CRUD", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("CRUD", "Poste", Q_NULLPTR));
        comboBox_poste->clear();
        comboBox_poste->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Directeur General ", Q_NULLPTR)
         << QApplication::translate("CRUD", "Directeur des Op\303\251rations", Q_NULLPTR)
         << QApplication::translate("CRUD", "Responsable des Ressources Humaines", Q_NULLPTR)
         << QApplication::translate("CRUD", "Directeur Financier", Q_NULLPTR)
         << QApplication::translate("CRUD", "Analyste", Q_NULLPTR)
         << QApplication::translate("CRUD", "Comptable", Q_NULLPTR)
         << QApplication::translate("CRUD", "Recrue", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("CRUD", "Salaire", Q_NULLPTR));
        Userside_2->setTitle(QApplication::translate("CRUD", "User", Q_NULLPTR));
        label_nom_6->setText(QApplication::translate("CRUD", "Role", Q_NULLPTR));
        label_nom_7->setText(QApplication::translate("CRUD", "password", Q_NULLPTR));
        label_nom_8->setText(QApplication::translate("CRUD", "username", Q_NULLPTR));
        label_email_2->setText(QApplication::translate("CRUD", "Email", Q_NULLPTR));
        comboBox_role_2->clear();
        comboBox_role_2->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "User", Q_NULLPTR)
         << QApplication::translate("CRUD", "Employe", Q_NULLPTR)
         << QApplication::translate("CRUD", "Fourni", Q_NULLPTR)
         << QApplication::translate("CRUD", "Finance", Q_NULLPTR)
        );
        label_nom_13->setText(QApplication::translate("CRUD", "Date de naissance ", Q_NULLPTR));
        lineEdit_cin_2->setPlaceholderText(QApplication::translate("CRUD", "identifiant ou CIN de l'employ\303\251 ", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("CRUD", "Modifier", Q_NULLPTR));
        pushButton_supp->setText(QApplication::translate("CRUD", "Supprimer", Q_NULLPTR));
        pushButton_genpdf->setText(QApplication::translate("CRUD", "Generer pdf", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QApplication::translate("CRUD", "Modifier", Q_NULLPTR));
        stat->setText(QApplication::translate("CRUD", "Statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CRUD", "Statistique", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        textEdit_2->setHtml(QApplication::translate("CRUD", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_11->setText(QApplication::translate("CRUD", "Ask Your Question", Q_NULLPTR));
        ask_ai->setText(QApplication::translate("CRUD", "ASK AI", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("CRUD", "Settings AI", Q_NULLPTR));
        label_12->setText(QApplication::translate("CRUD", "Language :", Q_NULLPTR));
        comboBox_Language->clear();
        comboBox_Language->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "English", Q_NULLPTR)
         << QApplication::translate("CRUD", "Frensh", Q_NULLPTR)
        );
        comboBox_Length->clear();
        comboBox_Length->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Short", Q_NULLPTR)
         << QApplication::translate("CRUD", "Medium", Q_NULLPTR)
         << QApplication::translate("CRUD", "Long", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("CRUD", "length Text :", Q_NULLPTR));
        label_14->setText(QApplication::translate("CRUD", "Conversation Mode:", Q_NULLPTR));
        comboBox_mode->clear();
        comboBox_mode->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Casual Chat", Q_NULLPTR)
         << QApplication::translate("CRUD", "More Structured", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("CRUD", "styles:", Q_NULLPTR));
        comboBox_Style->clear();
        comboBox_Style->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Formal", Q_NULLPTR)
         << QApplication::translate("CRUD", "Informal", Q_NULLPTR)
         << QApplication::translate("CRUD", "Academic", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CRUD", "ASK AI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CRUD: public Ui_CRUD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUD_H
