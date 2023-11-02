#include "connection.h"

Connection::Connection(){}

bool Connection::createconnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test=false;
    db.setDatabaseName("Source_Project2A");
    db.setUserName("rayenn");
    db.setPassword("123123");
    
    if (db.open()) 
        test=true;
    
    return test;
}

void Connection::closeConnection(){db.close();}
