#include "notification.h"
#include "ui_notification.h"
#include <QTimer>

Notification::Notification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notification)
{
    ui->setupUi(this);
}

Notification::~Notification()
{
    delete ui;
}

void Notification::setNotificationText(const QString &text)
{
    ui->label_noti->setText(text);
}

/*void Notification::showNotif()
{

    QSqlQuery q;
    if (q.exec("SELECT COUNT(*) FROM VOITURES WHERE SIGNAL = 'En Panne'"))
    {
        q.next();
        int count = q.value(0).toInt();
        if (count > 0)
        {
            this->show();
            ui->label_noti->setText("Voiture en panne");

        }
    }
    else
    {
        qDebug() << "Query failed 3asba : " << q.lastError().text();
    }
    q.finish();
}

void Notification::checkEtatChange()
{
    QSqlQuery q;
    if (q.exec("SELECT COUNT(*) FROM VOITURES WHERE ETAT = 'En Panne' OR ETAT = 'ETAT_CHANGED'"))
    {
        q.next();
        int count = q.value(0).toInt();
        if (count > 0)
        {
            // Emit the signal to notify the change
            emit etatChanged();
        }
    }
    else
    {
        qDebug() << "Query failed azeaze: " << q.lastError().text();
    }
    q.finish();
}*/
