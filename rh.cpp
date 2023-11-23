#include "rh.h"
#include "ui_rh.h"
#include <QCloseEvent>
#include "crud.h"
#include "aidialog.h"
#include "pdf.h"
#include <QSqlQuery>
#include <QCoreApplication>



rh::rh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rh)
{
    ui->setupUi(this);
    isAIDialogOpen=false;
}

rh::~rh()
{
    delete ui;
}

void rh::on_pushButton_CRUD_clicked()
{

    CRUD c;

    c.show();
    c.exec();

    //QCoreApplication::quit();



}

 void rh::closeEvent(QCloseEvent *event)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("EXIT NOW ?");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setText("Do You Want to Exit or Sign out ?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

        QAbstractButton *SignOutButton = msgBox.button(QMessageBox::Yes);
        SignOutButton->setText("SignOut");

        QAbstractButton *SignOutButton2 = msgBox.button(QMessageBox::No);
        SignOutButton2->setText("Exit");

        int reply = msgBox.exec();




        if (reply == QMessageBox::Yes) {
            // Allow the window to close
            event->accept();
            QSqlQuery query;
            query.prepare("DELETE FROM LOGS");
            query.exec();
        } else {
            // Ignore the close event
            event->accept();
        }
    }

void rh::on_pushButton_CRUD_2_clicked()
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

void rh::on_pushButton_CRUD_3_clicked()
{
    pdf p;
    p.show();
    p.exec();
}



void rh::on_pushButton_CRUD_4_clicked()
{

    if(!isAIDialogOpen)
    {
        isAIDialogOpen=true;

        AIDIALOG ai;
        ai.setModal(true);
        ai.show();
        ai.exec();

        isAIDialogOpen=false;
    }
}
