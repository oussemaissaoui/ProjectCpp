#include "pdf.h"
#include "ui_pdf.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QFontMetrics>
#include <QPixmap>
#include <qDebug>
#include <QDate>
#include <QDateTime>
pdf::pdf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pdf)
{
    ui->setupUi(this);
}

pdf::~pdf()
{
    delete ui;
}

bool pdf::generatePDF(const QString &filePath) {


    QSqlQuery query;
    query.prepare("SELECT nom , prenom , telephone , cin , role , date_naissance FROM users WHERE id_user =:id");
    query.bindValue(":id",ui->lineEdit_id->text().toInt());
    QSqlQuery query2;
    query2.prepare("SELECT * FROM EMPLOYE WHERE ID_E = :id");
    query2.bindValue(":id", ui->lineEdit_id->text());
    query2.exec();

    if(query.exec() && query.next() && query2.exec() && query2.next())
{

    // Create a QPdfWriter and set its properties
    QPdfWriter pdfWriter(filePath);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));

    // Create a QPainter that will be used to draw on the PDF
    QPainter painter(&pdfWriter);


    // Set up font and other painter properties
    QFont font("Arial", 18);
    font.setBold(true);
    painter.setFont(font);
    painter.setPen(Qt::black);

    QString text = "carte identite d'employe";
    QFontMetrics fontMetrics(font);
    // Draw text on the PDF


    QRect textRect= fontMetrics.boundingRect(QRect(0, 0, 0, 0), Qt::AlignLeft, text);

    qDebug() << "Text Width:" << pdfWriter.width();
    qDebug() << "Text Height:" << pdfWriter.height();

    int x = (pdfWriter.width() - textRect.width()) / 2;
    int y = (pdfWriter.height() - textRect.height()) / 2;


    painter.drawText(250,2500, pdfWriter.width(), pdfWriter.height(), Qt::AlignHCenter , text);



    font.setFamily("Arial");
    font.setPointSize(12);
    painter.setFont(font);
    font.setBold(false);
    painter.setPen(Qt::black);

    QPixmap image(":/img/image/Logo_noir.png");

    int imageX = 100;
    int imageY = 150;
    int imageWidth = 2000;
    int imageHeight = 2000;
    painter.drawPixmap(imageX, imageY, image.scaled(imageWidth, imageHeight));

//left side

    text = "Nom et Prenom : " + (query.value(0).toString()+" "+query.value(1).toString());
    painter.drawText(250,3500, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

    text = "Date_naissance : " + ((query.value(5).toDate()).toString("yyyy-MM-dd"));
    painter.drawText(250,4200, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

    text = "Numero_Telephone : " + (query.value(2).toString());
    painter.drawText(250,4900, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

//right side
    text = "ID_User : " + (query.value(3).toString());
    painter.drawText(7000,3500, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

    text = "Role : " + query.value(4).toString();
    painter.drawText(7000,4200, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

    text = "Poste : " + (query2.value(1).toString());
    painter.drawText(7000,4900, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

    text = "Poste : " + (query2.value(1).toString());
    painter.drawText(7000,4900, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);

    QDateTime currentDate = QDateTime::currentDateTime();
    text = "Edité le  : " + currentDate.toString("yyyy-MM-dd hh:mm:ss");
    painter.drawText(6500,500, pdfWriter.width(), pdfWriter.height(), Qt::AlignLeft , text);




    // Finish the PDF
    painter.end();
    return true;
}
    else
    {
        QMessageBox::information(nullptr, "ERROR", "ID do not exist");
        return false;
    }
    return false;
}

void pdf::on_pushButton_genpdf_clicked()
{

    QString pdfFilePath = QFileDialog::getSaveFileName(nullptr, "Save PDF", "", "PDF Files (*.pdf)");

    if (pdfFilePath.isEmpty()) {
           QMessageBox::warning(nullptr, "Info", "PDF generation canceled.");

       }
   else
    {
        if(generatePDF(pdfFilePath))
            QMessageBox::information(nullptr, "Info", "PDF generation success.");
        else
            QMessageBox::critical(nullptr, "Info", "PDF generation Echec.");

    }


}
