## basic.lib子包：独立API与各种（第三方）基本算法封装

API：静态类，核心类。所有方法均为静态方法，可直接从外部调用。

OSAPIWrapper：特殊核心类，将操作系统API（包括Socket通信，音频及窗口捕获、麦克风控制、文件读写、获取系统时间等）与上层隔离。可能派生Mac和Win版本的子类。

VideoEncoder：核心类。图像/视频压缩算法。如JPEG用离散余弦变换（DCT）。也可考虑FFmpeg。

AudioEncoder：核心类。音频压缩算法。
