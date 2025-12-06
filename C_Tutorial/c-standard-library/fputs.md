# C 库函数 – fputs()


## 描述

C 库函数 **int fputs(const char *str, FILE *stream)** 把字符串写入到指定的流 stream 中，但不包括空字符。

## 声明

下面是 fputs() 函数的声明。

    int fputs(const char *str, FILE *stream)

## 参数

* **str** \-- 这是一个数组，包含了要写入的以空字符终止的字符序列。
* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了要被写入字符串的流。

## 返回值

该函数返回一个非负值，如果发生错误则返回 EOF。

## 实例

下面的实例演示了 fputs() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;

       fp = fopen("file.txt", "w+");

       fputs("这是 C 语言。", fp);
       fputs("这是一种系统程序设计语言。", fp);

       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建文件 **file.txt**，它的内容如下：

    这是 C 语言。这是一种系统程序设计语言。

现在让我们使用下面的程序查看上面文件的内容：

    #include 

    int main ()
    {
       FILE *fp;
       int c;

       fp = fopen("file.txt","r");
       while(1)
       {
          c = fgetc(fp);
          if( feof(fp) )
          {
              break ;
          }
          printf("%c", c);
       }
       fclose(fp);
       return(0);
    }