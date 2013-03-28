#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "fcntl.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Total: 0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textEdit_textChanged()
{
    ui->statusBar->showMessage(QString("Total: %1").arg(ui->textEdit->toPlainText().length()));
}

void MainWindow::on_menu_n_triggered(bool checked)
{
    if(checked)
        ui->statusBar->showMessage(QString("Create"));
}

void MainWindow::on_menu_n_triggered()
{
    //open("new",O_CREAT|O_RDWR);
}

