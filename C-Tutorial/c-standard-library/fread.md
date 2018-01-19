jikexueyuan# C 库函数 – fread()


## 描述

C 库函数 **size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)** 从给定流 **stream** 读取数据到 **ptr** 所指向的数组中。

## 声明

下面是 fread() 函数的声明。

    size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)

## 参数

* **ptr** \-- 这是指向带有最小尺寸 _size*nmemb_ 字节的内存块的指针。
* **size** \-- 这是要读取的每个元素的大小，以字节为单位。
* **nmemb** \-- 这是元素的个数，每个元素的大小为 size 字节。
* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。

## 返回值

成功读取的元素总数会以 size_t 对象返回，size_t 对象是一个整型数据类型。如果总数与 nmemb 参数不同，则可能发生了一个错误或者到达了文件末尾。

## 实例

下面的实例演示了 fread() 函数的用法。

    #include 
    #include 

    int main()
    {
       FILE *fp;
       char c[] = "This is jikexueyuan";
       char buffer[20];

       /* 打开文件用于读写 */
       fp = fopen("file.txt", "w+");

       /* 写入数据到文件 */
       fwrite(c, strlen(c) + 1, 1, fp);

       /* 查找文件的开头 */
       fseek(fp, SEEK_SET, 0);

       /* 读取并显示数据 */
       fread(buffer, strlen(c)+1, 1, fp);
       printf("%sn", buffer);
       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建一个文件 **file.txt**，然后写入内容 _this is jikexueyuan_。接下来我们使用 **fseek()** 函数来重置写指针到文件的开头，文件内容如下所示：

    This is jikexueyuan