#ifndef TOPICONELEVELSWINDOW_H
#define TOPICONELEVELSWINDOW_H

#include <QWidget>
#include <TopicOneLevelOne.h>

namespace Ui {
class TopicOneLevelsWindow;
}

class TopicOneLevelsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TopicOneLevelsWindow(QWidget *parent = 0);
    ~TopicOneLevelsWindow();

private slots:
    void on_BackButton_clicked();
    void on_Theory_clicked();
    void on_lvl1_clicked();

signals:
    void TopicsWindow();

private:
    Ui::TopicOneLevelsWindow *ui;
    TopicOneLevelOne *Topic1lvl1;
};

#endif // TOPICONELEVELSWINDOW_H
