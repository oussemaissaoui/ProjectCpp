/********************************************************************************
** Form generated from reading UI file 'notification.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATION_H
#define UI_NOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_notification
{
public:
    QLabel *label_noti;

    void setupUi(QDialog *notification)
    {
        if (notification->objectName().isEmpty())
            notification->setObjectName(QStringLiteral("notification"));
        notification->resize(640, 480);
        notification->setStyleSheet(QString::fromUtf8("QDialog::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 8px;\n"
"  color: white;\n"
"  font-size: 20px; /* Taille de police augment\303\251e */\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"  background-color: #2CBB63;\n"
"  border-bottom: 2px solid #2CBB63; /* Bordure inf\303\251rieure verte */\n"
"  border-top: 2px solid #2CBB63; /* Bordure sup\303\251rieure verte */\n"
"  border-left: 2px solid #2CBB63; /* Bordure gauche verte */\n"
"  border-right: 2px solid #2CBB63; /* Bordure droite verte */\n"
"  border-bottom-right-radius: 5px; /* Coin inf\303\251rieur droit arrondi */\n"
"}"));
        label_noti = new QLabel(notification);
        label_noti->setObjectName(QStringLiteral("label_noti"));
        label_noti->setGeometry(QRect(120, 190, 401, 31));

        retranslateUi(notification);

        QMetaObject::connectSlotsByName(notification);
    } // setupUi

    void retranslateUi(QDialog *notification)
    {
        notification->setWindowTitle(QApplication::translate("notification", "Dialog", Q_NULLPTR));
        label_noti->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class notification: public Ui_notification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATION_H
