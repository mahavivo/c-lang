# C 库函数 – strerror()


## 描述

C 库函数 **char *strerror(int errnum) ** 从内部数组中搜索错误号 **errnum**，并返回一个指向错误消息字符串的指针。**strerror** 生成的错误字符串取决于开发平台和编译器。

## 声明

下面是 strerror() 函数的声明。

    char *strerror(int errnum)

## 参数

* **errnum** \-- 错误号，通常是 **errno**。

## 返回值

该函数返回一个指向错误字符串的指针，该错误字符串描述了错误 errnum。

## 实例

下面的实例演示了 strerror() 函数的用法。

    #include 
    #include 
    #include 

    int main ()
    {
       FILE *fp;

       fp = fopen("file.txt","r");
       if( fp == NULL )
       {
          printf("Error: %sn", strerror(errno));
       }

      return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果，因为我们尝试打开一个不存在的文件：

    Error: No such file or directory