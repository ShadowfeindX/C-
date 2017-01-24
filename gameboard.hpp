#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

#include <QWidget>
#include <QPushButton>

namespace Ui {
class GameBoard;
}

class GameBoard : public QWidget
{
    Q_OBJECT

public:
    explicit GameBoard(QWidget *parent = 0);
    QString grid[3][3];
    ~GameBoard();

private slots:
    void end();
    void change_player();
    bool select_field(QPushButton*);
    void check_status(int,int,QString);
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

private:
    Ui::GameBoard *ui;
};

#endif // GAMEBOARD_HPP
