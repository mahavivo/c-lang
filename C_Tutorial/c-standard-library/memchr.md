jikexueyuan# C 库函数 – memchr()


## 描述

C 库函数 **void *memchr(const void *str, int c, size_t n)** 在参数 **str** 所指向的字符串的前 **n** 个字节中搜索第一次出现字符 **c**（一个无符号字符）的位置。

## 声明

下面是 memchr() 函数的声明。

    void *memchr(const void *str, int c, size_t n)

## 参数

* **str** \-- 指向要执行搜索的内存块。
* **c** \-- 以 int 形式传递的值，但是函数在每次字节搜索时是使用该值的无符号字符形式。
* **n** \-- 要被分析的字节数。

## 返回值

该函数返回一个指向匹配字节的指针，如果在给定的内存区域未出现字符，则返回 NULL。

## 实例

下面的实例演示了 memchr() 函数的用法。

    #include 
    #include 

    int main ()
    {
       const char str[] = "http://www.jikexueyuan.com";
       const char ch = '.';
       char *ret;

       ret = memchr(str, ch, strlen(str));

       printf("|%c| 之后的字符串是 - |%s|n", ch, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    |.| 之后的字符串是 - |.jikexueyuan.com|