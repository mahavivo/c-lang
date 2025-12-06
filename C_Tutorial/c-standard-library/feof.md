# C 库函数 – feof()


## 描述

C 库函数 **int feof(FILE *stream)** 测试给定流 stream 的文件结束标识符。

## 声明

下面是 feof() 函数的声明。

    int feof(FILE *stream)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。

## 返回值

当设置了与流关联的文件结束标识符时，该函数返回一个非零值，否则返回零。

## 实例

下面的实例演示了 feof() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;
       int c;

       fp = fopen("file.txt","r");
       if(fp == NULL)
       {
          perror("打开文件时发生错误");
          return(-1);
       }
       while(1)
       {
          c = fgetc(fp);
          if( feof(fp) )
          {
              break ;
          }
          printf("%c", c);
       }
       fclose(fp);
       return(0);
    }

假设我们有一个文本文件 **file.txt**，它的内容如下所示。该文件将作为我们实例程序中的一个输入使用：

    这里是 jikexueyuan.com

让我们编译并运行上面的程序，这将产生以下结果：

    这里是 jikexueyuan.com