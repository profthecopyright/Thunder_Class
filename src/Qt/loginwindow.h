#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui
{
class LoginWindow;
}
QT_END_NAMESPACE

class QtGUIAdaptor;

/***************************************************************
【类名】            (必需)
【功能】            (必需)
【接口说明】        (必需)
【开发者及日期】    (必需)
【更改记录】        (若修改过则必需注明)
****************************************************************/
class LoginWindow: public QMainWindow {
    Q_OBJECT

  public:
    LoginWindow(QtGUIAdaptor*, QWidget* parent = nullptr);
    ~LoginWindow();

  private slots:
    void on_loginButton_clicked();

  private:
    Ui::LoginWindow* ui;
    QtGUIAdaptor* guiAdaptor;
};
#endif // LOGINWINDOW_H
