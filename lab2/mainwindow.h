#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "events.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionAdd_event_triggered();
    void receiveData(QString name, QString probability);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_my_events_itemDoubleClicked(QListWidgetItem *item);

    void on_actionCards_2_triggered();

    void on_actionPoints_2_triggered();

    void on_actionInfo_cards_mode_triggered();

    void on_actionInfo_custom_mode_triggered();

private:
    void generate(int number_of_events);
    Ui::MainWindow *ui;
    events all_events;
    QString current_mode;
};
#endif // MAINWINDOW_H
