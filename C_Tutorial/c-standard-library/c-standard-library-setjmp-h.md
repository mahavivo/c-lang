# C 标准库 - <setjmp.h>

## 简介

setjmp.h 头文件定义了宏 setjmp()、函数 longjmp() 和变量类型 jmp_buf，该变量类型会绕过正常的函数调用和返回规则。

## 库变量

下面列出了头文件 setjmp.h 中定义的变量：

</p> <table > <tr><th style="width:5%">序号</th><th>变量 &amp; 描述</th></tr> <tr><td>1</td><td><b>jmp_buf </b><br />这是一个用于存储宏 <b>setjmp()</b> 和函数 <b>longjmp()</b> 相关信息的数组类型。</td></tr> </table> 

# 库宏

下面是这个库中定义的唯一的一个宏：

</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1</td><td><a href="setjmp.md">int setjmp(jmp_buf environment)</a><br />这个宏把当前环境保存在变量 <b>environment</b> 中，以便函数 <b>longjmp()</b> 后续使用。如果这个宏直接从宏调用中返回，则它会返回零，但是如果它从 <b>longjmp()</b> 函数调用中返回，则它会返回一个非零值。</td></tr> </table> 

# 库函数

下面是头文件 setjmp.h 中定义的唯一的一个函数：

</p> <table > <tr><th style="width:5%">序号</th><th>函数 &amp; 描述</th></tr> <tr><td>1</td><td><a href="longjmp.md">void longjmp(jmp_buf environment, int value)</a><br />该函数恢复最近一次调用 <b>setjmp()</b> 宏时保存的环境，<b>jmp_buf</b> 参数的设置是由之前调用 setjmp() 生成的。</td></tr> </table> 