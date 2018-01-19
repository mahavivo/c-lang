# C 库函数 – isxdigit()


## 描述

C 库函数 **int isxdigit(int c)**检查所传的字符是否是十六进制数字。

## 声明

下面是 isxdigit() 函数的声明。

    int isxdigit(int c);

## 参数

* **c** \-- 这是要检查的字符。

## 返回值

如果 c 是一个十六进制数字，则该函数返回非零值（true），否则返回 0（false）。

## 实例

下面的实例演示了 isxdigit() 函数的用法。

    #include 
    #include 

    int main()
    {
       char var1[] = "tuts";
       char var2[] = "0xE";

       if( isxdigit(var1[0]) )
       {
         printf("var1 = |%s| 是十六进制数字n", var1 );
       }
       else
       {
         printf("var1 = |%s| 不是十六进制数字n", var1 );
       }

       if( isxdigit(var2[0] ))
       {
         printf("var2 = |%s| 是十六进制数字n", var2 );
       }
       else
       {
         printf("var2 = |%s| 不是十六进制数字n", var2 );
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    var1 = |tuts| 不是十六进制数字
    var2 = |0xE| 是十六进制数字