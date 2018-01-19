# C 库函数 – strcspn()


## 描述

C 库函数 **size_t strcspn(const char *str1, const char *str2) ** 检索字符串 **str1** 开头连续有几个字符都不含字符串 **str2** 中的字符。

## 声明

下面是 strcspn() 函数的声明。

    size_t strcspn(const char *str1, const char *str2)

## 参数

* **str1** \-- 要被检索的 C 字符串。
* **str2** \-- 该字符串包含了要在 str1 中进行匹配的字符列表。

## 返回值

该函数返回 str1 开头连续都不含字符串 str2 中字符的字符数。

## 实例

下面的实例演示了 strcspn() 函数的用法。

    #include 
    #include 

    int main ()
    {
       int len;
       const char str1[] = "ABCDEF4960910";
       const char str2[] = "013";

       len = strcspn(str1, str2);

       printf("第一个匹配的字符是在 %dn", len + 1);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    第一个匹配的字符是在 10