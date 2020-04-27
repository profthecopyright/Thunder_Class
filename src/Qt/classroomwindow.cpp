#include "classroomwindow.h"
#include "ui_classroomwindow.h"

ClassroomWindow::ClassroomWindow(QtGUIAdaptor* w, QWidget* parent)
    : QMainWindow(parent), ui(new Ui::ClassroomWindow)
{
    ui->setupUi(this);
    this->guiAdaptor = w;
}

ClassroomWindow::~ClassroomWindow()
{
    delete ui;
}
