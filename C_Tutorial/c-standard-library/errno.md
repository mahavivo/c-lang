# C 库宏 – errno


## 描述

C 库宏 **extern int errno** 是通过系统调用设置的，在错误事件中的某些库函数表明了什么发生了错误。

## 声明

下面是 errno 宏的声明。

    extern int errno

## 参数

## 返回值

## 实例

下面的实例演示了 errno 宏的用法。

    #include 
    #include 
    #include 

    extern int errno ;

    int main ()
    {
       FILE *fp;

       fp = fopen("file.txt", "r");
       if( fp == NULL )
       {
          fprintf(stderr, "Value of errno: %dn", errno);
          fprintf(stderr, "Error opening file: %sn", strerror(errno));
       }
       else
       {
          fclose(fp);
       }

       return(0);
    }

让我们编译并运行上面的程序，当文件 **file.txt** 不存在时，将产生以下结果：

    Value of errno: 2
    Error opening file: No such file or directory