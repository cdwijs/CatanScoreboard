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
    void on_btnRankMin_pressed();

    void on_btnRankPlus_pressed();

    void on_btnPointsMin_pressed();

    void on_btnPointsPlus_pressed();

    void on_btnStreetsMin_pressed();

    void on_btnStreetsPlus_pressed();

    void on_btnKnightMin_pressed();

    void on_btnKnightPlus_pressed();

private:
    Ui::MainWindow *ui;
    int myNumPlayers;
    int myNumRank;
    int myPoints;
    int myStreets;
    int myKnights;
};

#endif // MAINWINDOW_H
