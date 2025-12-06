# C 库函数 – rename()


## 描述

C 库函数 **int rename(const char *old_filename, const char *new_filename)** 把 **old_filename** 所指向的文件名改为 **new_filename**。

## 声明

下面是 rename() 函数的声明。

    int rename(const char *old_filename, const char *new_filename)

## 参数

* **old_filename** \-- 这是 C 字符串，包含了要被重命名/移动的文件名称。
* **new_filename** \-- 这是 C 字符串，包含了文件的新名称。

## 返回值

如果成功，则返回零。如果错误，则返回 -1，并设置 errno。

## 实例

下面的实例演示了 rename() 函数的用法。

    #include 

    int main ()
    {
       int ret;
       char oldname[] = "file.txt";
       char newname[] = "newfile.txt";

       ret = rename(oldname, newname);

       if(ret == 0)
       {
          printf("文件重命名成功");
       }
       else
       {
          printf("错误：不能重命名该文件");
       }

       return(0);
    }

假设我们有一个文本文件 **file.txt**，它的内容如下。我们将使用上面的程序来重命名该文件。让我们编译并运行上面的程序，这将生成下面的消息，且文件被重命名为 **newfile.txt** 文件。

    文件重命名成功