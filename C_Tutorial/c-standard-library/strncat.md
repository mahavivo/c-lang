# C 库函数 – strncat()


## 描述

C 库函数 **char *strncat(char *dest, const char *src, size_t n)** 把 **src** 所指向的字符串追加到 **dest** 所指向的字符串的结尾，直到 **n** 字符长度为止。

## 声明

下面是 strncat() 函数的声明。

    char *strncat(char *dest, const char *src, size_t n)

## 参数

* **dest** \-- 指向目标数组，该数组包含了一个 C 字符串，且足够容纳追加后的字符串，包括额外的空字符。
* **src** \-- 要追加的字符串。
* **n** \-- 要追加的最大字符数。

## 返回值

该函数返回一个指向最终的目标字符串 dest 的指针。

## 实例

下面的实例演示了 strncat() 函数的用法。

    #include 
    #include 

    int main ()
    {
       char src[50], dest[50];

       strcpy(src,  "This is source");
       strcpy(dest, "This is destination");

       strncat(dest, src, 15);

       printf("最终的目标字符串： |%s|", dest);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    最终的目标字符串： |This is destinationThis is source|