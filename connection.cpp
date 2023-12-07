#include "connection.h"
#include <QDebug>

Connection::Connection()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(checkDatabase()));
    timer->start(5000);
    //test
}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("Source_Project2A");
    db.setUserName("rayenn");//inserer nom de l'utilisateur
    db.setPassword("123123");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;
    return  test;
}

void Connection::checkDatabase() {
    QSqlQuery query;
    if (query.exec("SELECT SIGNAL FROM VOITURES WHERE SIGNAL = 1")) {
        if (query.next()) {
            qDebug() << "Signal received from database";
            emit signalReceived();
        }
    }
}

