#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class QtGUIAdaptor;
class LoginWindow : public QMainWindow
{
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
