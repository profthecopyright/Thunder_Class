/***************************************************************
【文件名】          adminwindow.cpp
【功能模块和目的】   管理员窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#include "adminwindow.h"
#include "../gui/qtguiadaptor.h"
#include "dialogadduser.h"
#include "ui_adminwindow.h"
#include <QMessageBox>
#include <iostream>

/***************************************************************
【函数名称】         构造函数
【函数功能】         设置guiAdaptor指针
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
AdminWindow::AdminWindow(QtGUIAdaptor* w, QWidget* parent)
    : QMainWindow(parent), ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    this->guiAdaptor = w;
    this->dialAdd = new DialogAddUser(this);
}
/***************************************************************
【函数名称】         析构函数
【函数功能】         销毁子窗口
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
AdminWindow::~AdminWindow()
{
    delete this->dialAdd;
    delete ui;
}
/***************************************************************
【函数名称】         表格添加条目
【函数功能】         在表格中添加显示一条用户信息
【参数】             传入参数，用户信息
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void AdminWindow::tableAddItem(QString id, QString name, QString password,
                               QString role)
{
    int rowCount = ui->tableWidget->rowCount();
    this->ui->tableWidget->insertRow(rowCount);
    this->ui->tableWidget->setItem(rowCount, 0, new QTableWidgetItem(id));
    this->ui->tableWidget->setItem(rowCount, 1, new QTableWidgetItem(name));
    this->ui->tableWidget->setItem(rowCount, 2, new QTableWidgetItem(password));
    this->ui->tableWidget->setItem(rowCount, 3, new QTableWidgetItem(role));
}
/***************************************************************
【函数名称】         加载列表
【函数功能】         接收用户列表并显示
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void AdminWindow::loadList(std::vector<std::vector<std::string>> table)
{
    this->table = table;
    for (auto iter = table.begin(); iter != table.end(); iter++) {
        try {
            this->tableAddItem(QString::fromStdString(iter->at(0)),
                               QString::fromStdString(iter->at(1)),
                               QString::fromStdString(iter->at(2)),
                               QString::fromStdString(iter->at(3)));
        }
        catch (std::out_of_range& e) {
            std::cout << "这一行缺少所需字段：" << iter->at(0) << std::endl;
        }
    }
}
/***************************************************************
【函数名称】         点击添加按钮
【函数功能】         唤起添加用户对话框
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void AdminWindow::on_pushButton_clicked()
{
    this->dialAdd->show();
}
/***************************************************************
【函数名称】         点击删除按钮
【函数功能】         唤起对话框要求用户确认，然后删除对应行
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void AdminWindow::on_pushButton_del_clicked()
{
    QString info = "是否删除以下内容？\n";
    int i = this->ui->tableWidget->currentRow();
    QMessageBox msgBox;
    msgBox.setText("确认更改");
    msgBox.setInformativeText("是否执行更改：删除第" + QString::number(i + 1)
                              + "行");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();

    switch (ret) {
        case QMessageBox::Ok:
            this->ui->tableWidget->removeRow(i);
            // his->table.erase(this->table.begin() + i);
            break;
        case QMessageBox::Cancel:
            break;
    }
}
/***************************************************************
【函数名称】         点击保存按钮
【函数功能】         向内部发送更新列表消息
【参数】             无
【返回值】           无
【开发者及日期】      cnDengyu, 2020/04/29
【更改记录】         (若有修改，则必需注明)
****************************************************************/
void AdminWindow::on_pushButton_sav_clicked()
{
    this->table.clear();
    std::vector<std::string> item;
    for (int i = 0; i < this->ui->tableWidget->rowCount(); i++) {
        for (int j = 0; j < this->ui->tableWidget->columnCount(); j++) {
            item.push_back(
                this->ui->tableWidget->item(i, j)->text().toStdString());
        }
        this->table.push_back(item);
        item.clear();
    }
    /*
    for (auto iter = this->table.begin(); iter != this->table.end(); iter++) {
        std::cout << iter->at(0) << std::endl;
    }
    */
    this->guiAdaptor->onUserListChange(this->table);
}
