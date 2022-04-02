#include "mainwindow.h"
#include "ui_menu.h"

Menu::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/png/img/Menu.png");
    int w
}
