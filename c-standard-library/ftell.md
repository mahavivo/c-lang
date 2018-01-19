# C 库函数 – ftell()

## 描述

C 库函数 **long int ftell(FILE *stream)** 返回给定流 stream 的当前文件位置。

## 声明

下面是 ftell() 函数的声明。

    long int ftell(FILE *stream)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。

## 返回值

该函数返回位置标识符的当前值。如果发生错误，则返回 -1L，全局变量 errno 被设置为一个正值。

## 实例

下面的实例演示了 ftell() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;
       int len;

       fp = fopen("file.txt", "r");
       if( fp == NULL )
       {
          perror ("打开文件错误");
          return(-1);
       }
       fseek(fp, 0, SEEK_END);

       len = ftell(fp);
       fclose(fp);

       printf("file.txt 的总大小 = %d 字节n", len);

       return(0);
    }

假设我们有一个文本文件 **file.txt**，它的内容如下：

    This is jikexueyuan.com

让我们编译并运行上面的程序，如果文件内容如上所示，这将产生以下结果，否则会根据文件内容给出不同的结果：

    file.txt 的总大小 = 21 字节
