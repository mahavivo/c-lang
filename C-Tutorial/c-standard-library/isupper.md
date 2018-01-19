# C 库函数 – isupper()


## 描述

C 库函数 **int isupper(int c)** 检查所传的字符是否是大写字母。

## 声明

下面是 isupper() 函数的声明。

    int isupper(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个大写字母，则该函数返回非零值（true），否则返回 0（false）。

## 实例

下面的实例演示了 isupper() 函数的用法。

    #include 
    #include 

    int main()
    {
       int var1 = 'M';
       int var2 = 'm';
       int var3 = '3';

       if( isupper(var1) )
       {
          printf("var1 = |%c| 是大写字母n", var1 );
       }
       else
       {
          printf("var1 = |%c| 不是大写字母n", var1 );
       }
       if( isupper(var2) )
       {
          printf("var2 = |%c| 是大写字母n", var2 );
       }
       else
       {
          printf("var2 = |%c| 不是大写字母n", var2 );
       }
       if( isupper(var3) )
       {
          printf("var3 = |%c| 是大写字母n", var3 );
       }
       else
       {
          printf("var3 = |%c| 不是大写字母n", var3 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |M| 是大写字母
    var2 = |m| 不是大写字母
    var3 = |3| 不是大写字母