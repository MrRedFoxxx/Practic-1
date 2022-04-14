#include "TopicOneLevelTwo.h"
#include "ui_TopicOneLevelTwo.h"

TopicOneLevelTwo::TopicOneLevelTwo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopicOneLevelTwo)
{
    ui->setupUi(this);
}

TopicOneLevelTwo::~TopicOneLevelTwo()
{
    delete ui;
}
