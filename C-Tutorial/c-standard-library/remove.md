jikexueyuan# C 库函数 – remove()


## 描述

C 库函数 **int remove(const char *filename)** 删除给定的文件名 **filename**，以便它不再被访问。

## 声明

下面是 remove() 函数的声明。

    int remove(const char *filename)

## 参数

* **filename** \-- 这是 C 字符串，包含了要被删除的文件名称。

## 返回值

如果成功，则返回零。如果错误，则返回 -1，并设置 errno。

## 实例

下面的实例演示了 remove() 函数的用法。

    #include 
    #include 

    int main ()
    {
       int ret;
       FILE *fp;
       char filename[] = "file.txt";

       fp = fopen(filename, "w");

       fprintf(fp, "%s", "这里是 jikexueyuan.com");
       fclose(fp);

       ret = remove(filename);

       if(ret == 0)
       {
          printf("文件删除成功");
       }
       else
       {
          printf("错误：不能删除该文件");
       }

       return(0);
    }

假设我们有一个文本文件 **file.txt**，它的内容如下。我们将使用上面的程序来删除该文件。让我们编译并运行上面的程序，这将生成下面的消息，且文件被永久删除。

    文件删除成功