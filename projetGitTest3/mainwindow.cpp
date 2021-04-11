#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(this, SecondDisplay(),this,displayLabel2());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pressed()
{

    ui->label->setText("Button pressed");
    emit SecondDisplay();

}

void MainWindow::displayLabel2()
{
    ui->label_2->setText("Button pressed");
}
