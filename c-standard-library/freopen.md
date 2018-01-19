# C 库函数 – freopen()


## 描述

C 库函数 **FILE *freopen(const char *filename, const char *mode, FILE *stream)** 把一个新的文件名 **filename** 与给定的打开的流 **stream** 关联，同时关闭流中的旧文件。

## 声明

下面是 freopen() 函数的声明。

    FILE *freopen(const char *filename, const char *mode, FILE *stream)

## 参数

* **filename** \-- 这是 C 字符串，包含了要打开的文件名称。
* **mode** \-- 这是 C 字符串，包含了文件访问模式，模式如下：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:5%">模式</th><th>描述</th></tr> <tr><td> "r" </td><td>打开一个用于读取的文件。该文件必须存在。</td></tr> <tr><td> "w" </td><td>创建一个用于写入的空文件。如果文件名称与已存在的文件相同，则会删除已有文件的内容，文件被视为一个新的空文件。</td></tr> <tr><td> "a" </td><td>追加到一个文件。写操作向文件末尾追加数据。如果文件不存在，则创建文件。</td></tr> <tr><td> "r+" </td><td>打开一个用于更新的文件，可读取也可写入。该文件必须存在。</td></tr> <tr><td> "w+" </td><td>创建一个用于读写的空文件。</td></tr> <tr><td> "a+" </td><td>打开一个用于读取和追加的文件。</td></tr> </table> <ul class="list"> <li>
* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了要被重新打开的流。

## 返回值

如果文件成功打开，则函数返回一个指针，指向用于标识流的对象。否则，返回空指针。

## 实例

下面的实例演示了 freopen() 函数的用法。

    #include 

    int main ()
    {
       FILE *fp;

       printf("该文本重定向到 stdoutn");

       fp = freopen("file.txt", "w+", stdout);

       printf("该文本重定向到 file.txtn");

       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将发送下列行到标准输出 STDOUT，因为起初我们并没有打开标准输出：

    该文本重定向到 stdout

在调用 **freopen()** 之后，它会关联标准输出 STDOUT 到文件 **file.txt**，无论我们在标准输出 STDOUT 中写了什么都会被写入 file.txt，所以文件 file.txt 将有以下内容。

    该文本重定向到 file.txt

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