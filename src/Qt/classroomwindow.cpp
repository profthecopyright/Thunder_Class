#include "classroomwindow.h"
#include "ui_classroomwindow.h"

ClassroomWindow::ClassroomWindow(QtWorkflow *w, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClassroomWindow)
{
    ui->setupUi(this);
    this->workflow = w;
}

ClassroomWindow::~ClassroomWindow()
{
    delete ui;
}
