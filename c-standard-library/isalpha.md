# C 库函数 – isalpha()


## 描述

C 库函数 **void isalpha(int c)** 检查所传的字符是否是字母。

## 声明

下面是 isalpha() 函数的声明。

    int isalpha(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个字母，则该函数返回非零值，否则返回 0。

## 实例

下面的实例演示了 isalpha() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 'd';
       int var2 = '2';
       int var3 = 't';
       int var4 = ' ';

       if( isalpha(var1) )
       {
          printf("var1 = |%c| 是一个字母n", var1 );
       }
       else
       {
          printf("var1 = |%c| 不是一个字母n", var1 );
       }
       if( isalpha(var2) )
       {
          printf("var2 = |%c| 是一个字母n", var2 );
       }
       else
       {
          printf("var2 = |%c| 不是一个字母n", var2 );
       }
       if( isalpha(var3) )
       {
          printf("var3 = |%c| 是一个字母n", var3 );
       }
       else
       {
          printf("var3 = |%c| 不是一个字母n", var3 );
       }
       if( isalpha(var4) )
       {
          printf("var4 = |%c| 是一个字母n", var4 );
       }
       else
       {
          printf("var4 = |%c| 不是一个字母n", var4 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |d| 是一个字母
    var2 = |2| 不是一个字母
    var3 = | | 不是一个字母
    var4 = | | 不是一个字母