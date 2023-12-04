
#include "arduino.h"
#include "qthread.h"

Arduino::Arduino()
{
    data = "";
    arduino_port_name = "";
    arduino_is_available = false;
    serial = new QSerialPort;
}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort* Arduino::getserial()
{
    return serial;
}
int Arduino::connect_arduino(const QString &portName)
{
    if (serial->isOpen()) {
        serial->close();
        serial->setBaudRate(QSerialPort::Baud9600);
        QThread::msleep(1000); // Add a delay after closing the port
    }

    arduino_port_name = portName;
    serial->setPortName(arduino_port_name);

    if (serial->open(QSerialPort::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        QThread::msleep(1000); // Adjust the delay time as needed

        return 0;
    } else {
        qDebug() << "Failed to open serial port:" << serial->errorString();
        return 1;
    }
}


int Arduino::close_arduino()
{
    if (serial->isOpen()) {
        serial->close();
        return 0;
    }
    return 1;
}
/*
QByteArray Arduino::read_from_arduino()
{
    if(serial->isReadable()){
        data = serial->readAll();
        return data;
    }
    return QByteArray(); // Return an empty QByteArray if not readable
}
*/
QByteArray Arduino::read_from_arduino()
{
    if(serial->isReadable()){
        data = serial->readAll();
        // Remove unwanted characters, such as '\r' and '\n'

        return data.trimmed();
    }
    return QByteArray(); // Return an empty QByteArray if not readable
}



int Arduino::write_to_arduino(const QString &data) {
    QByteArray byteArray = data.toUtf8(); // Convert QString to QByteArray

    if (serial->isWritable()) {
        for (int i = 0; i < byteArray.length(); ++i) {
            serial->putChar(byteArray.at(i));
            serial->waitForBytesWritten(5000); // Wait for data to be written (adjust the timeout as needed)
        }
        return 0; // Success
    } else {
        qDebug() << "Couldn't write to serial!";
        return 1; // Failure
    }
}
