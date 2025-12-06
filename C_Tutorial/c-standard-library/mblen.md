# C 库函数 – mblen()


## 描述

C 库函数 **int mblen(const char *str, size_t n)** 返回参数 **str** 所指向的多字节字符的长度。

## 声明

下面是 mblen() 函数的声明。

    int mblen(const char *str, size_t n)

## 参数

* **str** \-- 指向多字节字符的第一个字节的指针。
* **n** \-- 要检查的字符长度的最大字节数。

## 返回值

如果识别了一个非空宽字符，mblen() 函数返回 str 开始的多字节序列解析的字节数。如果识别了一个空宽字符，则返回 0。如果识别了一个无效的多字节序列，或者不能解析一个完整的多字节字符，则返回 -1。

## 实例

下面的实例演示了 mblen() 函数的用法。

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

       len = mblen( pmb, MB_CUR_MAX );
       printf( "多字节字符 %x 的字节长度：%un", pmb, len );

       pmb = NULL;

       len = mblen( pmb, MB_CUR_MAX );
       printf( "多字节字符 %x 的字节长度：%un", pmb, len );

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    转换为多字节字符串
    被转换的字符 1
    第一个多字节字符的十六进制值：0x168c6010
    多字节字符 168c6010 的字节长度：1
    多字节字符 0 的字节长度：0