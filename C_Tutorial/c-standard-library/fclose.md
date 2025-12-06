# C 库函数 – fclose()


## 描述

C 库函数 **int fclose(FILE *stream)** 关闭流 stream。刷新所有的缓冲区。

## 声明

下面是 fclose() 函数的声明。

    int fclose(FILE *stream)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象指定了要被关闭的流。

## 返回值

如果流成功关闭，则该方法返回零。如果失败，则返回 EOF。

## 实例

下面的实例演示了 fclose() 函数的用法。

    #include 

    int main()
    {
       FILE *fp;

       fp = fopen("file.txt", "w");

       fprintf(fp, "%s", "这里是 jikexueyuan.com");
       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建一个文件 **file.txt**，然后写入下面的文本行，最后使用 **fclose()** 函数关闭文件。

    这里是 jikexueyuan.com