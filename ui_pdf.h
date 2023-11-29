/********************************************************************************
** Form generated from reading UI file 'pdf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDF_H
#define UI_PDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_pdf
{
public:

    void setupUi(QDialog *pdf)
    {
        if (pdf->objectName().isEmpty())
            pdf->setObjectName(QStringLiteral("pdf"));
        pdf->resize(542, 398);

        retranslateUi(pdf);

        QMetaObject::connectSlotsByName(pdf);
    } // setupUi

    void retranslateUi(QDialog *pdf)
    {
        pdf->setWindowTitle(QApplication::translate("pdf", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pdf: public Ui_pdf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDF_H
