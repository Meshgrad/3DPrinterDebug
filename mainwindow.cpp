#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serialPortSettings = new ComPortSettings();
    connect(ui->settings_button,&QPushButton::clicked,this,&MainWindow::openSettingsWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSettingsWindow()
{
    serialPortSettings->setModal(true);
    serialPortSettings->exec();
}


