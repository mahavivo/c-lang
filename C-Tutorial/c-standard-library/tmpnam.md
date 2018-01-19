# C 库函数 – tmpnam()


## 描述

C 库函数 **char *tmpnam(char *str)** 生成并返回一个有效的临时文件名，该文件名之前是不存在的。如果 **str** 为空，则只会返回临时文件名。

## 声明

下面是 tmpnam() 函数的声明。

    char *tmpnam(char *str)

## 参数

* **str** \-- 这是一个指向字符数组的指针，其中，临时文件名将被存储为 C 字符串。

## 返回值

* 一个指向 C 字符串的指针，该字符串存储了临时文件名。如果 str 是一个空指针，则该指针指向一个内部缓冲区，缓冲区在下一次调用函数时被覆盖。
* 如果 str 不是一个空指针，则返回 str。如果函数未能成功创建可用的文件名，则返回一个空指针。

## 实例

下面的实例演示了 tmpnam() 函数的用法。

    #include 

    int main()
    {
       char buffer[L_tmpnam];
       char *ptr;

       tmpnam(buffer);
       printf("临时名称 1: %sn", buffer);

       ptr = tmpnam(NULL);
       printf("临时名称 2: %sn", ptr);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    临时名称 1: /tmp/filebaalTb
    临时名称 2: /tmp/filedCIbb0