# Qt文件夹说明

### 内容
本文件夹内包含众多 Qt GUI 类。<br/>
核心类请不要放到本文件夹中，应当放到 core 中

### 编译
将 core basic qt 添加到项目<br/>
将 gui/qtguiadaptor.h gui/qtguiadaptor.cpp gui/guiadaptor.h gui/guiadaptor.cpp  添加到项目中

### QtGUIAdaptor 说明
QtGUIAdaptor  是抽象类 GUIAdaptor 的派生类，实现 GUIAdaptor 的所有接口。

### QtGUIAdaptor 的地位
1、主函数中只创造一个业务流程类对象。也就是说，一切从业务流程类的构造函数开始执行。<br/>
2、业务流程类可以调用界面类和核心类。<br/>
3、业务流程类创建界面类对象和核心类对象时，应传入业务流程类的指针。<br/>

# GUI 接口设计
## 程序开始

这里的程序开始指的是 QtGUIAdapter 开始执行构造函数。

创建 GUI 提供的 App 类的实例（Qt 上是 QApplication ）。
调用基类 GUIAdapter 的伪构造函数。

## 登录

在内部的 TaskExecutor 构造时，可能会向 GUI 发送“打开登录窗口”消息

登录窗口，除了 Label 之外包含输入用户名和密码的输入框和一个登录按钮。（下文省略对 Label 的分析，并不再明确指出）

用户点击登录按钮时，需要发送 onLogin 消息。需要传递输入的用户名和密码。

## 管理员

内部处理 onLogin 消息后，可能会向 GUI 发送“打开管理员窗口”的消息，传入用户列表数据。

管理员窗口包含一个用户列表，以及相应的新增、删除、修改、保存的按钮。
进行新增、删除、修改时，由 GUI 暂存修改的数据。
当点击保存按钮时，希望发送 onUserListChange 消息给内部，并传入新的用户列表。

## 学生端

内部处理 onLogin 消息后，可能会向 GUI 发送“打开学生端窗口”的消息。

打开学生端窗口之前，应当有一个填入 ip 地址的引导窗口。
这里希望发送设置服务端地址消息，并传入填写的 ip 地址。
onSetServerIP()

学生端窗口包括：

1. 一个视频显示控件。（可能用类似 Canvas 的控件，也可能利用 OpenGL ）

2. 一个开麦按钮和一个选择音频输入设备的下拉列表。
在这里希望发送:
打开麦克风的消息。
onStartAudioShare
关闭麦克风的消息
onCloseAudioShare
获取音频输入设备的消息，需要返回音频输入设备列表。
onRequireAudioInputDevices
选定音频输入设备的消息。
onSelectAudioInputDevice

3. 一个静音按钮和一个选择音频输出设备的下拉列表。
在这里希望发送：
开关静音的消息
onSetMute(bool)
获取音频输出设备的消息，需要返回音频输出设备列表。
onRequireAudioOutputDevices
选定音频输出设备的消息。
onSelectAudioOutputDevice

4. 学生端的答题控件（可考虑新开窗口实现，但可能造成窗口焦点变化）
在这里希望发送：
提交答案的消息，并传入作答数据。
onCommitAnswer

5. 非控件消息
希望发送：
窗口焦点变化的消息
onFocusChange(bool)

## 教师端

内部处理 onLogin 消息后，可能会向 GUI 发送“打开教师端窗口”的消息。

教师端进入时应当直接开麦，退出时再关麦，开关麦的按钮不是刚需。

教师端窗口包括：

1. 学生注意力显示控件

2. 出题控件和发送题目的按钮
这里希望发送发起做题的消息。
onRaiseTest

3. 提问的控件，包括随机点名和指定回答
这里希望发送
bool onAskStudent(void)
bool onAskStudent(Name)
传入点名数据，传回点名有效性

4. 麦克风管制按钮
这里希望发送
onMicControl(bool)

上面这些不一定要在同一窗口内。

## 程序运行

关闭窗口时，应当发送消息，让内部进行收尾工作
这里希望发送
onExit
