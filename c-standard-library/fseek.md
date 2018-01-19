# C 库函数 – fseek()


## 描述

C 库函数 **int fseek(FILE *stream, long int offset, int whence)** 设置流 **stream** 的文件位置为给定的偏移 **offset**，参数 offset 意味着从给定的 **whence** 位置查找的字节数。

## 声明

下面是 fseek() 函数的声明。

    int fseek(FILE *stream, long int offset, int whence)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。
* **offset** \-- 这是相对 whence 的偏移量，以字节为单位。
* **whence** \-- 这是表示开始添加偏移 offset 的位置。它一般指定为下列常量之一：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:4%">常量</th><th>描述</th></tr> <tr><td>SEEK_SET</td><td>文件的开头</td></tr> <tr><td>SEEK_CUR</td><td>文件指针的当前位置</td></tr> <tr><td>SEEK_END</td><td>文件的末尾</td></tr> </table>

## 返回值

如果成功，则该函数返回零，否则返回非零值。

## 实例

下面的实例演示了 fseek() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;

       fp = fopen("file.txt","w+");
       fputs("This is jikexueyuan.com", fp);

       fseek( fp, 7, SEEK_SET );
       fputs(" C Programming Langauge", fp);
       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建文件 **file.txt**，它的内容如下。最初程序创建文件和写入 _This is jikexueyuan.com_，但是之后我们在第七个位置重置了写指针，并使用 puts() 语句来重写文件，内容如下：

    This is C Programming Langauge

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