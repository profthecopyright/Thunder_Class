#include "teachwindow.h"
#include "ui_teachwindow.h"

TeachWindow::TeachWindow(QtWorkflow *w,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TeachWindow)
{
    ui->setupUi(this);
    this->workflow = w;
}

TeachWindow::~TeachWindow()
{
    delete ui;
}
