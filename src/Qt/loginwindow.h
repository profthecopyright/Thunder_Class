#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class QtWorkflow;
class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QtWorkflow *, QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginWindow *ui;
    QtWorkflow *workflow;
};
#endif // LOGINWINDOW_H
