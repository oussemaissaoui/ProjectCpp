#include "connection.h"
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Project2A");
db.setUserName("oussema");//inserer nom de l'utilisateur
db.setPassword("0120120012");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
