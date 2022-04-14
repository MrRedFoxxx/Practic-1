#ifndef TOPICWINDOW_H
#define TOPICWINDOW_H

#include <QWidget>
#include <TopicOneLevelsWindow.h>

namespace Ui {
class TopicsWindow;
}

class TopicsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TopicsWindow(QWidget *parent = nullptr);
    ~TopicsWindow();

signals:
    void firstWindow();

private slots:
    void on_BackButton_clicked();
    void on_Topic1Button_clicked();

private:
    Ui::TopicsWindow *ui;
    TopicOneLevelsWindow *Levels1;
};

#endif // TOPICWINDOW_H
