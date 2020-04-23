#include "loginwindow.h"
#include "qtworkflow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QtWorkflow *w, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->workflow = w;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    std::string username,password;
    username = this->ui->userName->text().toStdString();
    password = this->ui->userPassword->text().toStdString();
    this->workflow->onLogin(username, password);
}
