#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setVoiture(voiture v)
{
    ui->lineEdit_matD->setText(QString::number(v.getMAT()));
    ui->lineEdit_marqueD->setText(v.getMarque());
    ui->lineEdit_nomD->setText(v.getNom());
    ui->lineEdit_nb_pD->setText(QString::number(v.getPorte()));
    ui->lineEdit_etatD->setText(v.getEtat());
    ui->lineEdit_couleurD->setText(v.getCouleur());
    ui->lineEdit_puissD->setText(QString::number(v.getPuiss()));
}
