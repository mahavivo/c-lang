# C 标准库 - <stdarg.h>

## 简介
stdarg.h 头文件定义了一个变量类型 va_list 和三个宏，这三个宏可用于在参数个数未知（即参数个数可变）时获取函数中的参数。

可变参数的函数通在参数列表的末尾是使用省略号(,...)定义的。

## 库变量
下面是头文件 stdarg.h 中定义的变量类型：

</p> <table > <tr><th style="width:5%">序号</th><th>变量 &amp; 描述</th></tr> <tr><td>1</td><td><b>va_list </b><br />这是一个适用于 <b>va_start()、va_arg()</b> 和 <b>va_end()</b> 这三个宏存储信息的类型。</td></tr> </table> 

## 库宏
下面是头文件 stdarg.h 中定义的宏：
</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1</td><td><a href="va_start.md">void va_start(va_list ap, last_arg)</a><br />这个宏初始化 <b>ap</b> 变量，它与 <b>va_arg</b> 和 <b>va_end</b> 宏是一起使用的。<b>last_arg</b> 是最后一个传递给函数的已知的固定参数，即省略号之前的参数。</td></tr> <tr><td>2</td><td><a href="va_arg.md">type va_arg(va_list ap, type)</a><br />这个宏检索函数参数列表中类型为 <b>type</b> 的下一个参数。</td></tr> <tr><td>3</td><td><a href="va_end.md">void va_end(va_list ap)</a><br />这个宏允许使用了 <b>va_start</b> 宏的带有可变参数的函数返回。如果在从函数返回之前没有调用 <b>va_end</b>，则结果为未定义。</td></tr> </table> 