#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

db.setDatabaseName("Source_Project2A");
db.setUserName("rayenn");
db.setPassword("123123");

if (db.open())
test=true;





    return  test;
}
