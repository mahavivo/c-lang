# C 标准库 - <signal.h>

## 简介
signal.h 头文件定义了一个变量类型 sig_atomic_t、两个函数调用和一些宏来处理程序执行期间报告的不同信号。

## 库变量
下面是头文件 signal.h 中定义的变量类型：

</p> <table > <tr><th style="width:5%">序号</th><th>变量 &amp; 描述</th></tr> <tr><td>1</td><td><b>sig_atomic_t </b><br />这是 <b>int</b> 类型，在信号处理程序中作为变量使用。它是一个对象的整数类型，该对象可以作为一个原子实体访问，即使存在异步信号时，该对象可以作为一个原子实体访问。</td></tr> </table> 

## 库宏
下面是头文件 signal.h 中定义的宏，这些宏将在下列两个函数中使用。SIG_ 宏与 signal 函数一起使用来定义信号的功能。

</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1 </td><td><b>SIG_DFL</b><br />默认的信号处理程序。</td></tr> <tr><td>2 </td><td><b>SIG_ERR</b><br />表示一个信号错误。</td></tr> <tr><td>3 </td><td><b>SIG_IGN</b><br />忽视信号。</td></tr> </table> <p><b>SIG</b> 

宏用于表示以下各种条件的信号码：

</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1 </td><td><b>SIGABRT</b><br />程序异常终止。</td></tr> <tr><td>2 </td><td><b>SIGFPE</b><br />算术运算出错，如除数为 0 或溢出。</td></tr> <tr><td>3 </td><td><b>SIGILL</b><br />非法函数映象，如非法指令。</td></tr> <tr><td>4 </td><td><b>SIGINT</b><br />中断信号，如 ctrl-C。</td></tr> <tr><td>5 </td><td><b>SIGSEGV</b><br />非法访问存储器，如访问不存在的内存单元。</td></tr> <tr><td>6 </td><td><b>SIGTERM</b><br />发送给本程序的终止请求信号。</td></tr> </table> 

## 库函数
下面是头文件 signal.h 中定义的函数：

</p> <table > <tr><th style="width:5%">序号</th><th>函数 &amp; 描述</th></tr> <tr><td>1</td><td><a href="signal.md">void (*signal(int sig, void (*func)(int)))(int)</a><br />该函数设置一个函数来处理信号，即信号处理程序。</td></tr> <tr><td>2</td><td><a href="raise.md">int raise(int sig)</a><br />该函数会促使生成信号 <b>sig</b>。sig 参数与 SIG 宏兼容。</td></tr> </table> 