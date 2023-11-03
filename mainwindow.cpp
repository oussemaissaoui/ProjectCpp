#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(V.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bnt_ajout_clicked()
{
    voiture v;
        v.setMAT(ui->lineEdit_mat->text().toInt());
        v.setMarque(ui->lineEdit_marque->text());
        v.setNom(ui->lineEdit_nom->text());
        v.setPorte(ui->lineEdit_nb_p->text().toInt());
        v.setEtat(ui->lineEdit_etat->text());
        v.setCouleur(ui->lineEdit_couleur->text());
        v.setPuiss((ui->lineEdit_puiss->text().toInt()));

        bool test = v.ajouter();

                    if (test)
                    {
                        QMessageBox::information(nullptr, QObject::tr("OK"),
                                                 QObject::tr("Ajout effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
                        ui->tableView->setModel(V.afficher());
                    }
                    else
                    {
                        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                               QObject::tr("Ajout non effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
                    }

}

void MainWindow::on_btn_supp_clicked()
{
    voiture v;
    v.setMAT(ui->lineEdit_matS->text().toInt());

    bool test = v.supprimer(v.getMAT());
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
        ui->tableView->setModel(V.afficher());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                               QObject::tr("Suppression non effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_bnt_modif_clicked()
{
    voiture v;
    v.setMAT(ui->lineEdit_matM->text().toInt());
    v.setMarque(ui->lineEdit_marqueM->text());
    v.setNom(ui->lineEdit_nomM->text());
    v.setPorte(ui->lineEdit_nb_pM->text().toInt());
    v.setEtat(ui->lineEdit_etatM->text());
    v.setCouleur(ui->lineEdit_couleurM->text());
    v.setPuiss((ui->lineEdit_puissM->text().toInt()));
    bool test = v.modifier((v.getMAT()));
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Modification effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
        ui->tableView->setModel(V.afficher());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                               QObject::tr("Modification non effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
    }

}
