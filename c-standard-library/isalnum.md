# C 库函数 – isalnum()


## 描述

C 库函数 **void isalnum(int c)** 检查所传的字符是否是字母和数字。

## 声明

下面是 isalnum() 函数的声明。

    int isalnum(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个数字或一个字母，则该函数返回非零值，否则返回 0。

## 实例

下面的实例演示了 isalnum() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 'd';
       int var2 = '2';
       int var3 = 't';
       int var4 = ' ';

       if( isalnum(var1) )
       {
          printf("var1 = |%c| 是字母数字n", var1 );
       }
       else
       {
          printf("var1 = |%c| 不是字母数字n", var1 );
       }
       if( isalnum(var2) )
       {
          printf("var2 = |%c| 是字母数字n", var2 );
       }
       else
       {
          printf("var2 = |%c| 不是字母数字n", var2 );
       }
       if( isalnum(var3) )
       {
          printf("var3 = |%c| 是字母数字n", var3 );
       }
       else
       {
          printf("var3 = |%c| 不是字母数字n", var3 );
       }
       if( isalnum(var4) )
       {
          printf("var4 = |%c| 是字母数字n", var4 );
       }
       else
       {
          printf("var4 = |%c| 不是字母数字n", var4 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |d| 是字母数字
    var2 = |2| 是字母数字
    var3 = | | 不是字母数字
    var4 = | | 不是字母数字