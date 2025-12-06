# C 标准库 - <stddef.h>

## 简介
stddef .h 头文件定义了各种变量类型和宏。这些定义中的大部分也出现在其它头文件中。

## 库变量
下面是头文件 stddef.h 中定义的变量类型：

</p> <table > <tr><th style="width:5%">序号</th><th>变量 &amp; 描述</th></tr> <tr><td>1</td><td><b>ptrdiff_t</b><br />这是有符号整数类型，它是两个指针相减的结果。</td></tr> <tr><td>2</td><td><b>size_t </b><br />这是无符号整数类型，它是 <b>sizeof</b> 关键字的结果。</td></tr> <tr><td>3</td><td><b>wchar_t </b><br />这是一个宽字符常量大小的整数类型。</td></tr> </table> 

## 库宏
下面是头文件 stddef.h 中定义的宏：
</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1</td><td><a href="null.md">NULL</a><br />这个宏是一个空指针常量的值。</td></tr> <tr><td>2</td><td><a href="offsetof.md">offsetof(type, member-designator)</a><br />这会生成一个类型为 size_t 的整型常量，它是一个结构成员相对于结构开头的字节偏移量。成员是由 <i>member-designator</i> 给定的，结构的名称是在 <i>type</i> 中给定的。</td></tr> </table> 