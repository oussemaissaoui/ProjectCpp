#include <QApplication>
#include <QStandardItemModel>
#include "crud.h"
#include "ui_crud.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QObject>

CRUD::CRUD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);
    ui->EmployerSide_2->setVisible(false);
    ui->Userside_2->setVisible(false);
    connect(ui->lineEdit_cin_2, &QLineEdit::textChanged, this, &CRUD::SetLineEdit_value);
    ui->table_employe->setModel(e.afficher());
    cout<<tab_widget_index<<endl;
    ui->tabWidget->setCurrentIndex(tab_widget_index);

    cout<<ui->tabWidget->currentIndex();


    //setValidator---part
    QIntValidator *validator = new QIntValidator(this);
    ui->lineEdit_cin->setValidator(validator);
    ui->lineEdit_tel->setValidator(validator);
    ui->lineEdit_idsupp->setValidator(validator);
    ui->lineEdit_cin_2->setValidator(validator);
    ui->lineEdit_tel_2->setValidator(validator);


}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_ajouter_emp_clicked()
{
    //Employe
    ui->table_employe->setModel(e.afficher());
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString cin=ui->lineEdit_cin->text();
    QString tel=ui->lineEdit_tel->text();
    QString status=ui->comboBox_status->currentText();
    QString sexe=ui->comboBox_sexe->currentText();
    QDate date=ui->datenaiss_Edit->date();
 
    QString username=ui->lineEdit_username->text();
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_pass->text();
    QString role=ui->comboBox_role->currentText();
    QString poste=ui->comboBox_poste_2->currentText();
    int salaire=ui->lineEdit_salaire_2->text().toInt();
    
    QDateTime lastlogin_tmp;
    QDateTime signupdate_tmp;

    employe emp_tmp(username,password,email,role,cin,nom,prenom,sexe,cin,tel,date,lastlogin_tmp,signupdate_tmp,status,poste,salaire,cin);
    

    bool test = emp_tmp.ajouter_user_emp();
    //bool test2= e.ajouter_user();

            if (test )
            {
                  ui->table_employe->setModel(e.afficher());                        
            }
           

}

void CRUD::on_pushButton_supp_clicked()
{
    employe e;
    ui->table_employe->setModel(e.afficher());
    e.set_cin(ui->lineEdit_idsupp->text());
    user u;
    u.set_id_user(ui->lineEdit_idsupp->text());
    bool test = e.supprimer(e.get_cin());
    bool test2 =u.supprimer_user();
            if (test || test2)
            {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                                         QObject::tr("Suprresion effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
                                         ui->table_employe->setModel(e.afficher());
            
            }
            /*else
            {
                QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                       QObject::tr("Suprresion echoué .\nClick Cancel to exit."), QMessageBox::Cancel);
            }*/

}


void CRUD::SetLineEdit_value()
{
    QString id= ui->lineEdit_cin_2->text();
    QSqlQuery query;
       query.prepare("SELECT * FROM employe WHERE id_e = :id");
       query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        ui->EmployerSide_2->setVisible(true);

        QString status = query.value(0).toString();
        QString poste = query.value(2).toString();
        QString salaire = query.value(3).toString();
        
        ui->comboBox_status_2->setCurrentText(status);
        ui->comboBox_poste->setCurrentText(poste);
        ui->lineEdit_salaire->setText(salaire);


        

    }
    else
    {
        ui->EmployerSide_2->setVisible(false);
    }

    QSqlQuery query2;
       query2.prepare("SELECT * FROM users WHERE id_user = :id");
       query2.bindValue(":id", id);
       if (query2.exec() && query2.next()) {
           ui->Userside_2->setVisible(true);

           QString email = query2.value(0).toString();
           QString password = query2.value(1).toString();
           QString username = query2.value(3).toString();
           QString role = query2.value(4).toString();
           QString nom = query2.value(5).toString();
           QString prenom = query2.value(6).toString();
           
           
           QString sexe = query2.value(7).toString();
           QDate date = query2.value(9).toDate();
           QString tel = query2.value(12).toString();


        ui->lineEdit_nom_2->setText(nom);
        ui->lineEdit_prenom_2->setText(prenom);
        ui->lineEdit_tel_2->setText(tel);
        ui->comboBox_sexe_2->setCurrentText(sexe);
        ui->datenaiss_Edit_2->setDate(date);
        ui->lineEdit_email_2->setText(email);
        ui->lineEdit_username_2->setText(username);
        ui->lineEdit_pass_2->setText(password);
        ui->comboBox_role_2->setCurrentText(role);
           





       }
       else
       {
           ui->Userside_2->setVisible(false);
       }


}



void CRUD::on_pushButton_modifier_clicked()
{
   

    if(!ui->lineEdit_cin_2->text().isEmpty())
    {
    QString nom=ui->lineEdit_nom_2->text();
    QString prenom=ui->lineEdit_prenom_2->text();
    QString cin=ui->lineEdit_cin->text();
    QString tel=ui->lineEdit_tel_2->text();
    QString status=ui->comboBox_status_2->currentText();
    QString sexe=ui->comboBox_sexe_2->currentText();
    QDate date=ui->datenaiss_Edit_2->date();
 
    QString username=ui->lineEdit_username_2->text();
    QString email=ui->lineEdit_email_2->text();
    QString password=ui->lineEdit_pass_2->text();
    QString role=ui->comboBox_role_2->currentText();
    QString poste=ui->comboBox_poste->currentText();
    int salaire=ui->lineEdit_salaire->text().toInt();
    
    QDateTime lastlogin_tmp;
    QDateTime signupdate_tmp;

    employe emp_tmp(username,password,email,role,cin,nom,prenom,sexe,cin,tel,date,lastlogin_tmp,signupdate_tmp,status,poste,salaire,cin);



        bool test = emp_tmp.modifier_user_emp(ui->lineEdit_cin_2->text());

        if (test)
        {
            
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Modification effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
                                     ui->table_employe->setModel(e.afficher());
        
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                   QObject::tr("Modification non effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
        }







    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }



}

void CRUD::on_pushButton_clicked()
{
    QString requete_tri="SELECT * FROM ";
    requete_tri+= ui->requete1->currentText();
    requete_tri+=  " ORDER BY ";
    requete_tri+= ui->requete3->currentText();
    if(ui->requete4->currentText() == "smallest to largest")
        requete_tri+=" ASC";
    else if(ui->requete4->currentText() == "largest to smallest")
        requete_tri+=" DESC";

    cout<<requete_tri.toStdString()<<endl;
    QSqlQueryModel *model = new QSqlQueryModel;
     model->setQuery(requete_tri);

    if (model->lastError().isValid()) {
        qDebug() << "Error in SQL query: " << model->lastError().text();
    }

    ui->tableView_sort->setModel(model);

}

void CRUD::on_pushButton_2_clicked()
{
    QDate currentDate = QDate::currentDate();
    QSqlQuery query;
    query.prepare("SELECT DATE_NAISSANCE FROM users ");
    query.exec();

    int age18_25=0;
    int age26_32=0;
    int age33_40=0;
    int age41_48=0;
    int age_sup49=0;

    while(query.next())
    {
        QDate anniversaire=query.value(0).toDate();
        int age = anniversaire.daysTo(currentDate) / 365;

        // Check age group and update the corresponding variable
        if (age >= 18 && age <= 25) {
            age18_25++;
        } 
        else if (age >= 26 && age <= 32) {
            age26_32++;
        } 
        else if (age >= 33 && age <= 40) {
            age33_40++;
        }
        else if (age >= 41 && age <= 48) {
            age41_48++;
        }
        else if (age >= 49 ) {
            age_sup49++;
        }
    }
    int totalUsers = age18_25 + age26_32 + age33_40 +age41_48+age_sup49;

    cout<<"first : "<<age18_25<<"sec : "<<age26_32<<"third : "<<age33_40<<"fourth : "<<age41_48<<"fifth : "<<age_sup49<<endl;

double percentage18to25 = (double)age18_25 / totalUsers * 100;
double percentage26to32 = (double)age26_32 / totalUsers * 100;
double percentage33to40 = (double)age33_40 / totalUsers * 100;
double percentage41to48 = (double)age41_48 / totalUsers * 100;
double percentage_sup49 = (double)age_sup49 / totalUsers * 100;



    QPieSeries *series = new QPieSeries();
           series->append("18 -> 25",percentage18to25);
           series->append("26 -> 32 ",percentage26to32);
           series->append("33 -> 40",percentage33to40);
           series->append("41 -> 48",percentage41to48);
           series->append("Superieur a 49",percentage_sup49);

           // Add label to 1st slice
           QPieSlice *slice0 = series->slices().at(0);
           slice0->setLabelVisible();

           // Add label, explode and define brush for 2nd slice
           QPieSlice *slice1 = series->slices().at(1);
           slice1->setExploded();
           slice1->setLabelVisible();
           slice1->setPen(QPen(Qt::darkGreen, 2));
           slice1->setBrush(Qt::green);

           // Add labels to rest of slices
           QPieSlice *slice2 = series->slices().at(2);
           slice2->setLabelVisible();
           QPieSlice *slice3 = series->slices().at(3);
           slice3->setLabelVisible();
           QPieSlice *slice4 = series->slices().at(4);
           slice4->setLabelVisible();

           // Create the chart widget
           QChart *chart = new QChart();

           // Add data to chart with title and hide legend
           chart->addSeries(series);
           chart->setTitle("Average age of Users");
           chart->legend()->hide();

           // Used to display the chart
           QChartView *chartView = new QChartView(chart);
           chartView->setRenderHint(QPainter::Antialiasing);
        
        chart_window.setCentralWidget(chartView);
        chart_window.resize(800, 600);
        chart_window.show();


}
