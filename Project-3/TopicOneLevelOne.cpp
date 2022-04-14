#include "TopicOneLevelOne.h"
#include "ui_TopicOneLevelOne.h"

TopicOneLevelOne::TopicOneLevelOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopicOneLevelOne)
{
    ui->setupUi(this);
    QPixmap pix(":/img/Pic/Pictare.jpg");
    QSize PicSize(100, 100);

    ui->pic->setPixmap(pix);
    ui->pic->repaint();
    pix = pix.scaled(PicSize,Qt::KeepAspectRatio);
}

TopicOneLevelOne::~TopicOneLevelOne()
{
    delete ui;
}

void TopicOneLevelOne::on_BackButton_clicked()
{
    this->close();
    emit LevelsTopic1();
}
