#include "loginwindow.h"
#include "../gui/qtguiadaptor.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QtGUIAdaptor* w, QWidget* parent)
    : QMainWindow(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->guiAdaptor = w;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    std::string username, password;
    username = this->ui->userName->text().toStdString();
    password = this->ui->userPassword->text().toStdString();
    this->guiAdaptor->onLogin(username, password);
}
