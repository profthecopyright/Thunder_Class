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

  private:
    Ui::AdminWindow* ui;
    QtGUIAdaptor* guiAdaptor;
    DialogAddUser* dialAdd;
};

#endif // ADMINWINDOW_H
