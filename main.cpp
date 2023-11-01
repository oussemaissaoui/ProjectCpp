#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include "rh.h"
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();
    


    MainWindow w_login;
    if(test)
    {w_login.show();

            QMessageBox::critical(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }

    else
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


    a.exec();

    if(w_login.get_login_status())
    {
    rh w_rh;
    w_rh.show();
    a.exec();
    }









    cout<<"application exec"<<endl;
    return 0;
}
