#ifndef TOPICONELEVELTWO_H
#define TOPICONELEVELTWO_H

#include <QWidget>

namespace Ui {
class TopicOneLevelTwo;
}

class TopicOneLevelTwo : public QWidget
{
    Q_OBJECT

public:
    explicit TopicOneLevelTwo(QWidget *parent = nullptr);
    ~TopicOneLevelTwo();

private:
    Ui::TopicOneLevelTwo *ui;
};

#endif // TOPICONELEVELTWO_H
