# C 库函数 – fflush()


## 描述

C 库函数 **int fflush(FILE *stream)** 刷新流 stream 的输出缓冲区。

## 声明

下面是 fflush() 函数的声明。

    int fflush(FILE *stream)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个缓冲流。

## 返回值

如果成功，该函数返回零值。如果发生错误，则返回 EOF，且设置错误标识符（即 feof）。

## 实例

下面的实例演示了 fflush() 函数的用法。

    #include 
    #include 

    int main()
    {

       char buff[1024];

       memset( buff, '