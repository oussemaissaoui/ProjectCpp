#include "pdf.h"
#include "ui_pdf.h"
#include<QPainter>
#include<QDesktopServices>
#include<QUrl>
#include<QPdfWriter>
#include<QMessageBox>
#include<QPainter>
#include<QSqlQuery>
#include<QDebug>

pdf::pdf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pdf)
{
    ui->setupUi(this);
}

pdf::~pdf()
{
    delete ui;
}

void pdf::on_pdf_voiture_clicked()
{
    QPdfWriter pdf("C:/Users/elfil/Desktop/DETAILS.pdf");
    QPainter painter(&pdf);
    QString mat = ui->le_pdf_voiture->text();
    QSqlQuery test ;
    test.prepare("SELECT COUNT(*) from VOITURES where MATRICULE= :mat");
    test.bindValue(":mat",mat);
    test.exec();
    if (test.next())
    {
        if (test.value(0).toInt() == 1)
        {
            QSqlQuery query ;
            query.prepare("select MATRICULE, MARQUE, NOM, NB_PORTE, ETAT, COULEUR, PUISSANCE from VOITURES where MATRICULE= :mat");
            query.bindValue(":mat",mat);
            query.exec();
            if (query.next())
            {
                QString mat = query.value(0).toString();
                QString marque = query.value(1).toString();
                QString nom = query.value(2).toString();
                QString nb_p = query.value(3).toString();
                QString etat = query.value(4).toString();
                QString coul = query.value(5).toString();
                QString puiss = query.value(6).toString();


                painter.setPen(Qt::red);
                painter.drawText(600,500,"MATRICULE : ");
                painter.drawText(600,700,"MARQUE : ");
                painter.drawText(600,900,"NOM : ");
                painter.drawText(600,1100,"NB PORTES : ");
                painter.drawText(600,1300,"ETAT : ");
                painter.drawText(600,1500,"COULEUR : ");
                painter.drawText(600,1700,"PUISSANCE : ");

                painter.setPen(Qt::black);
                painter.drawText(1500,500,mat);
                painter.drawText(1500,700,marque);
                painter.drawText(1500,900,nom);
                painter.drawText(1500,1100,nb_p);
                painter.drawText(1700,1300,etat);
                painter.drawText(1500,1500,coul);
                painter.drawText(1500,1700,puiss);
                painter.end();

            }
            qDebug()<<"PDF DONE";
        }
        else
        {
            qDebug()<<"PDF NOT DONE";
        }
    }
}
