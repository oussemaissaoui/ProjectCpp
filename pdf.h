#ifndef PDF_H
#define PDF_H

#include <QDialog>
#include <QPdfWriter>
#include <QPainter>


namespace Ui {
class pdf;
}

class pdf : public QDialog
{
    Q_OBJECT

public:
    explicit pdf(QWidget *parent = nullptr);
    ~pdf();
    bool generatePDF(const QString &filePath);

private slots:
    void on_pushButton_genpdf_clicked();

private:
    Ui::pdf *ui;
};

#endif // PDF_H
