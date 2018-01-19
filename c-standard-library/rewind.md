# C 库函数 – rewind()


## 描述

C 库函数 **void rewind(FILE *stream)** 设置文件位置为给定流 **stream** 的文件的开头。

## 声明

下面是 rewind() 函数的声明。

    void rewind(FILE *stream)

## 参数

* **stream** \-- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 rewind() 函数的用法。

    #include 

    int main()
    {
       char str[] = "This is jikexueyuan.com";
       FILE *fp;
       int ch;

       /* 首先让我们在文件中写入一些内容 */
       fp = fopen( "file.txt" , "w" );
       fwrite(str , 1 , sizeof(str) , fp );
       fclose(fp);

       fp = fopen( "file.txt" , "r" );
       while(1)
       {
          ch = fgetc(fp);
          if( feof(fp) )
          {
              break ;
          }
          printf("%c", ch);
       }
       rewind(fp);
       printf("n");
       while(1)
       {
          ch = fgetc(fp);
          if( feof(fp) )
          {
              break ;
          }
          printf("%c", ch);

       }
       fclose(fp);

       return(0);
    }

假设我们有一个文本文件 **file.txt**，它的内容如下：

    This is jikexueyuan.com

让我们编译并运行上面的程序，这将产生以下结果：

    This is jikexueyuan.com
    This is jikexueyuan.com