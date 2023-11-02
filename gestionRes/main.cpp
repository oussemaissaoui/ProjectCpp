#include "mainwindow.h"
#include "reservation.h"
#include "connection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    MainWindow w;
    bool test=c.createconnect();
    if (test)
    {
        w.show();
        QMessageBox::information(nullptr,QObject::tr("data base is open"),QObject::tr("connection successeful\nClick Cancel to exit"),QMessageBox::Cancel);
    }
    else
        QMessageBox::information(nullptr,QObject::tr("data base is not open"),QObject::tr("connection failed \nClick Cancel to exit"),QMessageBox::Cancel);

    return a.exec();
}
