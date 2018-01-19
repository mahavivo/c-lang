# C 基本语法


我们已经看过 C 程序的基本结构，这将有助于我们理解 C 语言的其他基本的构建块。

## C 的令牌（Tokens）
C 程序由各种令牌组成，令牌可以是关键字、标识符、常量、字符串值，或者是一个符号。例如，下面的 C 语句包括五个令牌：

```c
    printf("Hello, World! \n");
```

这五个令牌分别是：

```c
    printf
    (
    "Hello, World! \n"
    )
    ;
```

## 分号 ;
在 C 程序中，分号是语句结束符。也就是说，每个语句必须以分号结束。它表明一个逻辑实体的结束。

例如，下面是两个不同的语句：

```c
    printf("Hello, World! \n");
    return 0;
```

## 注释
注释就像是 C 程序中的帮助文本，它们会被编译器忽略。它们以 /\* 开始，以字符 \*/ 终止，如下所示：

```c
    /* 我的第一个 C 程序 */
```

您不能在注释内嵌套注释，注释也不能出现在字符串或字符值中。

## 标识符
C 标识符是用来标识变量、函数，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。

C 标识符内不允许出现标点字符，比如 @、$ 和 %。C 是**区分大小写**的编程语言。因此，在 C 中，_Manpower_ 和 _manpower_ 是两个不同的标识符。下面列出几个有效的标识符：

```
    mohd       zara    abc   move_name  a_123
    myname50   _temp   j     a23b9      retVal
```

## 关键字
下表列出了 C 中的保留字。这些保留字不能作为常量名、变量名或其他标识符名称。

</p> <table > <tr> <td style="width:25%">auto</td> <td style="width:25%">else</td> <td style="width:25%">long</td> <td style="width:25%">switch</td> </tr> <tr> <td>break</td> <td>enum</td> <td>register</td> <td>typedef</td> </tr> <tr> <td>case</td> <td>extern</td> <td>return</td> <td>union</td> </tr> <tr> <td>char</td> <td>float</td> <td>short</td> <td>unsigned</td> </tr> <tr> <td>const</td> <td>for</td> <td>signed</td> <td>void</td> </tr> <tr> <td>continue</td> <td>goto</td> <td>sizeof</td> <td>volatile</td> </tr> <tr> <td>default</td> <td>if</td> <td>static</td> <td>while</td> </tr> <tr> <td>do</td> <td>int</td> <td>struct</td> <td>_Packed</td> </tr> <tr> <td>double</td> <td>&nbsp;</td> <td>&nbsp;</td> <td>&nbsp;</td> </tr> </table> <br />

## C 中的空格
只包含空格的行，被称为空白行，可能带有注释，C 编译器会完全忽略它。

在 C 中，空格用于描述空白符、制表符、换行符和注释。空格分隔语句的各个部分，让编译器能识别语句中的某个元素（比如 int）在哪里结束，下一个元素在哪里开始。因此，在下面的语句中：

```c
    int age;
```

在这里，int 和 age 之间必须至少有一个空格字符（通常是一个空白符），这样编译器才能够区分它们。另一方面，在下面的语句中：

```c
    fruit = apples + oranges;   // 获取水果的总数
```

fruit 和 =，或者 = 和 apples 之间的空格字符不是必需的，但是为了增强可读性，您可以根据需要适当增加一些空格。  
