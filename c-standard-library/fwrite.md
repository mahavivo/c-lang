# C 库函数 – fwrite


## 描述

C 库函数 **size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)** 把 **ptr** 所指向的数组中的数据写入到给定流 **stream** 中。

## 声明

下面是 fwrite() 函数的声明。

    size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)

## 参数

* **ptr** \-- 这是指向要被写入的元素数组的指针。
* **size** \-- 这是要被写入的每个元素的大小，以字节为单位。
* **nmemb** \-- 这是元素的个数，每个元素的大小为 size 字节。
* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输出流。

## 返回值

如果成功，该函数返回一个 size_t 对象，表示元素的总数，该对象时一个整型数据类型。如果该数字与 nmemb 参数不同，则会显示一个错误。

## 实例

下面的实例演示了 fwrite() 函数的用法。

    #include

    int main ()
    {
       FILE *fp;
       char str[] = "This is jikexueyuan.com";

       fp = fopen( "file.txt" , "w" );
       fwrite(str , 1 , sizeof(str) , fp );

       fclose(fp);

       return(0);
    }

让我们编译并运行上面的程序，这将创建一个文件 **file.txt**，它的内容如下：

    This is jikexueyuan.com

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