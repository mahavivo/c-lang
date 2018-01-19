# C 库函数 – setvbuf()


## 描述

C 库函数 **int setvbuf(FILE *stream, char *buffer, int mode, size_t size)** 定义流 stream 应如何缓冲。

## 声明

下面是 setvbuf() 函数的声明。

    int setvbuf(FILE *stream, char *buffer, int mode, size_t size)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了一个打开的流。
* **buffer** \-- 这是分配给用户的缓冲。如果设置为 NULL，该函数会自动分配一个指定大小的缓冲。
* **mode** \-- 这指定了文件缓冲的模式：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:5%">模式</th><th>描述</th></tr> <tr><td>_IOFBF</td><td><b>全缓冲</b>：对于输出，数据在缓冲填满时被一次性写入。对于输入，缓冲会在请求输入且缓冲为空时被填充。</td></tr> <tr><td>_IOLBF</td><td><b>行缓冲</b>：对于输出，数据在遇到换行符或者在缓冲填满时被写入，具体视情况而定。对于输入，缓冲会在请求输入且缓冲为空时被填充，直到遇到下一个换行符。</td></tr> <tr><td>_IONBF</td><td><b>无缓冲</b>：不使用缓冲。每个 I/O 操作都被即时写入。buffer 和 size 参数被忽略。</td></tr> </table> <ul class="list"> <li>

* **size** \--这是缓冲的大小，以字节为单位。

## 返回值

如果成功，则该函数返回 0，否则返回非零值。

## 实例

下面的实例演示了 setvbuf() 函数的用法。

    #include 

    int main()
    {

       char buff[1024];

       memset( buff, '