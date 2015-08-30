#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tabWidget_currentChanged(int index);
    void on_btnPlayersMin_pressed();
    void on_btnPlayersPlus_pressed();

private:
    Ui::MainWindow *ui;
    int myNumPlayers;
};

#endif // MAINWINDOW_H
