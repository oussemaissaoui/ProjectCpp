#include "arduino.h"
#include <QDebug>
Arduino::Arduino()
{
data="";
arduino_port_name="";
arduino_is_available=false;
serial=new  QSerialPort;
}
int Arduino:: connect_arduino()
{
    foreach(const QSerialPortInfo & serial_port_Info,QSerialPortInfo::availablePorts())//chercher les ports serie available
    {
        if (serial_port_Info.hasVendorIdentifier()&& serial_port_Info.hasProductIdentifier())//tester si serial trouve a un product_id et vendor_id
        {
if (serial_port_Info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_Info.hasProductIdentifier())            {
                arduino_is_available=true;
                arduino_port_name=serial_port_Info.portName();
            }
        }
    }
    qDebug()<<"arduino port name is :"<<arduino_port_name;
    if(arduino_is_available)
    {
        serial->setPortName(arduino_port_name);
        if (serial->open(QSerialPort::ReadWrite))
        {
            serial->setBaudRate(QSerialPort::Baud9600);
            serial->setDataBits(QSerialPort::Data8);
            serial->setParity(QSerialPort::NoParity);
             serial->setStopBits(QSerialPort::OneStop);
              serial->setFlowControl(QSerialPort::NoFlowControl);
              return 0;
        }
    }
    return 1;
}
int Arduino::close_arduino()
{
if (serial->isOpen())
{
    serial->close();
    return 0;
}
return -1;
}
int Arduino::write_to_arduino(QByteArray d)
{
    if(serial->isWritable())
    {
        serial->write(d);
    }
    else {
        qDebug()<< "couldn't write to serial!";
    }
}
QByteArray Arduino:: read_from_arduino()
{
    if(serial->waitForReadyRead(2000))
        data=serial->readAll();
    return data;
}
QSerialPort*Arduino:: getserial()
{
    return serial;
}
QString Arduino:: getarduino_port_name()
{
  return arduino_port_name;
}
