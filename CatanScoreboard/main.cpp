#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //set name, organisation and url here, for settings objects
    a.setApplicationName("Catan Score Board");
    MainWindow w;
    w.show();

    return a.exec();
}
