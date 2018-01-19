# C 库函数 – strcat()


## 描述

C 库函数 **char *strcat(char *dest, const char *src)** 把 **src** 所指向的字符串追加到 **dest** 所指向的字符串的结尾。

## 声明

下面是 strcat() 函数的声明。

    char *strcat(char *dest, const char *src)

## 参数

* **dest** \-- 指向目标数组，该数组包含了一个 C 字符串，且足够容纳追加后的字符串。
* **src** \-- 指向要追加的字符串，该字符串不会覆盖目标字符串。

## 返回值

该函数返回一个指向最终的目标字符串 dest 的指针。

## 实例

下面的实例演示了 strcat() 函数的用法。

    #include 
    #include 

    int main ()
    {
       char src[50], dest[50];

       strcpy(src,  "This is source");
       strcpy(dest, "This is destination");

       strcat(dest, src);

       printf("最终的目标字符串： |%s|", dest);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    最终的目标字符串： |This is destinationThis is source|