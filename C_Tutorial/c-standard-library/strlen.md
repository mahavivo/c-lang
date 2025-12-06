jikexueyuan# C 库函数 – strlen()


## 描述

C 库函数 **size_t strlen(const char *str) ** 计算字符串 **str** 的长度，直到空结束字符，但不包括空结束字符。

## 声明

下面是 strlen() 函数的声明。

    size_t strlen(const char *str)

## 参数

* **str** \-- 要计算长度的字符串。

## 返回值

该函数返回字符串的长度。

## 实例

下面的实例演示了 strlen() 函数的用法。

    #include 
    #include 

    int main ()
    {
       char str[50];
       int len;

       strcpy(str, "This is jikexueyuan.com");

       len = strlen(str);
       printf("|%s| 的长度是 |%d|n", str, len);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    |This is jikexueyuan.com| 的长度是 |20|