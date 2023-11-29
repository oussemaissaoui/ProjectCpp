#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QDebug>
#include <QMessageBox>
#include "statistiques.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();
    MainWindow w;

    if(test)
    {w.show();
        QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    /*QMainWindow window;
    ThemeWidget *widget = new ThemeWidget();
    window.setCentralWidget(widget);
    window.resize(900, 600);
    window.show();*/


    return a.exec();
}
