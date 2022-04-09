#ifndef EXIT_H
#define EXIT_H

#include <QWidget>

namespace Ui {
class Exit;
}

class Exit : public QWidget
{
    Q_OBJECT

public:
    explicit Exit(QWidget *parent = nullptr);
    ~Exit();

private:
    Ui::Exit *ui;
};

#endif // EXIT_H
