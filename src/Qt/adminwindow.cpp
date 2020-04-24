#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "dialogadduser.h"
#include <iostream>

AdminWindow::AdminWindow(QtWorkflow *w, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    this->workflow = w;
    this->dialAdd = new DialogAddUser(this);
}

AdminWindow::~AdminWindow()
{
    delete this->dialAdd;
    delete ui;
}

void AdminWindow::tableAddItem(QString id, QString name, QString password, QString role)
{
    int rowCount = ui->tableWidget->rowCount();
    this->ui->tableWidget->insertRow(rowCount);
    this->ui->tableWidget->setItem(rowCount, 0, new QTableWidgetItem(id));
    this->ui->tableWidget->setItem(rowCount, 1, new QTableWidgetItem(name));
    this->ui->tableWidget->setItem(rowCount, 2, new QTableWidgetItem(password));
    this->ui->tableWidget->setItem(rowCount, 3, new QTableWidgetItem(role));
}

void AdminWindow::loadList(std::vector<std::vector<std::string>> table)
{
    for(auto iter = table.begin(); iter != table.end(); iter++)
    {
        try {
            this->tableAddItem(QString::fromStdString(iter->at(0)),
                               QString::fromStdString(iter->at(1)),
                               QString::fromStdString(iter->at(2)),
                               QString::fromStdString(iter->at(3)));
        } catch (std::out_of_range &e) {
            std::cout<<"csv文件的这一行缺少所需字段："<<iter->at(0)<<std::endl;
        }
    }
}

void AdminWindow::on_pushButton_clicked()
{
    this->dialAdd->show();
}
