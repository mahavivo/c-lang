# C 库函数 – setbuf()


## 描述

C 库函数 **void setbuf(FILE *stream, char *buffer)** 定义流 stream 应如何缓冲。该函数应在与流 stream 相关的文件被打开时，且还未发生任何输入或输出操作之前被调用一次。

## 声明

下面是 setbuf() 函数的声明。

    void setbuf(FILE *stream, char *buffer)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了一个打开的流。
* **buffer** \-- 这是分配给用户的缓冲，它的长度至少为 BUFSIZ 字节，BUFSIZ 是一个宏常量，表示数组的长度。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 setbuf() 函数的用法。

    #include 

    int main()
    {
       char buf[BUFSIZ];

       setbuf(stdout, buf);
       puts("This is jikexueyuan");

       fflush(stdout);
       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果。在这里，程序在即将输出的时候，发送输出到 STDOUT，否则它将缓冲输出。您也可以使用 fflush() 函数来 to 刷新输出。

    This is jikexueuan