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

    void on_toolButton_clicked();

    void on_toolButton_clicked(bool checked);

    void on_toolButton_pressed();

    void on_toolButton_released();

    void on_toolButton_toggled(bool checked);

    void on_toolButton_destroyed();

    void on_toolButton_destroyed(QObject *arg1);

    void on_toolButton_objectNameChanged(const QString &objectName);

    void on_toolButton_triggered(QAction *arg1);

    void on_toolButton_customContextMenuRequested(const QPoint &pos);

    void on_toolButton_windowIconTextChanged(const QString &iconText);

    void on_toolButton_windowTitleChanged(const QString &title);

private:
    Ui::MainWindow *ui;
    int myNumPlayers;
};

#endif // MAINWINDOW_H
