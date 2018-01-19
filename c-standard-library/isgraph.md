# C 库函数 – isgraph()

## 描述

C 库函数 **void isgraph(int c)** 检查所传的字符是否有图形表示法。

带有图形表示法的字符是除了空白字符（比如 ' '）以外的所有可打印的字符。

## 声明

下面是 isgraph() 函数的声明。

    int isgraph(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 有图形表示法，则该函数返回非零值，否则返回 0。

## 实例

下面的实例演示了 isgraph() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = '3';
       int var2 = 'm';
       int var3 = ' ';

       if( isgraph(var1) )
       {
           printf("var1 = |%c| 是可打印的n", var1 );
       }
       else
       {
          printf("var1 = |%c| 是不可打印的n", var1 );
       }
       if( isgraph(var2) )
       {
           printf("var2 = |%c| 是可打印的n", var2 );
       }
       else
       {
          printf("var2 = |%c| 是不可打印的n", var2 );
       }
       if( isgraph(var3) )
       {
           printf("var3 = |%c| 是可打印的n", var3 );
       }
       else
       {
          printf("var3 = |%c| 是不可打印的n", var3 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |3| 是可打印的
    var2 = |m| 是可打印的
    var3 = | | 是不可打印的
