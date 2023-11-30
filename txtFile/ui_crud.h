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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRUD
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *ajouter;
    QGroupBox *groupBox;
    QPushButton *ajouter_emp;
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
    QWidget *affichier;
    QTableView *table_employe;
    QWidget *supprimer;
    QLabel *label_supp_id;
    QLineEdit *lineEdit_idsupp;
    QPushButton *pushButton_supp;
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
    QLineEdit *lineEdit_cin_2;
    QLabel *label_cin_2;
    QPushButton *pushButton_modifier;
    QWidget *tab;
    QTableView *tableView_sort;
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
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QDialog *CRUD)
    {
        if (CRUD->objectName().isEmpty())
            CRUD->setObjectName(QStringLiteral("CRUD"));
        CRUD->resize(666, 498);
        gridLayout = new QGridLayout(CRUD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(CRUD);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        ajouter = new QWidget();
        ajouter->setObjectName(QStringLiteral("ajouter"));
        groupBox = new QGroupBox(ajouter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 621, 421));
        ajouter_emp = new QPushButton(groupBox);
        ajouter_emp->setObjectName(QStringLiteral("ajouter_emp"));
        ajouter_emp->setGeometry(QRect(280, 380, 80, 22));
        Userside = new QGroupBox(groupBox);
        Userside->setObjectName(QStringLiteral("Userside"));
        Userside->setGeometry(QRect(310, 40, 291, 301));
        label_nom_5 = new QLabel(Userside);
        label_nom_5->setObjectName(QStringLiteral("label_nom_5"));
        label_nom_5->setGeometry(QRect(10, 160, 48, 16));
        label_nom_4 = new QLabel(Userside);
        label_nom_4->setObjectName(QStringLiteral("label_nom_4"));
        label_nom_4->setGeometry(QRect(10, 120, 48, 16));
        label_nom_2 = new QLabel(Userside);
        label_nom_2->setObjectName(QStringLiteral("label_nom_2"));
        label_nom_2->setGeometry(QRect(10, 40, 48, 14));
        label_email = new QLabel(Userside);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(10, 80, 47, 14));
        comboBox_role = new QComboBox(Userside);
        comboBox_role->setObjectName(QStringLiteral("comboBox_role"));
        comboBox_role->setGeometry(QRect(80, 160, 151, 22));
        lineEdit_pass = new QLineEdit(Userside);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(80, 120, 191, 21));
        lineEdit_email = new QLineEdit(Userside);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(80, 80, 191, 21));
        lineEdit_username = new QLineEdit(Userside);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(80, 40, 191, 21));
        datenaiss_Edit = new QDateEdit(Userside);
        datenaiss_Edit->setObjectName(QStringLiteral("datenaiss_Edit"));
        datenaiss_Edit->setGeometry(QRect(90, 210, 110, 22));
        EmployerSide = new QGroupBox(groupBox);
        EmployerSide->setObjectName(QStringLiteral("EmployerSide"));
        EmployerSide->setGeometry(QRect(20, 40, 281, 331));
        label = new QLabel(EmployerSide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 220, 47, 14));
        comboBox_status = new QComboBox(EmployerSide);
        comboBox_status->setObjectName(QStringLiteral("comboBox_status"));
        comboBox_status->setGeometry(QRect(70, 190, 151, 22));
        lineEdit_nom = new QLineEdit(EmployerSide);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(70, 30, 201, 21));
        lineEdit_cin = new QLineEdit(EmployerSide);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(70, 110, 201, 21));
        lineEdit_prenom = new QLineEdit(EmployerSide);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(70, 70, 201, 21));
        label_prenom = new QLabel(EmployerSide);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(10, 70, 47, 14));
        label_cin = new QLabel(EmployerSide);
        label_cin->setObjectName(QStringLiteral("label_cin"));
        label_cin->setGeometry(QRect(10, 110, 47, 14));
        lineEdit_tel = new QLineEdit(EmployerSide);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(70, 150, 201, 21));
        label_status = new QLabel(EmployerSide);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 190, 47, 14));
        label_tel = new QLabel(EmployerSide);
        label_tel->setObjectName(QStringLiteral("label_tel"));
        label_tel->setGeometry(QRect(10, 150, 47, 14));
        comboBox_sexe = new QComboBox(EmployerSide);
        comboBox_sexe->setObjectName(QStringLiteral("comboBox_sexe"));
        comboBox_sexe->setGeometry(QRect(70, 220, 151, 22));
        label_nom = new QLabel(EmployerSide);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(10, 30, 47, 14));
        comboBox_poste_2 = new QComboBox(EmployerSide);
        comboBox_poste_2->setObjectName(QStringLiteral("comboBox_poste_2"));
        comboBox_poste_2->setGeometry(QRect(70, 250, 151, 22));
        label_7 = new QLabel(EmployerSide);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 290, 47, 14));
        lineEdit_salaire_2 = new QLineEdit(EmployerSide);
        lineEdit_salaire_2->setObjectName(QStringLiteral("lineEdit_salaire_2"));
        lineEdit_salaire_2->setGeometry(QRect(70, 290, 191, 21));
        label_6 = new QLabel(EmployerSide);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 250, 47, 14));
        tabWidget->addTab(ajouter, QString());
        affichier = new QWidget();
        affichier->setObjectName(QStringLiteral("affichier"));
        table_employe = new QTableView(affichier);
        table_employe->setObjectName(QStringLiteral("table_employe"));
        table_employe->setGeometry(QRect(20, 20, 611, 421));
        tabWidget->addTab(affichier, QString());
        supprimer = new QWidget();
        supprimer->setObjectName(QStringLiteral("supprimer"));
        label_supp_id = new QLabel(supprimer);
        label_supp_id->setObjectName(QStringLiteral("label_supp_id"));
        label_supp_id->setGeometry(QRect(70, 90, 71, 14));
        lineEdit_idsupp = new QLineEdit(supprimer);
        lineEdit_idsupp->setObjectName(QStringLiteral("lineEdit_idsupp"));
        lineEdit_idsupp->setGeometry(QRect(200, 90, 113, 21));
        pushButton_supp = new QPushButton(supprimer);
        pushButton_supp->setObjectName(QStringLiteral("pushButton_supp"));
        pushButton_supp->setGeometry(QRect(200, 201, 101, 31));
        tabWidget->addTab(supprimer, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        EmployerSide_2 = new QGroupBox(Modifier);
        EmployerSide_2->setObjectName(QStringLiteral("EmployerSide_2"));
        EmployerSide_2->setGeometry(QRect(20, 10, 281, 301));
        label_3 = new QLabel(EmployerSide_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 180, 47, 14));
        comboBox_status_2 = new QComboBox(EmployerSide_2);
        comboBox_status_2->setObjectName(QStringLiteral("comboBox_status_2"));
        comboBox_status_2->setGeometry(QRect(70, 150, 151, 22));
        lineEdit_nom_2 = new QLineEdit(EmployerSide_2);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(70, 30, 201, 21));
        lineEdit_prenom_2 = new QLineEdit(EmployerSide_2);
        lineEdit_prenom_2->setObjectName(QStringLiteral("lineEdit_prenom_2"));
        lineEdit_prenom_2->setGeometry(QRect(70, 70, 201, 21));
        label_prenom_2 = new QLabel(EmployerSide_2);
        label_prenom_2->setObjectName(QStringLiteral("label_prenom_2"));
        label_prenom_2->setGeometry(QRect(10, 70, 47, 14));
        lineEdit_tel_2 = new QLineEdit(EmployerSide_2);
        lineEdit_tel_2->setObjectName(QStringLiteral("lineEdit_tel_2"));
        lineEdit_tel_2->setGeometry(QRect(70, 110, 201, 21));
        label_status_2 = new QLabel(EmployerSide_2);
        label_status_2->setObjectName(QStringLiteral("label_status_2"));
        label_status_2->setGeometry(QRect(10, 150, 47, 14));
        label_tel_2 = new QLabel(EmployerSide_2);
        label_tel_2->setObjectName(QStringLiteral("label_tel_2"));
        label_tel_2->setGeometry(QRect(10, 110, 47, 14));
        comboBox_sexe_2 = new QComboBox(EmployerSide_2);
        comboBox_sexe_2->setObjectName(QStringLiteral("comboBox_sexe_2"));
        comboBox_sexe_2->setGeometry(QRect(70, 180, 151, 22));
        label_nom_3 = new QLabel(EmployerSide_2);
        label_nom_3->setObjectName(QStringLiteral("label_nom_3"));
        label_nom_3->setGeometry(QRect(10, 30, 47, 14));
        label_4 = new QLabel(EmployerSide_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 220, 47, 14));
        comboBox_poste = new QComboBox(EmployerSide_2);
        comboBox_poste->setObjectName(QStringLiteral("comboBox_poste"));
        comboBox_poste->setGeometry(QRect(70, 220, 151, 22));
        label_5 = new QLabel(EmployerSide_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 260, 47, 14));
        lineEdit_salaire = new QLineEdit(EmployerSide_2);
        lineEdit_salaire->setObjectName(QStringLiteral("lineEdit_salaire"));
        lineEdit_salaire->setGeometry(QRect(70, 260, 191, 21));
        Userside_2 = new QGroupBox(Modifier);
        Userside_2->setObjectName(QStringLiteral("Userside_2"));
        Userside_2->setGeometry(QRect(340, 20, 281, 241));
        label_nom_6 = new QLabel(Userside_2);
        label_nom_6->setObjectName(QStringLiteral("label_nom_6"));
        label_nom_6->setGeometry(QRect(10, 160, 48, 16));
        label_nom_7 = new QLabel(Userside_2);
        label_nom_7->setObjectName(QStringLiteral("label_nom_7"));
        label_nom_7->setGeometry(QRect(10, 120, 48, 16));
        label_nom_8 = new QLabel(Userside_2);
        label_nom_8->setObjectName(QStringLiteral("label_nom_8"));
        label_nom_8->setGeometry(QRect(10, 40, 48, 14));
        label_email_2 = new QLabel(Userside_2);
        label_email_2->setObjectName(QStringLiteral("label_email_2"));
        label_email_2->setGeometry(QRect(10, 80, 47, 14));
        comboBox_role_2 = new QComboBox(Userside_2);
        comboBox_role_2->setObjectName(QStringLiteral("comboBox_role_2"));
        comboBox_role_2->setGeometry(QRect(80, 160, 151, 22));
        lineEdit_pass_2 = new QLineEdit(Userside_2);
        lineEdit_pass_2->setObjectName(QStringLiteral("lineEdit_pass_2"));
        lineEdit_pass_2->setGeometry(QRect(80, 120, 191, 21));
        lineEdit_email_2 = new QLineEdit(Userside_2);
        lineEdit_email_2->setObjectName(QStringLiteral("lineEdit_email_2"));
        lineEdit_email_2->setGeometry(QRect(80, 80, 191, 21));
        lineEdit_username_2 = new QLineEdit(Userside_2);
        lineEdit_username_2->setObjectName(QStringLiteral("lineEdit_username_2"));
        lineEdit_username_2->setGeometry(QRect(80, 40, 191, 21));
        datenaiss_Edit_2 = new QDateEdit(Userside_2);
        datenaiss_Edit_2->setObjectName(QStringLiteral("datenaiss_Edit_2"));
        datenaiss_Edit_2->setGeometry(QRect(80, 200, 110, 22));
        lineEdit_cin_2 = new QLineEdit(Modifier);
        lineEdit_cin_2->setObjectName(QStringLiteral("lineEdit_cin_2"));
        lineEdit_cin_2->setGeometry(QRect(140, 330, 201, 21));
        label_cin_2 = new QLabel(Modifier);
        label_cin_2->setObjectName(QStringLiteral("label_cin_2"));
        label_cin_2->setGeometry(QRect(60, 330, 71, 16));
        pushButton_modifier = new QPushButton(Modifier);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(440, 330, 80, 22));
        tabWidget->addTab(Modifier, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView_sort = new QTableView(tab);
        tableView_sort->setObjectName(QStringLiteral("tableView_sort"));
        tableView_sort->setGeometry(QRect(240, 10, 391, 431));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 211, 421));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 76, 14));
        requete1 = new QComboBox(groupBox_2);
        requete1->setObjectName(QStringLiteral("requete1"));
        requete1->setGeometry(QRect(90, 50, 111, 22));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 90, 76, 14));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 90, 111, 22));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 150, 71, 16));
        requete4 = new QComboBox(groupBox_2);
        requete4->setObjectName(QStringLiteral("requete4"));
        requete4->setGeometry(QRect(90, 150, 111, 22));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 240, 80, 22));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 120, 61, 16));
        requete3 = new QComboBox(groupBox_2);
        requete3->setObjectName(QStringLiteral("requete3"));
        requete3->setGeometry(QRect(90, 120, 111, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 300, 80, 22));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(160, 20, 461, 341));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(CRUD);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CRUD);
    } // setupUi

    void retranslateUi(QDialog *CRUD)
    {
        CRUD->setWindowTitle(QApplication::translate("CRUD", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CRUD", "Add Employer", Q_NULLPTR));
        ajouter_emp->setText(QApplication::translate("CRUD", "ajouter", Q_NULLPTR));
        Userside->setTitle(QApplication::translate("CRUD", "User", Q_NULLPTR));
        label_nom_5->setText(QApplication::translate("CRUD", "Role", Q_NULLPTR));
        label_nom_4->setText(QApplication::translate("CRUD", "password", Q_NULLPTR));
        label_nom_2->setText(QApplication::translate("CRUD", "username", Q_NULLPTR));
        label_email->setText(QApplication::translate("CRUD", "Email", Q_NULLPTR));
        comboBox_role->clear();
        comboBox_role->insertItems(0, QStringList()
         << QApplication::translate("CRUD", "Employer", Q_NULLPTR)
        );
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
        label_status->setText(QApplication::translate("CRUD", "Status", Q_NULLPTR));
        label_tel->setText(QApplication::translate("CRUD", "NUM tel", Q_NULLPTR));
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
        tabWidget->setTabText(tabWidget->indexOf(ajouter), QApplication::translate("CRUD", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(affichier), QApplication::translate("CRUD", "Affichier", Q_NULLPTR));
        label_supp_id->setText(QApplication::translate("CRUD", "ID_Pour_Supp", Q_NULLPTR));
        pushButton_supp->setText(QApplication::translate("CRUD", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(supprimer), QApplication::translate("CRUD", "Supprimer", Q_NULLPTR));
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
        label_tel_2->setText(QApplication::translate("CRUD", "NUM tel", Q_NULLPTR));
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
         << QApplication::translate("CRUD", "Employer", Q_NULLPTR)
        );
        label_cin_2->setText(QApplication::translate("CRUD", "ID/CIN", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("CRUD", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QApplication::translate("CRUD", "Modifier", Q_NULLPTR));
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CRUD", "tri", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CRUD", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CRUD", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CRUD: public Ui_CRUD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUD_H
