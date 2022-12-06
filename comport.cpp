#include "comport.h"
#include <QSerialPortInfo>

ComPort::ComPort(QObject *parent) :QObject(parent)
{
    serialPort = new QSerialPort();
}

ComPort::~ComPort(){

}

void ComPort::sendCommand(QByteArray *arr)
{
    serialPort->write(*arr);
}

QStringList ComPort::availablePorts()
{
   auto ports = QSerialPortInfo::availablePorts();
   QStringList list;
   for(const auto& port: ports){
       if(!port.isBusy())
           list << port.portName();
   }
   return list;
}

bool ComPort::slotEditConnectionState(SerialPort::Port port)
{
    serialPort->setPortName(port.name);
    serialPort->setBaudRate(port.baudeRate);
    serialPort->setDataBits(port.dataBits);
    serialPort->setStopBits(port.stopBits);
    serialPort->setParity(port.parity);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    bool flag = serialPort->open(port.openMode);

    return flag;
}
