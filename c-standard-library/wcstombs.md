# C 库函数 – wcstombs()


## 描述

C 库函数 **size_t wcstombs(char *str, const wchar_t *pwcs, size_t n)** 把宽字符字符串 **pwcs** 转换为一个 **str** 开始的多字节字符串。最多会有 **n** 个字节被写入 **str** 中。

## 声明

下面是 wcstombs() 函数的声明。

    size_t wcstombs(char *str, const wchar_t *pwcs, size_t n)

## 参数

* **str** \-- 指向一个 char 元素的数组，至少有 n 字节长。
* **pwcs** \-- 要被转换的宽字符字符串。
* **n** \-- 要被写入到 str 中的最大字节数。

## 返回值

该函数返回转换和写入到 str 中的字节数，不包括结尾的空字符。如果遇到一个无效的多字节字符，则返回 -1 值。

## 实例

下面的实例演示了 wcstombs() 函数的用法。

    #include 
    #include 

    #define BUFFER_SIZE 50

    int main()
    {
       size_t ret;
       char *MB = (char *)malloc( BUFFER_SIZE );
       wchar_t *WC = L"http://www.jikexueyuan.com";

       /* 转换宽字符字符串 */
       ret = wcstombs(MB, WC, BUFFER_SIZE);

       printf("要转换的字符数 = %un", ret);
       printf("多字节字符 = %snn", MB);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    要转换的字符数 = 23
    多字节字符 = http://www.jikexueyuan.com