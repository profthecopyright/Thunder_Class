#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "dialogadduser.h"

namespace Ui {
class AdminWindow;
}

class QtWorkflow;
class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QtWorkflow *, QWidget *parent = nullptr);
    ~AdminWindow();
    void tableAddItem(QString, QString, QString, QString);
    void loadList(std::vector<std::vector<std::string>>);

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdminWindow *ui;
    QtWorkflow *workflow;
    DialogAddUser *dialAdd;
};

#endif // ADMINWINDOW_H
