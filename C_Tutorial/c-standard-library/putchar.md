# C 库函数 – putchar()


## 描述

C 库函数 **int putchar(int char)** 把参数 char 指定的字符（一个无符号字符）写入到标准输出 stdout 中。

## 声明

下面是 putchar() 函数的声明。

    int putchar(int char)

## 参数

* **char** \-- 这是要被写入的字符。该字符以其对应的 int 值进行传递。

## 返回值

该函数以无符号 char 强制转换为 int 的形式返回写入的字符，如果发生错误则返回 EOF。

## 实例

下面的实例演示了 putchar() 函数的用法。

    #include 

    int main ()
    {
       char ch;

       for(ch = 'A' ; ch <= 'Z' ; ch++) {
          putchar(ch);
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    ABCDEFGHIJKLMNOPQRSTUVWXYZ