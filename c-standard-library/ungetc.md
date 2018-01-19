jikexueyuan# C 库函数 – ungetc()


## 描述

C 库函数 **int ungetc(int char, FILE *stream)** 把字符 **char**（一个无符号字符）推入到指定的流 **stream** 中，以便它是下一个被读取到的字符。

## 声明

下面是 ungetc() 函数的声明。

    int ungetc(int char, FILE *stream)

## 参数

* **char** \-- 这是要被推入的字符。该字符以其对应的 int 值进行传递。
* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了输入流。

## 返回值

如果成功，则返回被推入的字符，否则返回 EOF，且流 stream 保持不变。

## 实例

下面的实例演示了 ungetc() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;
       int c;
       char buffer [256];

       fp = fopen("file.txt", "r");
       if( fp == NULL )
       {
          perror("打开文件时发生错误");
          return(-1);
       }
       while(!feof(fp))
       {
          c = getc (fp);
          /* 把 ! 替换为 + */
          if( c == '!' )
          {
             ungetc ('+', fp);
          }
          else
          {
             ungetc(c, fp);
          }
          fgets(buffer, 255, fp);
          fputs(buffer, stdout);
       }
       return(0);
    }

假设我们有一个文本文件 **file.txt**，它的内容如下。文件将作为实例中的输入：

    this is jikexueyuan
    !c standard library
    !library functions and macros

让我们编译并运行上面的程序，这将产生以下结果：

    this is jikexueyuan
    +c standard library
    +library functions and macros
    +library functions and macros