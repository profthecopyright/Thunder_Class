# Qt文件夹说明

### 内容
本文件夹内包含一个 Qt 业务流程类和众多 Qt GUI 类。<br/>
核心类请不要放到本文件夹中，应当放到/src/core

### 编译
把 Qt/ 和 core/ 内的所有 .h 文件和 .cpp 文件添加到 Qt 项目中，即可使用 Qmake 编译。<br/>
调试程序请留意把 core/adminList.csv 放到可执行文件同一目录。

### QtWorkflow (Qt业务流程类)说明
本文件夹内包含一个 QtWorkflow 业务流程类。
可以引用 core/corelink.h ，从而在核心类中以 Workflow 类的名义调用 QtWorkflow

### QtWorkflow (Qt业务流程类)的地位
1、主函数中只创造一个业务流程类对象。也就是说，一切从业务流程类的构造函数开始执行。<br/>
2、业务流程类可以调用界面类和核心类。<br/>
3、业务流程类创建界面类对象和核心类对象时，应传入业务流程类的指针。<br/>

# QtWorkflow 的回调函数

### void workflow.onLogin(std::string, std::string)
函数：点击登录按钮时的响应函数
参数：第一个 string 为输入的用户名，第二个 string 为输入的密码

# 调用 QtWorkflow

## 0、构造

###

### bool QtWorkflow::quitApplication()
退出程序

## 1、登录

### void QtWorkflow::showLoginWindow()
显示登录窗口

### bool QtWorkflow::closeLoginWindow()
关闭登录窗口

### void QtWorkflow::showClassroomWindow()
打开课室窗口（主界面）

### bool QtWorkflow::closeClassroomWindow()
关闭课室窗口（主界面）

## 3、管理员

### void QtWorkflow::addShowUsers(std::string, std::string, std::string);
添加管理员界面显示的条目

### void QtWorkflow::showAdminWindow()
显示管理员窗口

### bool QtWorkflow::.closeAdminWindow()
关闭管理员窗口
