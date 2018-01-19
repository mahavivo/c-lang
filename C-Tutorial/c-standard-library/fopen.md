# C 库函数 – fopen()


## 描述

C 库函数 **FILE *fopen(const char *filename, const char *mode)** 使用给定的模式 **mode** 打开 **filename** 所指向的文件。

## 声明

下面是 fopen() 函数的声明。

    FILE *fopen(const char *filename, const char *mode)

## 参数

* **filename** \-- 这是 C 字符串，包含了要打开的文件名称。
* **mode** \-- 这是 C 字符串，包含了文件访问模式，模式如下：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:5%">模式</th><th>描述</th></tr> <tr><td> "r" </td><td>打开一个用于读取的文件。该文件必须存在。</td></tr> <tr><td> "w" </td><td>创建一个用于写入的空文件。如果文件名称与已存在的文件相同，则会删除已有文件的内容，文件被视为一个新的空文件。</td></tr> <tr><td> "a" </td><td>追加到一个文件。写操作向文件末尾追加数据。如果文件不存在，则创建文件。</td></tr> <tr><td> "r+" </td><td>打开一个用于更新的文件，可读取也可写入。该文件必须存在。</td></tr> <tr><td> "w+" </td><td>创建一个用于读写的空文件。</td></tr> <tr><td> "a+" </td><td>打开一个用于读取和追加的文件。</td></tr> </table>

## 返回值

该函数返回一个 FILE 指针。否则返回 NULL，且设置全局变量 errno 来标识错误。

## 实例

下面的实例演示了 fopen() 函数的用法。

    #include 
    #include 

    int main()
    {
       FILE * fp;

       fp = fopen ("file.txt", "w+");
       fprintf(fp, "%s %s %s %d", "We", "are", "in", 2014);

       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建一个带有一下内容的文件 **file.txt**：

    We are in 2014

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