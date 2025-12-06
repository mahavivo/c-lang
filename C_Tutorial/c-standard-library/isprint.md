# C 库函数 – isprint()


## 描述

C 库函数 **int isprint(int c)** 检查所传的字符是否是可打印的。可打印字符是非控制字符的字符。

## 声明

下面是 isprint() 函数的声明。

    int isprint(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个可打印的字符，则该函数返回非零值（true），否则返回 0（false）。

## 实例

下面的实例演示了 isprint() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 'k';
       int var2 = '8';
       int var3 = 't';
       int var4 = ' ';

       if( isprint(var1) )
       {
          printf("var1 = |%c| 是可打印的n", var1 );
       }
       else
       {
          printf("var1 = |%c| 是不可打印的n", var1 );
       }
       if( isprint(var2) )
       {
          printf("var2 = |%c| 是可打印的n", var2 );
       }
       else
       {
          printf("var2 = |%c| 是不可打印的n", var2 );
       }
       if( isprint(var3) )
       {
          printf("var3 = |%c| 是可打印的n", var3 );
       }
       else
       {
          printf("var3 = |%c| 是不可打印的n", var3 );
       }
       if( isprint(var4) )
       {
          printf("var4 = |%c| 是可打印的n", var4 );
       }
       else
       {
          printf("var4 = |%c| 是不可打印的n", var4 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |k| 是可打印的
    var2 = |8| 是可打印的
    var3 = |	| 是不可打印的
    var4 = | | 是可打印的