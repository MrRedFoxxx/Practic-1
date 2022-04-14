#include "SettingsWindow.h"
#include "ui_SettingsWindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/img/Pic/Pictare.jpg");
    QSize PicSize(100, 100);

    ui->PictareSettings->setPixmap(pix);
    ui->PictareSettings->repaint();
    pix = pix.scaled(PicSize,Qt::KeepAspectRatio);

    ui->MusicOff->hide();
    ui->SoundOff->hide();
    ui->VoiceOff->hide();
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::on_SoundOn_clicked()
{
    ui->SoundOn->hide();
    ui->SoundOff->show();
}


void SettingsWindow::on_SoundOff_clicked()
{
    ui->SoundOff->hide();
    ui->SoundOn->show();
}

void SettingsWindow::on_MusicOn_clicked()
{
    ui->MusicOn->hide();
    ui->MusicOff->show();
}

void SettingsWindow::on_MusicOff_clicked()
{
    ui->MusicOff->hide();
    ui->MusicOn->show();

}

void SettingsWindow::on_VoiceOn_clicked()
{
    ui->VoiceOn->hide();
    ui->VoiceOff->show();
}

void SettingsWindow::on_VoiceOff_clicked()
{
    ui->VoiceOff->hide();
    ui->VoiceOn->show();
}

void SettingsWindow::on_ExitButton_2_clicked()
{
    this->close();
    emit firstWindow();
}
