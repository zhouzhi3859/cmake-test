# cmake-test
####开发准备
安装clion \
官网下载cmake与mingw-w64-install.exe并安装。
参考文章[windows+CMake+mingw 搭建c c++开发环境](https://www.cnblogs.com/herelsp/p/8679200.html) \
mingw-w64安装时的选择配置参考[mingw w64 安装问题](https://zhidao.baidu.com/question/1382951261644564380.html)

####编译测试程序
平台默认编译过程
```bash
mkdir build
cd build
cmake .. // 默认平台编译,win下使用msvs,linux下使用gcc
// win下用vs打开进行build
// linux下
make
```
在win平台使用mingw-64
```bash
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
```
