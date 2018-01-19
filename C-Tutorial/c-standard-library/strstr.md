jikexueyuan# C 库函数 - strstr()

## 描述

C 库函数 char *strstr(const char *haystack, const char *needle) 在字符串 haystack 中查找第一次出现字符串 needle 的位置，不包含终止符 '\0'。

## 声明
下面是 strstr() 函数的声明。

    char *strstr(const char *haystack, const char *needle)

## 参数
haystack -- 要被检索的 C 字符串。
needle -- 在 haystack 字符串内要搜索的小字符串。

## 返回值
该函数返回在 haystack 中第一次出现 needle 字符串的位置，如果未找到则返回 null。


## 实例
下面的实例演示了 strstr() 函数的用法。

```
    #include <stdio.h>
    #include <string.h>


    int main()
    {
       const char haystack[20] = "jikexueyuan";
       const char needle[10] = "School";
       char *ret;

       ret = strstr(haystack, needle);

       printf("子字符串是： %s\n", ret);
   
       return(0);
    }
```

让我们编译并运行上面的程序，这将产生以下结果：

    子字符串是： School