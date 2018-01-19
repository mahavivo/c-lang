# C 库函数 – clearerr()


## 描述

C 库函数 **void clearerr(FILE *stream)** 清除给定流 stream 的文件结束和错误标识符。

## 声明

下面是 clearerr() 函数的声明。

    void clearerr(FILE *stream)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。

## 返回值

这不会失败，且不会设置外部变量 errno，但是如果它检测到它的参数不是一个有效的流，则返回 -1，并设置 errno 为 EBADF。

## 实例

下面的实例演示了 clearerr() 函数的用法。

    #include 

    int main()
    {
       FILE *fp;
       char c;

       fp = fopen("file.txt", "w");

       c = fgetc(fp);
       if( ferror(fp) )
       {
          printf("读取文件：file.txt 时发生错误n");
       }
       clearerr(fp);
       if( ferror(fp) )
       {
          printf("读取文件：file.txt 时发生错误n");
       }
       fclose(fp);

       return(0);
    }

假设我们有一个文本文件 **file.txt**，它是一个空文件。让我们编译并运行上面的程序，因为我们试图读取一个以只写模式打开的文件，这将产生以下结果。

    读取文件：file.txt 时发生错误
