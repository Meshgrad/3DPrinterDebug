#ifndef COMPORTSETTINGS_H
#define COMPORTSETTINGS_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>


namespace Ui {
class ComPortSettings;
}

class ComPortSettings : public QDialog
{
    Q_OBJECT

public:
    explicit ComPortSettings(QWidget *parent = nullptr);
    ~ComPortSettings();

private:
    Ui::ComPortSettings *ui;
};

#endif // COMPORTSETTINGS_H
