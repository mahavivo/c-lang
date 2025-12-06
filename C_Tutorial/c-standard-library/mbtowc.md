# C 库函数 – mbtowc()


## 描述

C 库函数 **int mbtowc(whcar_t *pwc, const char *str, size_t n)** 把一个多字节序列转换为一个宽字符。

## 声明

下面是 mbtowc() 函数的声明。

    int mbtowc(whcar_t *pwc, const char *str, size_t n)

## 参数

* **pwc** \-- 指向类型为 wchar_t 对象的指针。
* **str** \-- 指向多字节字符的第一个字节的指针。
* **n** \-- 要被检查的最大字节数。

## 返回值

* 如果 str 不为 NULL，mbtowc() 函数返回 str 开始消耗的字节数，如果指向一个空字节，则返回 0，如果操作失败，则返回 -1。
* 如果 str 为 NULL，如果编码具有移位状态，则 mbtowc() 函数返回非零，如果编码是无状态的，则返回零。

## 实例

下面的实例演示了 mbtowc() 函数的用法。

    #include 
    #include 
    #include 

    int main()
    {
       char *str = "这里是 jikexueyuan.com";
       wchar_t mb[100];
       int len;

       len = mblen(NULL, MB_CUR_MAX);

       mbtowc(mb, str, len*strlen(str) );

       wprintf(L"%ls n", mb );

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果，因为它要以多字节形式输出结果，这是一种二进制输出。

    ???
