## core包：业务流程控制及业务逻辑执行

TaskController: 抽象类，核心类，业务逻辑类。定义了对用户在GUI上的操作事件类型（抽象意义上）的响应机制。

TaskExecutor：核心类，实际业务逻辑类。TaskController的实现，具体响应用户操作，并（可能）指派各下级Executor类具体执行。Client Mode的功能主要包括发送登录、注意力、答题、语音消息，接收单选题、音视频、点名消息。
Server Mode的功能主要包括接收登录、注意力、答题、语音消息，发送单选题、音视频、点名消息，维护学生账户数据库（本地csv）、记录服务器日志（本地txt）等。

LoginAgent：负责登录验证相关功能（包括用户账户数据库信息维护）。

ConnectionAgent：负责处理端口连接，发送/接收数据，可__raise一个InternalEvent交由上级TaskExecutor处理。

ServerLogAgent：负责服务器日志记录。原则上收到任何Message以后可以直接调用它向日志文件中写一个记录。

DataAgent：负责serialize/deserialize，即实现内部数据格式（Data对象）和端口可以直接发送的字符串（字节流）之间的转换（可能用到压缩/解压缩算法）。
