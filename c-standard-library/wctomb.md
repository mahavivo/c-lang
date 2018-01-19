# C 库函数 – wctomb()


## 描述

C 库函数 **int wctomb(char *str, wchar_t wchar)** 把宽字符 **wchar** 转换为它的多字节表示形式，并把它存储在 **str** 指向的字符数组的开头。

## 声明

下面是 wctomb() 函数的声明。

    int wctomb(char *str, wchar_t wchar)

## 参数

* **str** \-- 一个指针，指向一个足以存储多字节字符的数组。
* **wchar** \-- 类型为 wchar_t 的宽字符。

## 返回值

* 如果 str 不为 NULL，wctomb() 函数返回写入字节数组中的字节数。如果 wchar 不能被表示为一个多字节序列，则会返回 -1。
* 如果 str 为 NULL，如果编码具有移位状态，则 wctomb() 函数返回非零，如果编码是无状态的，则返回零。

## 实例

下面的实例演示了 wctomb() 函数的用法。

    #include 
    #include 

    int main()
    {
       int i;
       wchar_t wc = L'a';
       char *pmbnull = NULL;
       char *pmb = (char *)malloc(sizeof( char ));

       printf("要转换的宽字符：n");
       i = wctomb( pmb, wc );
       printf("被转换的字符：%un", i);
       printf("多字节字符：%.1sn", pmb);

       printf("当要转换的字符为 NULL 时尝试转换：n");
       i = wctomb( pmbnull, wc );
       printf("被转换的字符：%un", i);
       /* 不会输出任何值 */
       printf("多字节字符：%.1sn", pmbnull);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    要转换的宽字符：
    被转换的字符：1
    多字节字符：a
    当要转换的字符为 NULL 时尝试转换：
    被转换的字符：0
    多字节字符：