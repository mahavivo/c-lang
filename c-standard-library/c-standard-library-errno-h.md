# C 标准库 - <errno.h>

## 简介
C 标准库的 errno.h 头文件定义了整数变量 errno，它是通过系统调用设置的，在错误事件中的某些库函数表明了什么发生了错误。该宏扩展为类型为 int 的可更改的左值，因此它可以被一个程序读取和修改。

在程序启动时，errno 设置为零，C 标准库中的特定函数修改它的值为一些非零值以表示某些类型的错误。您也可以在适当的时候修改它的值或重置为零。

errno.h 头文件也顶了以一系列表示不同错误代码的宏，这些宏应扩展为类型为 int 的整数常量表达式。

## 库宏
下面列出了头文件 errno.h 中定义的宏：

</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1</td><td><a href="errno.md">extern int errno</a><br />这是通过系统调用设置的宏，在错误事件中的某些库函数表明了什么发生了错误。</td></tr> <tr><td>2</td><td><a href="endm.md">EDOM Domain Error</a><br />这个宏表示一个域错误，它在输入参数超出数学函数定义的域时发生，errno 被设置为 EDOM。</td></tr> <tr><td>3</td><td><a href="erange.md">ERANGE Range Error</a><br />这个宏表示一个范围错误，它在输入参数超出数学函数定义的范围时发生，errno 被设置为 ERANGE。</td></tr> </table> 