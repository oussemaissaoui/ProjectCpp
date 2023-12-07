/********************************************************************************
** Form generated from reading UI file 'stat_vehi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_VEHI_H
#define UI_STAT_VEHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stat_vehi
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *stat_vehi)
    {
        if (stat_vehi->objectName().isEmpty())
            stat_vehi->setObjectName(QStringLiteral("stat_vehi"));
        stat_vehi->resize(498, 356);
        verticalLayoutWidget = new QWidget(stat_vehi);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 40, 361, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(stat_vehi);

        QMetaObject::connectSlotsByName(stat_vehi);
    } // setupUi

    void retranslateUi(QDialog *stat_vehi)
    {
        stat_vehi->setWindowTitle(QApplication::translate("stat_vehi", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stat_vehi: public Ui_stat_vehi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_VEHI_H
