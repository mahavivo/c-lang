# C 库函数 – isdigit()

## 描述

C 库函数 **void isdigit(int c)** 检查所传的字符是否是十进制数字字符。

十进制数字是：0 1 2 3 4 5 6 7 8 9

## 声明

下面是 isdigit() 函数的声明。

    int isdigit(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个数字，则该函数返回非零值，否则返回 0。

## 实例

下面的实例演示了 isdigit() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 'h';
       int var2 = '2';

       if( isdigit(var1) )
       {
          printf("var1 = |%c| 是一个数字n", var1 );
       }
       else
       {
          printf("var1 = |%c| 不是一个数字n", var1 );
       }
       if( isdigit(var2) )
       {
          printf("var2 = |%c| 是一个数字n", var2 );
       }
       else
       {
          printf("var2 = |%c| 不是一个数字n", var2 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |h| 不是一个数字
    var2 = |2| 是一个数字