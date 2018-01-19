# C 标准库 - <ctype.h>

## 简介
C 标准库的 ctype.h 头文件提供了一些函数，可用于测试和映射字符。

这些函数接受 int 作为参数，它的值必须是 EOF 或表示为一个无符号字符。

如果参数 c 满足描述的条件，则这些函数返回非零（true）。如果参数 c 不满足描述的条件，则这些函数返回零。

## 库函数
下面列出了头文件 ctype.h 中定义的函数：

</p> <table > <tr><th style="width:5%">序号</th><th>函数 &amp; 描述</th></tr> <tr><td>1</td><td><a href="isalnum.md">int isalnum(int c)</a><br />该函数检查所传的字符是否是字母和数字。</td></tr> <tr><td>2</td><td><a href="isalpha.md">int isalpha(int c)</a><br />该函数检查所传的字符是否是字母。</td></tr> <tr><td>3</td><td><a href="iscntrl.md">int iscntrl(int c)</a><br />该函数检查所传的字符是否是控制字符。</td></tr> <tr><td>4</td><td><a href="isdigit.md">int isdigit(int c)</a><br />该函数检查所传的字符是否是十进制数字。</td></tr> <tr><td>5</td><td><a href="isgraph.md">int isgraph(int c)</a><br />该函数检查所传的字符是否有图形表示法。</td></tr> <tr><td>6</td><td><a href="islower.md">int islower(int c)</a><br />该函数检查所传的字符是否是小写字母。</td></tr> <tr><td>7</td><td><a href="isprint.md">int isprint(int c)</a><br />该函数检查所传的字符是否是可打印的。</td></tr> <tr><td>8</td><td><a href="ispunct.md">int ispunct(int c)</a><br />该函数检查所传的字符是否是标点符号字符。</td></tr> <tr><td>9</td><td><a href="isspace.md">int isspace(int c)</a><br />该函数检查所传的字符是否是空白字符。</td></tr> <tr><td>10</td><td><a href="isupper.md">int isupper(int c)</a><br />该函数检查所传的字符是否是大写字母。</td></tr> <tr><td>11</td><td><a href="isxdigit.md">int isxdigit(int c)</a><br />该函数检查所传的字符是否是十六进制数字。</td></tr> </table> <p>
标准库还包含了两个转换函数，它们接受并返回一个 "int"
</p> <table > <tr><th style="width:5%">序号</th><th>函数 &amp; 描述</th></tr> <tr><td>1</td><td><a href="tolower.md">int tolower(int c)</a><br />该函数把大写字母转换为小写字母。</td></tr> <tr><td>2</td><td><a href="toupper.md">int toupper(int c)</a><br />该函数把小写字母转换为大写字母。</td></tr> </table> 

## 字符类
 <table > <tr><th style="width:5%">序号</th><th>字符类 &amp; 描述</th></tr> <tr><td>1</td><td><b>数字</b><br />完整的数字集合 { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }</td></tr> <tr><td>2</td><td><b>十六进制数字</b><br />集合 { 0 1 2 3 4 5 6 7 8 9 A B C D E F a b c d e f }</td></tr> <tr><td>3</td><td><b>小写字母</b><br />集合 { a b c d e f g h i j k l m n o p q r s t u v w x y z } </td></tr> <tr><td>4</td><td><b>大写字母</b><br />集合 </td></tr> <tr><td>5</td><td><b>字母</b><br />小写字母和大写字母的集合</td></tr> <tr><td>6</td><td><b>字母数字字符</b><br />数字、小写字母和大写字母的集合</td></tr> <tr><td>7</td><td><b>标点符号字符</b><br />集合 ! " # $ % &amp; ' ( ) * + , - . / : ; &lt; = &gt; ? @ [ \ ] ^ _ ` { | } ~</td></tr> <tr><td>8</td><td><b>图形字符</b><br />字母数字字符和标点符号字符的集合</td></tr> <tr><td>9</td><td><b>空格字符</b><br />制表符、换行符、垂直制表符、换页符、回车符、空格符的集合。</td></tr> <tr><td>10</td><td><b>可打印字符</b><br />字母数字字符、标点符号字符和空格字符的集合。</td></tr> <tr><td>11</td><td><b>控制字符</b><br />在 ASCII 编码中，这些字符的八进制代码是从 000 到 037，以及 177（DEL）。</td></tr> <tr><td>12</td><td><b>空白字符</b><br />包括空格符和制表符。</td></tr> <tr><td>13</td><td><b>字母字符</b><br />小写字母和大写字母的集合。</td></tr> </table> 