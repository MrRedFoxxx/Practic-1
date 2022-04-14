#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QPixmap>
#include <QSize>
#include <QDesktopServices>
#include <QDir>
#include <QList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow = new Exit();
    connect(sWindow, &Exit::firstWindow, this, &MainWindow::show);

    setWindow = new SettingsWindow();
    connect(setWindow, &SettingsWindow::firstWindow, this, &MainWindow::show);

    topWindow = new TopicsWindow();
    connect(topWindow, &TopicsWindow::firstWindow, this, &MainWindow::show);

    player = new QMediaPlayer;
    AudioOutput = new QAudioOutput;
    player -> setAudioOutput(AudioOutput);
    player -> setSource(QUrl::fromLocalFile("qrc:/music/Music/Colorful Cat - Ambivalence.mp3"));
    AudioOutput -> setVolume(50);
    player -> play();

    QPixmap pix(":/img/Pic/Home.jpg");
    QSize PicSize(100, 100);

    ui->image->setPixmap(pix);
    ui->image->repaint();
    pix = pix.scaled(PicSize,Qt::KeepAspectRatio);

    ui->ExitButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->ExitButton->setWindowOpacity(0.0);
    ui->ExitButton->setStyleSheet("background-color: transparent;");

    ui->TelegramButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->TelegramButton->setWindowOpacity(0.0);
    ui->TelegramButton->setStyleSheet("background-color: transparent;");

    ui->YouTubeButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->YouTubeButton->setWindowOpacity(0.0);
    ui->YouTubeButton->setStyleSheet("background-color: transparent;");

    ui->PlayButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->PlayButton->setWindowOpacity(0.0);
    ui->PlayButton->setStyleSheet("background-color: transparent;");

    ui->SettingsButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->SettingsButton->setWindowOpacity(0.0);
    ui->SettingsButton->setStyleSheet("background-color: transparent;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitButton_clicked()
{
    sWindow->show();
    this->close();

}

void MainWindow::on_SettingsButton_clicked()
{
    setWindow->show();
    this->close();
}

void MainWindow::on_PlayButton_clicked()
{
    topWindow->show();
    this->close();
}

void MainWindow::on_TelegramButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://t.me/mr_red_foxxx"));
}

void MainWindow::on_YouTubeButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=dQw4w9WgXcQ"));
}
