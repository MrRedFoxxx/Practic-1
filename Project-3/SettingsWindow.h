#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QWidget>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

signals:
    void firstWindow();

private slots:
    void on_MusicOff_clicked();
    void on_MusicOn_clicked();
    void on_VoiceOff_clicked();
    void on_VoiceOn_clicked();
    void on_SoundOff_clicked();
    void on_SoundOn_clicked();
    void on_ExitButton_2_clicked();

private:
    Ui::SettingsWindow *ui;
    QMediaPlayer *player;
    QAudioOutput *AudioOutput;
};

#endif // SETTINGSWINDOW_H
