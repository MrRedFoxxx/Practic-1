#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ExitWindow.h>
#include <SettingsWindow.h>
#include <TopicWindow.h>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_ExitButton_clicked();
    void on_PlayButton_clicked();
    void on_SettingsButton_clicked();
    void on_TelegramButton_clicked();
    void on_YouTubeButton_clicked();

private:
    Ui::MainWindow *ui;
    Exit *sWindow;
    SettingsWindow *setWindow;
    TopicsWindow *topWindow;
    QMediaPlayer *player;
    QAudioOutput *AudioOutput;
};

#endif // MAINWINDOW_H
