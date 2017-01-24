#ifndef DAYS_HPP
#define DAYS_HPP

#include <QWidget>

namespace Ui {
class Days;
}

class Days : public QWidget
{
    Q_OBJECT

public:
    explicit Days(QWidget *parent = 0);
    int current = 0;
    QString days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    ~Days();

private slots:
    void on_mode1_clicked();
    void on_mode2_clicked();
    void on_next_clicked();
    void on_previous_clicked();
    void on_go_clicked();

private:
    Ui::Days *ui;
};

#endif // DAYS_HPP
