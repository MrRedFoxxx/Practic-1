#include "mainwindow.h"

#include <QApplication>
#include <QPixmap>

centralwidget::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/png/img/Menu.png");
    int w
}
