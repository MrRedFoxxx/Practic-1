#include "TopicOneLevelsWindow.h"
#include "ui_TopicOneLevelsWindow.h"
#include <QDesktopServices>

TopicOneLevelsWindow::TopicOneLevelsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopicOneLevelsWindow)
{
    ui->setupUi(this);
    Topic1lvl1 = new TopicOneLevelOne();
    connect(Topic1lvl1, &TopicOneLevelOne::LevelsTopic1, this, &TopicOneLevelsWindow::show);

    QPixmap pix(":/img/Pic/Pictare.jpg");
    QSize PicSize(100, 100);

    ui->Pic->setPixmap(pix);
    ui->Pic->repaint();
    pix = pix.scaled(PicSize,Qt::KeepAspectRatio);
}

TopicOneLevelsWindow::~TopicOneLevelsWindow()
{
    delete ui;
}

void TopicOneLevelsWindow::on_BackButton_clicked()
{
    this->close();
    emit TopicsWindow();
}

void TopicOneLevelsWindow::on_Theory_clicked()
{
    QDesktopServices::openUrl(QUrl("https://youtu.be/Kx3YyAkGYx8"));
}

void TopicOneLevelsWindow::on_lvl1_clicked()
{
    Topic1lvl1->show();
    this->close();
}
