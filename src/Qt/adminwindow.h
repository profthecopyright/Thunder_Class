/***************************************************************
【文件名】          adminwindow.h
【功能模块和目的】   管理员窗口
【开发者及日期】     cnDengyu, 2020/04/29
【更改记录】        (若修改过则必需注明)
****************************************************************/

#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class AdminWindow;
}

/***************************************************************
【类名】            (必需)
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/

class QtGUIAdaptor;
class DialogAddUser;
class AdminWindow: public QMainWindow {
    Q_OBJECT

  public:
    explicit AdminWindow(QtGUIAdaptor*, QWidget* parent = nullptr);
    ~AdminWindow();
    void tableAddItem(QString, QString, QString, QString);
    void loadList(std::vector<std::vector<std::string>>);

  private slots:
    void on_pushButton_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_sav_clicked();

  public:
    std::vector<std::vector<std::string>> table;

  private:
    Ui::AdminWindow* ui;
    QtGUIAdaptor* guiAdaptor;
    DialogAddUser* dialAdd;
};

#endif // ADMINWINDOW_H
