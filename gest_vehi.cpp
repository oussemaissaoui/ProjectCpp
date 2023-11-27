#include "gest_vehi.h"
#include "ui_gest_vehi.h"
#include <QDebug>
#include <QMessageBox>
#include "connection.h"
#include "voiture.h"
#include "pdf.h"
#include "stat_vehi.h"
#include "notification.h"

gest_vehi::gest_vehi(QWidget *parent) : QMainWindow(parent), ui(new Ui::gest_vehi)
{
    ui->setupUi(this);
    notif_status=false;
    connect(ui->le_mat,&QLineEdit::textChanged,this,&gest_vehi::set_line_edit);
    Connection *dbConnectionInstance = new Connection();
    if (dbConnectionInstance->createconnect())
    {
        connect(dbConnectionInstance, SIGNAL(signalReceived()), this, SLOT(onSignalReceived()));
    }
    else
    {
        qDebug() << "Database connection failed.";
    }
}

gest_vehi::~gest_vehi()
{
    delete ui;
}

void gest_vehi::on_btn_modifier_clicked()
{
    QString mat=ui->le_mat->text();
    QString marque=ui->le_marque->text();
    QString nom=ui->le_nom->text();
    int nb_porte=ui->le_nb_porte->text().toInt();
    QString etat=ui->comboBox->currentText();
    QString couleur=ui->le_couleur->text();
    int puissance=ui->le_puissance->text().toInt();
    voiture V(mat,marque,nom,nb_porte,etat,couleur,puissance);
    bool test=V.modifier(mat);
    if (test)
    {
        ui->tab_voiture->setModel(V.afficher()) ;
        ui->tab_voiture->setModel(V.afficher()) ;
        QMessageBox::information(nullptr, QObject::tr("OK"),
        QObject::tr("Vehicule Modifie .\n""Clique Ok pour quitter"),QMessageBox::Ok);
        ui->le_mat->clear() ;
        ui->le_marque->clear() ;
        ui->le_nom->clear() ;
        ui->le_nb_porte->clear() ;
        ui->comboBox->clear() ;
        ui->le_couleur->clear() ;
        ui->le_puissance->clear() ;
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("LE"),
        QObject::tr("Vehicule n'existe pas.\n""Clique Ok pour quitter"),QMessageBox::Ok);
}

void gest_vehi::on_btn_ajouter_clicked()
{
    qDebug();
    QString mat=ui->le_mat->text();
    QString marque=ui->le_marque->text();
    QString nom=ui->le_nom->text();
    int nb_porte=ui->le_nb_porte->text().toInt();
    QString etat=ui->comboBox->currentText();
    QString couleur=ui->le_couleur->text();
    int puissance=ui->le_puissance->text().toInt();

    voiture V(mat ,marque,nom,nb_porte,etat,couleur,puissance);
    bool test=V.ajouter();
    QMessageBox msgBOX;

    if (test)
    {
        ui->tab_voiture->setModel(V.afficher());
        msgBOX.setText("Ajout aves succes.");
    }else
    msgBOX.setText("Echec !!");
    msgBOX.exec();
}

void gest_vehi::on_tri_id_clicked()
{
    voiture V;
    ui->tab_voiture->setModel(V.tri());
}

void gest_vehi::on_pdf_clicked()
{
    pdf p;
    p.setModal(true);
    p.exec();
    qDebug()<<"pdf window open";
}

void gest_vehi::on_stat_clicked()
{
    stat_vehi *w = new stat_vehi();
    w->make_stat_v();
    w->show();
    qDebug()<<"stat window open";
}

void gest_vehi::on_btn_supprimer_clicked()
{
    voiture v1;
    v1.setMAT(ui->le_mat_supp->text());
    bool test=v1.supprimer(v1.getMAT());
    QMessageBox msgBox;

    if (test)
        msgBox.setText("Suppression aves succes.");
    else
        msgBox.setText("Echec de suppression");
        msgBox.exec();
    ui->tab_voiture->setModel(v1.afficher()) ;
}

void gest_vehi::on_pushButton_clicked()
{
    /*voiture v;
    consts mat_int = ui->le_mat_rech;
    QString mat = QString::number(mat_int);

    ui->tab_voiture->setModel(v.recherche(ui->tab_voiture,mat));*/
}

void gest_vehi::set_line_edit()
{
    QString mat=ui->le_mat->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM VOITURES WHERE MATRICULE =:mat");
    query.bindValue(":mat",mat);
    if(query.exec() && query.next())
    {
        ui->le_mat->setText(query.value(0).toString());
        ui->le_marque->setText(query.value(1).toString());
        ui->le_nom->setText(query.value(2).toString());
        ui->le_nb_porte->setText(query.value(3).toString());
        ui->comboBox->setCurrentText(query.value(4).toString());
        ui->le_couleur->setText((query.value(5).toString()));
        ui->le_puissance->setText(query.value(6).toString());
    }
}

void gest_vehi::on_pushButton_2_clicked()
{
    Notification n;
    n.show();
    n.exec();
}

void gest_vehi::onSignalReceived()
{
    qDebug() << "Signal received in gest_vehi";
    Notification *notification = new Notification(this);

    QSqlQuery fetchQuery;
    fetchQuery.prepare("SELECT MATRICULE FROM VOITURES WHERE SIGNAL = '1'");
    if (fetchQuery.exec() && fetchQuery.next())
    {
        QString matricule = fetchQuery.value(0).toString();
        QString notificationText = "Voiture num " + matricule + " est tombée en panne.";
        notification->setNotificationText(notificationText);
    }
    if(notif_status==false)
    {
        notif_status=true;
        notification->setModal(true);
        notification->show();
        notification->exec();
        QSqlQuery q;
        q.prepare("UPDATE VOITURES SET SIGNAL = :signal WHERE SIGNAL = 1");
        q.bindValue(":signal",0);
        q.exec();
        notif_status=false;
    }
}

void gest_vehi::on_le_rechercher_1_cursorPositionChanged(int arg1)
{
    Q_UNUSED(arg1);
    voiture V;
    QString mat= ui->le_rechercher_1->text();
    V.recherche_mat(ui->tab_voiture,mat);
    if (ui->le_rechercher_1->text().isEmpty())
    {
        ui->tab_voiture->setModel(V.afficher());
    }
}
void gest_vehi::on_le_rechercher_2_cursorPositionChanged(int arg1)
{
    Q_UNUSED(arg1);
    voiture V;
    QString mar= ui->le_rechercher_2->text();
    V.recherche_mar(ui->tab_voiture,mar);
    if (ui->le_rechercher_2->text().isEmpty())
    {
        ui->tab_voiture->setModel(V.afficher());
    }
}

void gest_vehi::on_le_rechercher_3_cursorPositionChanged(int arg1)
{
    Q_UNUSED(arg1);
    voiture V;
    int p= ui->le_rechercher_3->text().toInt();
    V.recherche_porte(ui->tab_voiture,p);
    if (ui->le_rechercher_3->text().isEmpty())
    {
        ui->tab_voiture->setModel(V.afficher());
    }
}

void gest_vehi::on_le_rechercher_4_activated(const QString &arg1)
{
    Q_UNUSED(arg1);
    voiture V;
    QString etat = ui->le_rechercher_4->currentText(); // Assuming the text in the combobox is convertible to int
    V.recherche_etat(ui->tab_voiture, etat);
    if (ui->le_rechercher_4->currentText().isEmpty())
    {
        ui->tab_voiture->setModel(V.afficher());
    }
}
