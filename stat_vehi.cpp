#include "stat_vehi.h"
#include "ui_stat_vehi.h"
#include <QSqlQuery>
#include <qsqlquery.h>
#include <qdebug.h>

stat_vehi::stat_vehi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stat_vehi)
{
    ui->setupUi(this);
}

stat_vehi::~stat_vehi()
{
    delete ui;
}


void stat_vehi::make_stat_v()
{
    int total;
    int nb_marhce ;
    int nb_panne=0 ;
    QString Nb_Marche;
    QString Nb_Panne;
    QSqlQuery q;
    q.prepare("SELECT COUNT(MATRICULE) FROM VOITURES where ETAT ='Bonne' ");
    q.exec();
    q.first() ;
    nb_marhce=(q.value(0).toInt());
    q.prepare("SELECT COUNT(MATRICULE) FROM VOITURES where ETAT ='En Panne' ");
    q.exec();
    q.first() ;
    nb_panne=(q.value(0).toInt());
    q.prepare("SELECT COUNT(MATRICULE) FROM VOITURES ");
    q.exec();
    q.first() ;
    total=(q.value(0).toInt());
    nb_panne=((double)nb_panne/(double)total)*100;
    nb_marhce = 100-nb_panne;
    Nb_Marche = QString::number(nb_marhce);
    Nb_Panne = QString::number(nb_panne);

    QPieSeries *series;
    series= new  QPieSeries();
    series->append("Bonne "+Nb_Marche+"%",nb_marhce);
    series->append("En Panne "+Nb_Panne+"%",nb_panne);
    QPieSlice *slice0 = series->slices().at(0);
    slice0->setLabelVisible();
    QPieSlice *slice1 = series->slices().at(1);
    slice1->setExploded();
    slice1->setLabelVisible();
    slice1->setPen(QPen(Qt::blue, 2));
    slice1->setBrush(Qt::red);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistics des etats des Voitures");
    chart->legend()->show();
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->verticalLayout->addWidget(chartView);
    qDebug()<<"pst";

}
