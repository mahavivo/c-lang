# C 库函数 – abort()


## 描述

C 库函数 **void abort(void)** 中止程序执行，直接从调用的地方跳出。

## 声明

下面是 abort() 函数的声明。

    void abort(void)

## 参数

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 abort() 函数的用法。
```c
    #include
    #include

    int main ()
    {
       FILE *fp;

       printf("准备打开 nofile.txtn");
       fp = fopen( "nofile.txt","r" );
       if(fp == NULL)
       {
          printf("准备终止程序n");
          abort();
       }
       printf("准备关闭 nofile.txtn");
       fclose(fp);

       return(0);
    }
```
让我们编译并运行上面的程序，这将产生以下结果，因为我们尝试打开的文件 **nofile.txt** 是不存在的：

    准备打开 nofile.txt
    准备终止程序
