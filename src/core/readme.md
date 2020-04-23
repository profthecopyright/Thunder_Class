## 核心类说明
请把核心类放到本文件夹中。<br/>
**请勿**把 GUI 类放到本文件夹中。

# "corelink.h"
在核心类中引用这个头文件，即可创建 Workflow 业务流程类指针。<br/>
无法在核心类中创建新的业务流程类对象。<br/>

# CSVio
这个类用来读写csv文件。

### bool CSVio::read(std::string dir)
从指定路径读取文件。如果读取成功则返回true，并将结果存储到 ReadCSV::table 中。

### std::vector<std::vector<std::string>> CSVio::getTable()
获取读取到的内容，返回 std::string 的嵌套 std::vector

# LoginBot
这个类用来管理登录信息，尚未写完

### LoginBot(Workflow *workflow)
唯一构造函数。<br/>
LoginBot 的对象应当在业务流程类中创建，并在创建时传入业务流程类对象指针。

### int LoginBot::onLogin(std::string name, std::string password)
在点击登录的时候被调用，返回值应当告知工作流程类应当采取什么操作。（暂未完成）

### ReadCSV LoginBot::getDefaultCSV()
这个函数返回一个 ReadCSV 对象。<br/>
这个 ReadCSV 对象在 LoginBot 构造之时就会默认读取 "adminList.csv"<br/>
当然，也可以调用 LoginBot::getDefaultCSV.read(dir) 来重新加载其他的 csv 文件。<br/>
