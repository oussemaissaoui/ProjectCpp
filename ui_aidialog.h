/********************************************************************************
** Form generated from reading UI file 'aidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIDIALOG_H
#define UI_AIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AIDIALOG
{
public:

    void setupUi(QDialog *AIDIALOG)
    {
        if (AIDIALOG->objectName().isEmpty())
            AIDIALOG->setObjectName(QStringLiteral("AIDIALOG"));
        AIDIALOG->resize(1000, 650);

        retranslateUi(AIDIALOG);

        QMetaObject::connectSlotsByName(AIDIALOG);
    } // setupUi

    void retranslateUi(QDialog *AIDIALOG)
    {
        AIDIALOG->setWindowTitle(QApplication::translate("AIDIALOG", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AIDIALOG: public Ui_AIDIALOG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIDIALOG_H
