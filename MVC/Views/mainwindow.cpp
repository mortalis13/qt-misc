#include "Views/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setController(Controller& controller)
{
    m_controller=&controller;
}

void MainWindow::setText(QString text)
{
    ui->lineEdit->setText(text);
}

void MainWindow::buttonClicked(){
    m_controller->setText(text);
}
