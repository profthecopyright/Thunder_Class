#include "teachwindow.h"
#include "ui_teachwindow.h"

TeachWindow::TeachWindow(QtGUIAdaptor *w,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TeachWindow)
{
    ui->setupUi(this);
    this->guiAdaptor = w;
}

TeachWindow::~TeachWindow()
{
    delete ui;
}
