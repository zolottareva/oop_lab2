#ifndef NUMBER_OF_EVENTS_H
#define NUMBER_OF_EVENTS_H

#include <QDialog>

namespace Ui {
class number_of_events;
}

class number_of_events : public QDialog
{
    Q_OBJECT
signals:
    void sendData(int n);
public:
    explicit number_of_events(QWidget *parent = nullptr);
    ~number_of_events();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::number_of_events *ui;
};

#endif // NUMBER_OF_EVENTS_H
