#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class Arduino
{
public:
    Arduino();
    int connect_arduino(const QString &portName);
    int close_arduino();
    QByteArray read_from_arduino();
    int write_to_arduino(const QString &data);  // Change the parameter type here
    QSerialPort* getserial();
    QString getarduino_port_name();

private:
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;

    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;
    QSerialPort* serial;
};

#endif // ARDUINO_H
