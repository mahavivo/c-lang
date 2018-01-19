# C 库函数 – strpbrk()


## 描述

C 库函数 **char *strpbrk(const char *str1, const char *str2) ** 检索字符串 **str1** 中第一个匹配字符串 **str2** 中字符的字符，不包含空结束字符。也就是说，依次检验字符串 str1 中的字符，当被检验字符在字符串 str2 中也包含时，则停止检验，并返回该字符位置。

## 声明

下面是 strpbrk() 函数的声明。

    char *strpbrk(const char *str1, const char *str2)

## 参数

* **str1** \-- 要被检索的 C 字符串。
* **str2** \-- 该字符串包含了要在 str1 中进行匹配的字符列表。

## 返回值

该函数返回 str1 中第一个匹配字符串 str2 中字符的字符数，如果未找到字符则返回 NULL。

## 实例

下面的实例演示了 strpbrk() 函数的用法。

    #include 
    #include 

    int main ()
    {
       const char str1[] = "abcde2fghi3jk4l";
       const char str2[] = "34";
       char *ret;

       ret = strpbrk(str1, str2);
       if(ret)
       {
          printf("第一个匹配的字符是： %cn", *ret);
       }
       else
       {
          printf("未找到字符");
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    第一个匹配的字符是： 3