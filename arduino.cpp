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
        QThread::msleep(1000);
    }

    arduino_port_name = portName;
    serial->setPortName(arduino_port_name);

    if (serial->open(QSerialPort::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        QThread::msleep(1000);

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
QByteArray Arduino::read_from_arduino()
{
    if(serial->isReadable()){
        data = serial->readAll();
        return data;
    }
    return QByteArray();
}
QString Arduino::read_rfid_data()
{
    if (serial->isReadable()) {
        QByteArray data = read_from_arduino();
        return QString(data).trimmed();
    }
    return QString();
}
int Arduino::write_to_arduino(const QByteArray& data) {
    if (serial->isWritable()) {
        for (int i = 0; i < data.length(); ++i) {
            serial->putChar(data.at(i));
            serial->waitForBytesWritten(5000);
        }
        return 0;
    } else {
        qDebug() << "Couldn't write to serial!";
        return 1;
    }
}
