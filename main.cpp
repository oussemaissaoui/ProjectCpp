#include<QMessageBox>
#include <QApplication>
#include"connection.h"
#include "dialog.h"
#include"Facture.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();
    Dialog w;
    if(test)
    {
       w.show();

       QMessageBox::information(nullptr, QObject::tr("database is open"),
       QObject::tr("connection successful.\n"
                   "click cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                              "click cancel to exit."),QMessageBox::Cancel);

    return a.exec();
}
