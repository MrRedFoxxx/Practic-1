#include "TopicOneLevelEnd.h"
#include "ui_TopicOneLevelEnd.h"

TopicOneLevelEnd::TopicOneLevelEnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopicOneLevelEnd)
{
    ui->setupUi(this);
}

TopicOneLevelEnd::~TopicOneLevelEnd()
{
    delete ui;
}
