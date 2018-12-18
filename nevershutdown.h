#ifndef NEVERSHUTDOWN_H
#define NEVERSHUTDOWN_H

#include <QMainWindow>
#include <windows.h>
namespace Ui {
class NeverShutdown;
}

class NeverShutdown : public QMainWindow
{
    Q_OBJECT

public:
    explicit NeverShutdown(QWidget *parent = 0);
    ~NeverShutdown();

private:
    Ui::NeverShutdown *ui;
};

#endif // NEVERSHUTDOWN_H
