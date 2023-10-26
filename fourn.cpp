#include "fourn.h"
#include "ui_fourn.h"
#include "fournisseur.h"
#include <QMessageBox>

fourn::fourn(QWidget *parent) : QDialog(parent), ui(new Ui::fourn)
{
    ui->setupUi(this);

    // Fournisseur
    ui->l_CIN->setValidator(new QIntValidator(0, 999999999, this));
    ui->l_tel->setValidator(new QIntValidator(0, 99999999, this));
   // ui->tab_etud->setModel(f.afficher());
}

fourn::~fourn()
{
    delete ui;
}

void fourn::on_ajouter_clicked()
{
    fournisseur F;
    ui->tab_etud->setModel(f.afficher());

    if (!ui->l_CIN->text().isEmpty())
    {
        QString nom = ui->l_nom->text();
        QString prenom = ui->l_prenom->text();
        QString sexe = ui->l_sexe->currentText();
        int cin = ui->l_CIN->text().toInt();
        int tel = ui->l_tel->text().toInt();
        QString entreprise = ui->l_entreprise->text();
        QString email = ui->l_email->text();

        F.setCin(cin);
        F.setNom(nom);
        F.setPrenom(prenom);
        F.setSexe(sexe);
        F.setTel(tel);
        F.setNomEntreprise(entreprise);
        F.setEmail(email);

        bool test = F.ajouter();

        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Ajout effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                   QObject::tr("Ajout non effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_supprimer_clicked()
{
    if (!ui->l_CIN_2->text().isEmpty())
    {
        int cin = ui->l_CIN_2->text().toInt();
        int test=f.Supprimer(cin);
        //int test = f.supprimer(cin);

        if (test == 1)
        {
            ui->tab_etud->setModel(f.afficher());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Suppression effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else if (test == 2)
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                  QObject::tr("Cin n'existe pas.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                  QObject::tr("Suppression non effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_modifier_2_clicked()
{
    if (!ui->l_CIN_3->text().isEmpty())
    {
        fournisseur F;
        F = F.modifier(ui->l_CIN_3->text());
        QString Scin = QString::number(F.getCin());
        QString Stel = QString::number(F.getTel());
  qInfo()<<"cin: "<<ui->l_CIN_3->text()<<endl;
        ui->l_CIN->setText(Scin);
        ui->l_nom->setText(F.getNom());
        ui->l_prenom->setText(F.getPrenom());
        ui->l_sexe->setCurrentText(F.getSexe());
        ui->l_tel->setText(Stel);
        ui->l_entreprise->setText(F.getNomEntreprise());
        ui->l_email->setText(F.getEmail());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_modifier_clicked()
{
    if (!ui->l_CIN_3->text().isEmpty())
    {
        fournisseur F;
        ui->tab_etud->setModel(f.afficher());

        QString nom = ui->l_nom->text();
        QString prenom = ui->l_prenom->text();
        QString sexe = ui->l_sexe->currentText();
        int cin = ui->l_CIN->text().toInt();
        int tel = ui->l_tel->text().toInt();
        QString entreprise = ui->l_entreprise->text();
        QString email = ui->l_email->text();

        F.setCin(cin);
        F.setNom(nom);
        F.setPrenom(prenom);
        F.setSexe(sexe);
        F.setTel(tel);
        F.setNomEntreprise(entreprise);
        F.setEmail(email);

        bool test = F.modifier2(ui->l_CIN_3->text(), F);

        if (test)
        {
            ui->tab_etud->setModel(F.afficher());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Modification effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
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

void fourn::on_Emp_2_currentChanged(int index)
{
    fournisseur F;
         ui->tab_etud->setModel(F.afficher());
}

