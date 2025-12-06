# C 库函数 – fsetpos()


## 描述

C 库函数 **int fsetpos(FILE *stream, const fpos_t *pos)** 设置给定流 **stream** 的文件位置为给定的位置。参数 **pos** 是由函数 fgetpos 给定的位置。

## 声明

下面是 fsetpos() 函数的声明。

    int fsetpos(FILE *stream, const fpos_t *pos)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。
* **pos** \-- 这是指向 fpos_t 对象的指针，该对象包含了之前通过 fgetpos 获得的位置。

## 返回值

如果成功，该函数返回零值，否则返回非零值，并设置全局变量 **errno** 为一个正值，该值可通过 perror 来解释。

## 实例

下面的实例演示了 fsetpos() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;
       fpos_t position;

       fp = fopen("file.txt","w+");
       fgetpos(fp, &position);
       fputs("Hello, World!", fp);

       fsetpos(fp, &position);
       fputs("这将覆盖之前的内容", fp);
       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建一个文件 **file.txt**，它的内容如下。首先我们使用 **fgetpos()** 函数获取文件的初始位置，接着我们向文件写入 _Hello, World!_，然后我们使用 **fsetpos()** 函数来重置写指针到文件的开头，重写文件为下列内容：

    这将覆盖之前的内容

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