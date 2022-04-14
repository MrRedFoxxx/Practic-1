#ifndef EXITWINDOW_H
#define EXITWINDOW_H

#include <QWidget>

namespace Ui {
class Exit;
}

class Exit : public QWidget
{
    Q_OBJECT

public:
    explicit Exit(QWidget *parent = 0);
    ~Exit();

signals:
    void firstWindow();

private slots:
    void on_NoButton_clicked();
    void on_YesButton_clicked();

private:
    Ui::Exit *ui;
};

#endif // EXITWINDOW_H
