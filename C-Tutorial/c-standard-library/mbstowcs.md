# C 库函数 – mbstowcs()


## 描述

C 库函数 **size_t mbstowcs(schar_t *pwcs, const char *str, size_t n)** 把参数 **str** 所指向的多字节字符的字符串转换为参数 **pwcs** 所指向的数组。

## 声明

下面是 mbstowcs() 函数的声明。

    size_t mbstowcs(schar_t *pwcs, const char *str, size_t n)

## 参数

* **pwcs** \-- 指向一个 wchar_t 元素的数组，数组长度足以存储一个最大字符长度的宽字符串。
* **str** \-- 要被转换的多字节字符字符串。
* **n** \-- 要被转换的最大字符数。

## 返回值

该函数返回转换的字符数，不包括结尾的空字符。如果遇到一个无效的多字节字符，则返回 -1 值。

## 实例

下面的实例演示了 mbstowcs() 函数的用法。

    #include 
    #include 
    #include 

    int main()
    {
       int len;
       char *pmbnull  = NULL;
       char *pmb = (char *)malloc( MB_CUR_MAX );
       wchar_t *pwc = L"Hi";
       wchar_t *pwcs = (wchar_t *)malloc( sizeof( wchar_t ));

       printf("转换为多字节字符串n");
       len = wcstombs( pmb, pwc, MB_CUR_MAX);
       printf("被转换的字符 %dn", len);
       printf("第一个多字节字符的十六进制值：%#.4xn", pmb);

       printf("转换回宽字符字符串n");
       len = mbstowcs( pwcs, pmb, MB_CUR_MAX);
       printf("被转换的字符 %dn", len);
       printf("第一个宽字符的十六进制值：%#.4xnn", pwcs);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    转换为多字节字符串
    被转换的字符 1
    第一个多字节字符的十六进制值：0x19a60010
    转换回宽字符字符串
    被转换的字符 1
    第一个宽字符的十六进制值：0x19a60030