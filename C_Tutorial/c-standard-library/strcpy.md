# C 库函数 – strcpy()

## 描述

C 库函数 **char *strcpy(char *dest, const char *src)** 把 **src** 所指向的字符串复制到 **dest**。

## 声明

下面是 strcpy() 函数的声明。

    char *strcpy(char *dest, const char *src)

## 参数

* **dest** \-- 指向用于存储复制内容的目标数组。
* **src** \-- 要复制的字符串。

## 返回值

该函数返回一个指向最终的目标字符串 dest 的指针。

## 实例

下面的实例演示了 strcpy() 函数的用法。

    #include 
    #include 

    int main()
    {
       char src[40];
       char dest[100];

       memset(dest, '