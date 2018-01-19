# C 库函数 – strxfrm()


## 描述

C 库函数 **size_t strxfrm(char *dest, const char *src, size_t n)** 根据程序当前的区域选项中的 LC_COLLATE 来转换字符串 **src** 的前 **n** 个字符，并把它们放置在字符串 **dest** 中。

## 声明

下面是 strxfrm() 函数的声明。

    size_t strxfrm(char *dest, const char *src, size_t n)

## 参数

* **dest** \-- 指向存储内容的目标数组的指针，如果参数 n 为 0，则它是一个空指针。
* **src** \-- 要被转换为当前区域设置的 C 字符串。
* **n** \-- 被复制到 str1 的最大字符数。

## 返回值

该函数返回被转换字符串的长度，不包括空结束字符。

## 实例

下面的实例演示了 strxfrm() 函数的用法。

    #include 
    #include 

    int main()
    {
       char dest[20];
       char src[20];
       int len;

       strcpy(src, "W3C School");
       len = strxfrm(dest, src, 20);

       printf("字符串 |%s| 的长度是： |%d|", dest, len);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    字符串 |W3C School| 的长度是： |10|
