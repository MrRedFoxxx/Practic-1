#include "TopicWindow.h"
#include "ui_TopicWindow.h"

TopicsWindow::TopicsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopicsWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/Pic/Pictare.jpg");
    QSize PicSize(100, 100);

    ui->Pic->setPixmap(pix);
    ui->Pic->repaint();
    pix = pix.scaled(PicSize,Qt::KeepAspectRatio);

    Levels1 = new TopicOneLevelsWindow();
    connect(Levels1, &TopicOneLevelsWindow::TopicsWindow, this, &TopicsWindow::show);
}

TopicsWindow::~TopicsWindow()
{
    delete ui;
}

void TopicsWindow::on_BackButton_clicked()
{
    this->close();
    emit firstWindow();
}

void TopicsWindow::on_Topic1Button_clicked()
{
    Levels1->show();
    this->close();
}
