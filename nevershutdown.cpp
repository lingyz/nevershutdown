#include "nevershutdown.h"
#include "ui_nevershutdown.h"

NeverShutdown::NeverShutdown(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NeverShutdown)
{
    ui->setupUi(this);
    setWindowTitle("禁止关机");
    ::SetThreadExecutionState(ES_CONTINUOUS | ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED);
}

NeverShutdown::~NeverShutdown()
{
    delete ui;
}
