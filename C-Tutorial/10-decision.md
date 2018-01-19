# C 判断

判断结构要求程序员指定一个或多个要评估或测试的条件，以及条件为真时要执行的语句（必需的）和条件为假时要执行的语句（可选的）。

C 语言把任何**非零**和**非空**的值假定为 **true**，把**零**或 **null** 假定为 **false**。

下面是大多数编程语言中典型的判断结构的一般形式：

![C 中的判断语句](images/c-decision/decision_making.jpg)

## 判断语句

C 语言提供了以下类型的判断语句。点击链接查看每个语句的细节。

</p> <table > <tr><th style="width:35%">语句</th><th>描述</th></tr> <tr><td><a href="c-if.html" title="C 中的 if 语句">if 语句</a></td><td>一个 <b>if 语句</b> 由一个布尔表达式后跟一个或多个语句组成。</td></tr> <tr><td><a href="c-if-else.html" title="C 中的 if...else 语句">if...else 语句</a></td><td>一个 <b>if 语句</b> 后可跟一个可选的 <b>else 语句</b>，else 语句在布尔表达式为假时执行。</td></tr> <tr><td><a href="c-nested-if.html" title="C 中的嵌套 if 语句">嵌套 if 语句</a></td><td>您可以在一个 <b>if</b> 或 <b>else if</b> 语句内使用另一个 <b>if</b> 或 <b>else if</b> 语句。</td></tr> <tr><td><a href="c-switch.html" title="C 中的 switch 语句">switch 语句</a></td><td>一个 <b>switch</b> 语句允许测试一个变量等于多个值时的情况。</td></tr> <tr><td><a href="c-nested-switch.html" title="C 中的嵌套 switch 语句">嵌套 switch 语句</a></td><td>您可以在一个 <b>switch</b> 语句内使用另一个 <b>switch </b> 语句。</td></tr> </table> <br /> 

## ? : 运算符
我们已经在前面的章节中讲解了 **条件运算符 ? :**，可以用来替代 **if...else** 语句。它的一般形式如下

```
    Exp1 ? Exp2 : Exp3;
```

其中，Exp1、Exp2 和 Exp3 是表达式。请注意，冒号的使用和位置。

? 表达式的值是由 Exp1 决定的。如果 Exp1 为真，则计算 Exp2 的值，结果即为整个 ? 表达式的值。如果 Exp1 为假，则计算 Exp3 的值，结果即为整个 ? 表达式的值。