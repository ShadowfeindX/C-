#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void send_help();
    void keyPressEvent(QKeyEvent *event);
    void on_label_clicked();
    void on_label_2_clicked();
    void on_label_3_clicked();
    void on_label_4_clicked();

public slots:

signals:
    void purchase();
    void check_sales();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
