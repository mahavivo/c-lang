# C 库函数 – ispunct()



## 描述

C 库函数 **int ispunct(int c)** 检查所传的字符是否是标点符号字符。标点符号字符可以是非字母数字（正如 isalnum 中的一样）的任意图形字符（正如 isgraph 中的一样）。

## 声明

下面是 ispunct() 函数的声明。

    int ispunct(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个标点符号字符，则该函数返回非零值（true），否则返回 0（false）。

## 实例

下面的实例演示了 ispunct() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 't';
       int var2 = '1';
       int var3 = '/';
       int var4 = ' ';

       if( ispunct(var1) )
       {
           printf("var1 = |%c| 是标点符号字符n", var1 );
       }
       else
       {
           printf("var1 = |%c| 不是标点符号字符n", var1 );
       }
       if( ispunct(var2) )
       {
           printf("var2 = |%c| 是标点符号字符n", var2 );
       }
       else
       {
           printf("var2 = |%c| 不是标点符号字符n", var2 );
       }
       if( ispunct(var3) )
       {
           printf("var3 = |%c| 是标点符号字符n", var3 );
       }
       else
       {
           printf("var3 = |%c| 不是标点符号字符n", var3 );
       }
       if( ispunct(var4) )
       {
           printf("var4 = |%c| 是标点符号字符n", var4 );
       }
       else
       {
           printf("var4 = |%c| 不是标点符号字符n", var4 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |t| 不是标点符号字符
    var2 = |1| 不是标点符号字符
    var3 = |/| 是标点符号字符
    var4 = | | 不是标点符号字符