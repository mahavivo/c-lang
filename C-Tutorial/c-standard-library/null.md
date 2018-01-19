# C 库宏 – NULL


## 描述

C 库宏 **NULL** 是一个空指针常量的值。它可以被定义为 **((void*)0), 0 ** 或 **0L**，这取决于编译器供应商。

## 声明

下面是取决于编译器的 NULL 宏的声明。

    #define NULL ((char *)0)

    或

    #define NULL 0L

    或

    #define NULL 0

## 参数

## 返回值

## 实例

下面的实例演示了 NULL 宏的用法。

    #include 
    #include 

    int main ()
    {
       FILE *fp;

       fp = fopen("file.txt", "r");
       if( fp != NULL )
       {
          printf("成功打开文件 file.txtn");
          fclose(fp);
       }

       fp = fopen("nofile.txt", "r");
       if( fp == NULL )
       {
          printf("不能打开文件 nofile.txtn");
       }

       return(0);
    }

假设文件 **file.txt** 已存在，但是 **nofile.txt** 不存在。让我们编译并运行上面的程序，这将产生以下结果：

    成功打开文件 file.txt
    不能打开文件 nofile.txt