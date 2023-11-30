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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pdf
{
public:
    QPushButton *pushButton_genpdf;
    QLineEdit *lineEdit_id;

    void setupUi(QDialog *pdf)
    {
        if (pdf->objectName().isEmpty())
            pdf->setObjectName(QStringLiteral("pdf"));
        pdf->resize(542, 398);
        pushButton_genpdf = new QPushButton(pdf);
        pushButton_genpdf->setObjectName(QStringLiteral("pushButton_genpdf"));
        pushButton_genpdf->setGeometry(QRect(220, 310, 80, 22));
        lineEdit_id = new QLineEdit(pdf);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(170, 270, 181, 21));

        retranslateUi(pdf);

        QMetaObject::connectSlotsByName(pdf);
    } // setupUi

    void retranslateUi(QDialog *pdf)
    {
        pdf->setWindowTitle(QApplication::translate("pdf", "Dialog", Q_NULLPTR));
        pushButton_genpdf->setText(QApplication::translate("pdf", "Generer pdf", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pdf: public Ui_pdf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDF_H
