#include "aidialog.h"
#include "ui_aidialog.h"
#include <iostream>
#include <fstream>
#include <QString>
#include <QDebug>
#include <string>
#include <QProcess>
#include <chrono>
#include <thread>
#include <cstdlib>  // for rand() and srand()
#include <ctime>
#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <cstdlib>


using namespace std;

AIDIALOG::AIDIALOG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AIDIALOG)
{
    ui->setupUi(this);
}

AIDIALOG::~AIDIALOG()
{
    delete ui;
}

void AIDIALOG::typeText(const QString& text, int delay)
{
    for (QChar c : text)
    {
        ui->textEdit_2->insertPlainText(QString(c));  // Directly use QString
        QCoreApplication::processEvents();  // Process events to update the GUI
        QThread::msleep(delay);
    }
}
/*QString AIDIALOG::readTextFromFile(const QString& filePath) {
        QString content;

        // Open the file for reading
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // Create a QTextStream to read from the file
            QTextStream stream(&file);

            // Read the entire content of the file into the QString
            content = stream.readAll();

            // Close the file
            file.close();
            qDebug() << "Text successfully read from file.";
        } else {
            qDebug() << "Error opening the file for reading.";
        }

        return content;
    }*/

QString AIDIALOG::readTextFromFile(const QString& filePath) {
    QString content;

    // Open the file for reading
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Create a QTextStream to read from the file and set the codec to UTF-8
        QTextStream stream(&file);
        stream.setCodec("UTF-8");

        // Read the entire content of the file into the QString
        content = stream.readAll();

        // Close the file
        file.close();
        qDebug() << "Text successfully read from file.";
    } else {
        qDebug() << "Error opening the file for reading.";
    }

    return content;
}





/*void AIDIALOG::typeText(const QString& text, int delay)
{
    for (QChar c : text)
    {
        ui->textEdit_2->insertPlainText(c);
        QCoreApplication::processEvents();  // Process events to update the GUI
        QThread::msleep(delay);
    }
}*/

void AIDIALOG::simulateChat(const QString& chatContent)
{
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    QTextStream in(chatContent.toUtf8());  // Convert QString to QTextStream

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (!line.isEmpty()) {
            // Print "ChatGPT: " to QTextEdit
            typeText("ChatGPT: ", 25);

            // Introduce randomness in the number of letters typed at a time (between 1 and 3)
            int numLetters = rand() % 3 + 1;

            // Type a random number of letters at a time
            for (int i = 0; i < line.size(); i += numLetters) {
                typeText(line.mid(i, numLetters), 25);
            }

            // Add a newline to QTextEdit
            ui->textEdit_2->insertPlainText("\n");

            // Process events to update the GUI
            QCoreApplication::processEvents();

            // Adjust the delay as needed
            QThread::msleep(1000);
        }
    }
}


void AIDIALOG::on_pushButton_clicked()
{
    QString request = "Answer to my question in " +
                      ui->comboBox_Language->currentText() +
                      " , length Text is " +
                      ui->comboBox_Length->currentText() +
                      " , conversation mode is " +
                      ui->comboBox_mode->currentText() +
                      " , styles of text is " +
                      ui->comboBox_Style->currentText() +
                      " . So My question is : " +
                      ui->lineEdit_question->text();
//to be modified

    string filePath = "C:/Project2A/output.txt";


    // Open the file in std::ofstream (output file stream) mode
    ofstream outFile(filePath);

    if (outFile.is_open()) {
        // Write the QString text to the file
        outFile << request.toStdString();

        // Close the file
        outFile.close();

        qDebug() << "Text successfully written to file.";
    } else {
        qDebug() << "Error opening the file for writing.";
    }


    //to be modified
    const char* command = R"(C:\Project2A\curltest.exe)";

        int result = std::system(command);


        if (result == 0) {
            std::cout << "Command executed successfully.\n";
        } else {
            std::cerr << "Error executing command. Exit code: " << result << '\n';

        }


        std::ifstream inputFile("C:/Project2A/response.txt");

            // Check if the file is open
            if (!inputFile.is_open()) {
                std::cerr << "Error opening the file.\n";
            }

            // Read the file line by line
            std::string line;
            while (std::getline(inputFile, line)) {
                // Process each line as needed
                std::cout << line << '\n';
            }

            // Close the file
            inputFile.close();









     QThread::msleep(500);
     //to be modified




    QString cleaned_Text= readTextFromFile("C:/Project2A/response.txt");
    cleaned_Text.replace("\\n", " ");
    cleaned_Text.replace("\"", "'");
    cleaned_Text.replace("\n", "");
    cleaned_Text.replace("é","e");
    cleaned_Text.replace("è","e");
    cleaned_Text.replace("á", "a");
    cleaned_Text.replace("à", "a");
    cleaned_Text.replace("í", "i");
    cleaned_Text.replace("ó", "o");
    cleaned_Text.replace("ú", "u");
    cleaned_Text.replace("ý", "y");
    cleaned_Text.replace("â", "a");
    cleaned_Text.replace("ê", "e");
    cleaned_Text.replace("î", "i");
    cleaned_Text.replace("ô", "o");
    cleaned_Text.replace("û", "u");
    cleaned_Text.replace("ë", "e");
    cleaned_Text.replace("ï", "i");
    cleaned_Text.replace("ü", "u");
    cleaned_Text.replace("ÿ", "y");
    cleaned_Text.replace("æ", "ae");
    cleaned_Text.replace("œ", "oe");
    cleaned_Text.replace("ß", "ss");
    cleaned_Text.replace("ñ", "n");
    cleaned_Text.replace("ø", "o");
    cleaned_Text.replace("å", "a");
    cleaned_Text.replace("ã", "a");
    cleaned_Text.replace("õ", "o");






    qDebug() << "File content:\n" << cleaned_Text;

    simulateChat(cleaned_Text);






}
