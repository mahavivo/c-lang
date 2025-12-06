# C 库函数 – memset()


## 描述

C 库函数 **void *memset(void *str, int c, size_t n)** 复制字符 **c**（一个无符号字符）到参数 **str** 所指向的字符串的前 **n** 个字符。

## 声明

下面是 memset() 函数的声明。

    void *memset(void *str, int c, size_t n)

## 参数

* **str** \-- 指向要填充的内存块。
* **c** \-- 要被设置的值。该值以 int 形式传递，但是函数在填充内存块时是使用该值的无符号字符形式。
* **n** \-- 要被设置为该值的字节数。

## 返回值

该值返回一个指向存储区 str 的指针。

## 实例

下面的实例演示了 memset() 函数的用法。

    #include 
    #include 

    int main ()
    {
       char str[50];

       strcpy(str,"This is string.h library function");
       puts(str);

       memset(str,'$',7);
       puts(str);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    This is string.h library function
    $$$$$$$ string.h library function