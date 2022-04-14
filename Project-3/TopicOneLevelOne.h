#ifndef TOPICONELEVELONE_H
#define TOPICONELEVELONE_H

#include <QWidget>

namespace Ui {
class TopicOneLevelOne;
}

class TopicOneLevelOne : public QWidget
{
    Q_OBJECT

public:
    explicit TopicOneLevelOne(QWidget *parent = nullptr);
    ~TopicOneLevelOne();

signals:
    void LevelsTopic1();

private slots:
    void on_BackButton_clicked();

private:
    Ui::TopicOneLevelOne *ui;
};

#endif // TOPICONELEVELONE_H
