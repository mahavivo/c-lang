# C 库函数 – strtol()


## 描述

C 库函数 **long int strtol(const char *str, char **endptr, int base)** 把参数 **str** 所指向的字符串根据给定的 **base** 转换为一个长整数（类型为 long int 型），base 必须介于 2 和 36（包含）之间，或者是特殊值 0。

## 声明

下面是 strtol() 函数的声明。

    long int strtol(const char *str, char **endptr, int base)

## 参数

* **str** \-- 要转换为长整数的字符串。
* **endptr** \-- 对类型为 char* 的对象的引用，其值由函数设置为 **str** 中数值后的下一个字符。
* **base** \-- 基数，必须介于 2 和 36（包含）之间，或者是特殊值 0。

## 返回值

该函数返回转换后的长整数，如果没有执行有效的转换，则返回一个零值。

## 实例

下面的实例演示了 strtol() 函数的用法。

    #include 
    #include 

    int main()
    {
       char str[30] = "2030300 This is test";
       char *ptr;
       long ret;

       ret = strtol(str, &ptr, 10);
       printf("数字（无符号长整数）是 %ldn", ret);
       printf("字符串部分是 |%s|", ptr);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    数字（无符号长整数）是 2030300
    字符串部分是 | This is test|