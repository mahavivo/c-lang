# C 库函数 – putc()


## 描述

C 库函数 **int putc(int char, FILE *stream)** 把参数 **char** 指定的字符（一个无符号字符）写入到指定的流 stream 中，并把位置标识符往前移动。

## 声明

下面是 putc() 函数的声明。

    int putc(int char, FILE *stream)

## 参数

* **char** \-- 这是要被写入的字符。该字符以其对应的 int 值进行传递。
* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了要被写入字符的流。

## 返回值

该函数以无符号 char 强制转换为 int 的形式返回写入的字符，如果发生错误则返回 EOF。

## 实例

下面的实例演示了 putc() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;
       int ch;

       fp = fopen("file.txt", "w");
       for( ch = 33 ; ch <= 100; ch++ )
       {
          putc(ch, fp);
       }
       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将在当前目录中创建文件 **file.txt**，它的内容如下：

    !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcd

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