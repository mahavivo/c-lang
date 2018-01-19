# C 库函数 – perror()


## 描述

C 库函数 **void perror(const char *str)** 把一个描述性错误消息输出到标准错误 stderr。首先输出字符串 **str**，后跟一个冒号，然后是一个空格。

## 声明

下面是 perror() 函数的声明。

    void perror(const char *str)

## 参数

* **str** \-- 这是 C 字符串，包含了一个自定义消息，将显示在原本的错误消息之前。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 perror() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;

       /* 首先重命名文件 */
       rename("file.txt", "newfile.txt");

       /* 现在让我们尝试打开相同的文件 */
       fp = fopen("file.txt", "r");
       if( fp == NULL ) {
          perror("Error: ");
          return(-1);
       }
       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果，因为我们尝试打开一个不存在的文件：

    Error: : No such file or directory