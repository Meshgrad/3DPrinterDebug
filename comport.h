#ifndef COMPORT_H
#define COMPORT_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QByteArray>
#include <QStringList>
#include <QSerialPort>

namespace SerialPort {
    struct Port{
        QString name;
        QSerialPort::BaudRate baudeRate;
        QSerialPort::DataBits dataBits;
        QSerialPort::StopBits stopBits;
        QSerialPort::Parity parity;
        QSerialPort::FlowControl flowControl;
        QIODevice::OpenModeFlag openMode;
    };
}

using namespace SerialPort;
class ComPort: public QObject
{
    Q_OBJECT
public:
    explicit ComPort(QObject *parent = nullptr);
    ~ComPort();
private:
    QSerialPort *serialPort;
    QByteArray data;
    void sendCommand(QByteArray *arr);
    QStringList availablePorts();
private slots:
    bool slotEditConnectionState(SerialPort::Port port);

};

#endif // COMPORT_H
