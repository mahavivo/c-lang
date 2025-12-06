# C 库函数 – exit()


## 描述

C 库函数 **void exit(int status)** 立即终止调用进程。任何属于该进程的打开的文件描述符都会被关闭，该进程的子进程由进程 1 继承，初始化，且会向父进程发送一个 SIGCHLD 信号。

## 声明

下面是 exit() 函数的声明。

    void exit(int status)

## 参数

* **status** \-- 返回给父进程的状态值。

## 返回值

该函数不返回值。

## 实例

下面的实例演示了 exit() 函数的用法。

    #include 
    #include 

    int main ()
    {
       printf("程序的开头....n");

       printf("退出程序....n");
       exit(0);

       printf("程序的结尾....n");

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    程序的开头....
    退出程序....