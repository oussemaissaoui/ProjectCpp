/********************************************************************************
** Form generated from reading UI file 'rh.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RH_H
#define UI_RH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rh
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_CRUD;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *rh)
    {
        if (rh->objectName().isEmpty())
            rh->setObjectName(QStringLiteral("rh"));
        rh->resize(1200, 600);
        rh->setMinimumSize(QSize(1200, 600));
        rh->setMaximumSize(QSize(1200, 600));
        centralwidget = new QWidget(rh);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral("border:none;"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1165, 582));
        pushButton_CRUD = new QPushButton(scrollAreaWidgetContents);
        pushButton_CRUD->setObjectName(QStringLiteral("pushButton_CRUD"));
        pushButton_CRUD->setGeometry(QRect(120, 230, 225, 150));
        pushButton_CRUD->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 5px solid black;\n"
"	border-radius:15px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/crud.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_CRUD->setIcon(icon);
        pushButton_CRUD->setIconSize(QSize(215, 150));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(535, 33, 131, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/alleco.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 180, 241, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        rh->setCentralWidget(centralwidget);

        retranslateUi(rh);

        QMetaObject::connectSlotsByName(rh);
    } // setupUi

    void retranslateUi(QMainWindow *rh)
    {
        rh->setWindowTitle(QApplication::translate("rh", "Gestion_RH", Q_NULLPTR));
        pushButton_CRUD->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("rh", "Privilege Available", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rh: public Ui_rh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RH_H
