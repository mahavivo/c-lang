# C 库函数 – isspace()


## 描述

C 库函数 **int isspace(int c)** 检查所传的字符是否是空白字符。

标准的空白字符包括：

    ' '     (0x20)	space (SPC) 空格符
    't'	(0x09)	horizontal tab (TAB) 水平制表符
    'n'	(0x0a)	newline (LF) 换行符
    'v'	(0x0b)	vertical tab (VT) 垂直制表符
    'f'	(0x0c)	feed (FF) 换页符
    'r'	(0x0d)	carriage return (CR) 回车符

## 声明

下面是 isspace() 函数的声明。

    int isspace(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个空白字符，则该函数返回非零值（true），否则返回 0（false）。

## 实例

下面的实例演示了 isspace() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 't';
       int var2 = '1';
       int var3 = ' ';

       if( isspace(var1) )
       {
           printf("var1 = |%c| 是空白字符n", var1 );
       }
       else
       {
           printf("var1 = |%c| 不是空白字符n", var1 );
       }
       if( isspace(var2) )
       {
           printf("var2 = |%c| 是空白字符n", var2 );
       }
       else
       {
           printf("var2 = |%c| 不是空白字符n", var2 );
       }
       if( isspace(var3) )
       {
           printf("var3 = |%c| 是空白字符n", var3 );
       }
       else
       {
           printf("var3 = |%c| 不是空白字符n", var3 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |t| 不是空白字符
    var2 = |1| 不是空白字符
    var3 = | | 是空白字符