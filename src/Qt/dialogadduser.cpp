#include "dialogadduser.h"
#include "ui_dialogadduser.h"

DialogAddUser::DialogAddUser(QWidget* parent)
    : QDialog(parent), ui(new Ui::DialogAddUser)
{
    ui->setupUi(this);
    this->parent = parent;
}

DialogAddUser::~DialogAddUser()
{
    delete ui;
}

void DialogAddUser::on_buttonBox_rejected()
{
    this->close();
}

void DialogAddUser::on_buttonBox_accepted()
{
}

void DialogAddUser::accept()
{
    QString id, name, password, role;
    id = this->ui->editId->text();
    name = this->ui->editName->text();
    password = this->ui->editPassword->text();
    role = this->ui->chooseRole->currentText();
    if (id.isEmpty()) {
        this->ui->editId->setFocus();
    }
    else if (name.isEmpty()) {
        this->ui->editName->setFocus();
    }
    else if (password.isEmpty()) {
        this->ui->editPassword->setFocus();
    }
    else {
        // TDOD:调用workflow来写文件
        return QDialog::accept();
    }
}
