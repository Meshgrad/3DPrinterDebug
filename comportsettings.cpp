#include "comportsettings.h"
#include "ui_comportsettings.h"

ComPortSettings::ComPortSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComPortSettings)
{
    ui->setupUi(this);
}

ComPortSettings::~ComPortSettings()
{
    delete ui;
}
