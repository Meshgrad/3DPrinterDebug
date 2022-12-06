#include "comport.h"

ComPort::ComPort(QObject *parent) :QObject(parent)
{
    serialPort = new QSerialPort();
}

ComPort::~ComPort(){

}
