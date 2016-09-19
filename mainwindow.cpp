#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QKeyEvent>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::send_help()
{
    QMessageBox::information(this,"Help","Created by: ShadowfeindX");
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QString s = QString::fromStdString(std::to_string(event->key()));

    switch (event->key())
    {
        case Qt::Key_1:
            purchase();
            break;
        case Qt::Key_A:
            check_sales();
            break;
        case Qt::Key_H:
            send_help();
            break;
        case Qt::Key_X:
            close();
            break;
        default:
            QMessageBox::critical(this,"Error","Invalid Key: "+s);
    }
}

void MainWindow::on_label_clicked()
{
    purchase();
}

void MainWindow::on_label_2_clicked()
{
    check_sales();
}

void MainWindow::on_label_3_clicked()
{
    send_help();
}

void MainWindow::on_label_4_clicked()
{
    close();
}
