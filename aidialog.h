#ifndef AIDIALOG_H
#define AIDIALOG_H

#include <QDialog>

namespace Ui {
class AIDIALOG;
}

class AIDIALOG : public QDialog
{
    Q_OBJECT

public:
    explicit AIDIALOG(QWidget *parent = nullptr);
    ~AIDIALOG();
    void typeText(const QString& text, int delay);
    void simulateChat(const QString& cleanedText);
    QString readTextFromFile(const QString& filePath);



private slots:
    void on_pushButton_clicked();

private:
    Ui::AIDIALOG *ui;
};


#endif // AIDIALOG_H
