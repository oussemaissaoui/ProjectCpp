#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "voiture.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_mat->setValidator(new QIntValidator(0,99999999,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    voiture v;
    v.setMAT(ui->lineEdit_mat->text().toInt());
    v.setMarque(ui->lineEdit_marque->text());
    v.setNom(ui->lineEdit_nom->text());
    v.setPorte(ui->lineEdit_nb_p->text().toInt());
    v.setEtat(ui->lineEdit_etat->text());
    v.setCouleur(ui->lineEdit_couleur->text());
    v.setPuiss((ui->lineEdit_puiss->text().toInt()));
    v.ajouter();

    Dialog d;
    d.setVoiture(v);
    d.exec();




}
