# C 库函数 – strspn()


## 描述

C 库函数 **size_t strspn(const char *str1, const char *str2)** 检索字符串 **str1** 中第一个不在字符串 **str2** 中出现的字符下标。

## 声明

下面是 strspn() 函数的声明。

    size_t strspn(const char *str1, const char *str2)

## 参数

* **str1** \-- 要被检索的 C 字符串。
* **str2** \-- 该字符串包含了要在 str1 中进行匹配的字符列表。

## 返回值

该函数返回 str1 中第一个不在字符串 str2 中出现的字符下标。

## 实例

下面的实例演示了 strspn() 函数的用法。

    #include 
    #include 

    int main ()
    {
       int len;
       const char str1[] = "ABCDEFG019874";
       const char str2[] = "ABCD";

       len = strspn(str1, str2);

       printf("初始段匹配长度 %dn", len );

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    初始段匹配长度 4
