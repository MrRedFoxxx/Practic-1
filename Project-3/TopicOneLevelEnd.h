#ifndef TOPICONELEVELEND_H
#define TOPICONELEVELEND_H

#include <QWidget>

namespace Ui {
class TopicOneLevelEnd;
}

class TopicOneLevelEnd : public QWidget
{
    Q_OBJECT

public:
    explicit TopicOneLevelEnd(QWidget *parent = nullptr);
    ~TopicOneLevelEnd();

private:
    Ui::TopicOneLevelEnd *ui;
};

#endif // TOPICONELEVELEND_H
