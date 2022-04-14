#include "ExitWindow.h"
#include "ui_ExitWindow.h"
#include <QPixmap>
#include <QSize>

Exit::Exit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Exit)
{
    ui->setupUi(this);
    QPixmap pix(":/img/Pic/Exit.jpg");
    QSize PicSize(100, 100);

    ui->PicExit->setPixmap(pix);
    ui->PicExit->repaint();
    pix = pix.scaled(PicSize,Qt::KeepAspectRatio);

    ui->YesButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->YesButton->setWindowOpacity(0.0);
    ui->YesButton->setStyleSheet("background-color: transparent;");

    ui->NoButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->NoButton->setWindowOpacity(0.0);
    ui->NoButton->setStyleSheet("background-color: transparent;");

}

Exit::~Exit()
{
    delete ui;
}

void Exit::on_NoButton_clicked()
{
    this->close();
    emit firstWindow();
}

void Exit::on_YesButton_clicked()
{
    this->close();
}
