## basic包：底层API、算法、各种通信数据结构定义

Data：核心类。定义单个程序内部不同模块之间的数据传输格式（基于原始类型，如未压缩的bitmap图像点阵等）

Message：核心类。定义单个程序内部不同模块之间的消息传输格式，包括数据消息与控制消息两种。数据消息如音频、视频、单选题等数据体量大的消息，其中包装了Data对象。控制消息包括点名、登录登出等。不同类型的消息由宏定义对应的消息码。

InternalEvent：核心类。定义两个方法：eventforGUI()为从核心逻辑TaskController传递给GUIAdaptor的、通常需要对图形用户界面作出响应/改变的控制事件，eventforCore()为从connectionAgent传递给TaskController的事件，一般发生在接收到端口传来的数据时由connectionAgent触发。

Status：核心类。记录程序的运行状态的数据结构（如是server mode还是client mode，当前所有连接的list，日志文件流对象等等）。

+ basic.lib子包：独立API与各种（第三方）基本算法封装

API：静态类，核心类。所有方法均为静态方法，可直接从外部调用。

OSAPIWrapper：特殊核心类，将操作系统API（包括Socket通信，音频及窗口捕获、麦克风控制、文件读写、获取系统时间等）与上层隔离。可能派生Mac和Win版本的子类。

VideoEncoder：核心类。图像/视频压缩算法。如JPEG用离散余弦变换（DCT）。也可考虑FFmpeg。

AudioEncoder：核心类。音频压缩算法。
