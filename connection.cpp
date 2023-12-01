#include "connection.h"
Connection::Connection()
{}

bool Connection::createconnect()
{
    bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("BD_ALLEco");
db.setUserName("ALLEco");//inserer nom de l'utilisateur
db.setPassword("deepcode");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
