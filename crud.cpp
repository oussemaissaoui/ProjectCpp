#include <QApplication>
#include <QStandardItemModel>
#include "crud.h"
#include "ui_crud.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QObject>
#include <iostream>
#include <fstream>
#include <QString>
#include <QDebug>
#include <string>
#include <QProcess>
#include <chrono>
#include <thread>
#include <cstdlib>  // for rand() and srand()
#include <ctime>
#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <cstdlib>
#include "aidialog.h"
#include <QDate>

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
    //ui->lineEdit_cin_2->setValidator(validator);
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
    e.set_cin(ui->lineEdit_cin_2->text());
    user u;
    u.set_id_user(ui->lineEdit_cin_2->text());
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
        ui->EmployerSide_2->setVisible(true);
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
           ui->Userside_2->setVisible(true);
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

    ui->table_employe->setModel(model);

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

void CRUD::on_ask_ai_clicked()
{
    QString request = "Answer to my question in " +
                      ui->comboBox_Language->currentText() +
                      " , length Text is " +
                      ui->comboBox_Length->currentText() +
                      " , conversation mode is " +
                      ui->comboBox_mode->currentText() +
                      " , styles of text is " +
                      ui->comboBox_Style->currentText() +
                      " . So My question is : " +
                      ui->lineEdit_question->text();
//to be modified

    string filePath = "C:/Project2A/output.txt";


    // Open the file in std::ofstream (output file stream) mode
    ofstream outFile(filePath);

    if (outFile.is_open()) {
        // Write the QString text to the file
        outFile << request.toStdString();

        // Close the file
        outFile.close();

        qDebug() << "Text successfully written to file.";
    } else {
        qDebug() << "Error opening the file for writing.";
    }


    //to be modified
    const char* command = R"(C:\Project2A\curltest.exe)";

        int result = std::system(command);


        if (result == 0) {
            std::cout << "Command executed successfully.\n";
        } else {
            std::cerr << "Error executing command. Exit code: " << result << '\n';

        }


        std::ifstream inputFile("C:/Project2A/response.txt");

            // Check if the file is open
            if (!inputFile.is_open()) {
                std::cerr << "Error opening the file.\n";
            }

            // Read the file line by line
            std::string line;
            while (std::getline(inputFile, line)) {
                // Process each line as needed
                std::cout << line << '\n';
            }

            // Close the file
            inputFile.close();









     QThread::msleep(500);
     //to be modified




    QString cleaned_Text= readTextFromFile("C:/Project2A/response.txt");
    cleaned_Text.replace("\\n", " ");
    cleaned_Text.replace("\"", "'");
    cleaned_Text.replace("\n", "");
    cleaned_Text.replace("é","e");
    cleaned_Text.replace("è","e");
    cleaned_Text.replace("á", "a");
    cleaned_Text.replace("à", "a");
    cleaned_Text.replace("í", "i");
    cleaned_Text.replace("ó", "o");
    cleaned_Text.replace("ú", "u");
    cleaned_Text.replace("ý", "y");
    cleaned_Text.replace("â", "a");
    cleaned_Text.replace("ê", "e");
    cleaned_Text.replace("î", "i");
    cleaned_Text.replace("ô", "o");
    cleaned_Text.replace("û", "u");
    cleaned_Text.replace("ë", "e");
    cleaned_Text.replace("ï", "i");
    cleaned_Text.replace("ü", "u");
    cleaned_Text.replace("ÿ", "y");
    cleaned_Text.replace("æ", "ae");
    cleaned_Text.replace("œ", "oe");
    cleaned_Text.replace("ß", "ss");
    cleaned_Text.replace("ñ", "n");
    cleaned_Text.replace("ø", "o");
    cleaned_Text.replace("å", "a");
    cleaned_Text.replace("ã", "a");
    cleaned_Text.replace("õ", "o");






    qDebug() << "File content:\n" << cleaned_Text;

    simulateChat(cleaned_Text);




}

QString CRUD::readTextFromFile(const QString& filePath) {
    QString content;

    // Open the file for reading
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Create a QTextStream to read from the file and set the codec to UTF-8
        QTextStream stream(&file);
        stream.setCodec("UTF-8");

        // Read the entire content of the file into the QString
        content = stream.readAll();

        // Close the file
        file.close();
        qDebug() << "Text successfully read from file.";
    } else {
        qDebug() << "Error opening the file for reading.";
    }

    return content;
}

void CRUD::simulateChat(const QString& chatContent)
{
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    QTextStream in(chatContent.toUtf8());  // Convert QString to QTextStream

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (!line.isEmpty()) {
            // Print "ChatGPT: " to QTextEdit
            typeText("ChatGPT: ", 25);

            // Introduce randomness in the number of letters typed at a time (between 1 and 3)
            int numLetters = rand() % 3 + 1;

            // Type a random number of letters at a time
            for (int i = 0; i < line.size(); i += numLetters) {
                typeText(line.mid(i, numLetters), 25);
            }

            // Add a newline to QTextEdit
            ui->textEdit_2->insertPlainText("\n");

            // Process events to update the GUI
            QCoreApplication::processEvents();

            // Adjust the delay as needed
            QThread::msleep(1000);
        }
    }
}

void CRUD::typeText(const QString& text, int delay)
{
    for (QChar c : text)
    {
        ui->textEdit_2->insertPlainText(QString(c));  // Directly use QString
        QCoreApplication::processEvents();  // Process events to update the GUI
        QThread::msleep(delay);
    }
}

void CRUD::on_stat_clicked()
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

void CRUD::on_pushButton_genpdf_clicked()
{
//a
}
