# C 库函数 – system()


## 描述

C 库函数 **int system(const char *command)** 把 **command** 指定的命令名称或程序名称传给要被命令处理器执行的主机环境，并在命令完成后返回。

## 声明

下面是 system() 函数的声明。

    int system(const char *command)

## 参数

* **command** \-- 包含被请求变量名称的 C 字符串。

## 返回值

如果发生错误，则返回值为 -1，否则返回命令的状态。

## 实例

下面的实例演示了 system() 函数的用法，列出了 unix 机上当前目录下所有的文件和目录。

    #include 
    #include 

    int main ()
    {
       char command[50];

       strcpy( command, "ls -l" );
       system(command);

       return(0);
    }

让我们编译并运行上面的程序，在 unix 机上将产生以下结果：

    drwxr-xr-x 2 apache apache 4096 Aug 22 07:25 hsperfdata_apache
    drwxr-xr-x 2 railo railo 4096 Aug 21 18:48 hsperfdata_railo
    rw------ 1 apache apache 8 Aug 21 18:48 mod_mono_dashboard_XXGLOBAL_1
    rw------ 1 apache apache 8 Aug 21 18:48 mod_mono_dashboard_asp_2
    srwx---- 1 apache apache 0 Aug 22 05:28 mod_mono_server_asp
    rw------ 1 apache apache 0 Aug 22 05:28 mod_mono_server_asp_1280495620
    srwx---- 1 apache apache 0 Aug 21 18:48 mod_mono_server_global

下面的实例演示了 system() 函数的用法，列出了 windows 机上当前目录下所有的文件和目录。

    #include 
    #include 

    int main ()
    {
       char command[50];

       strcpy( command, "dir" );
       system(command);

       return(0);
    }

让我们编译并运行上面的程序，在 windows 机上将产生以下结果：

    a.txt
    amit.doc
    sachin
    saurav
    file.c