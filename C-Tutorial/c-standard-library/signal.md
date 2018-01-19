# C 库函数 – signal()

## 描述

C 库函数 **void (*signal(int sig, void (*func)(int)))(int)** 设置一个函数来处理信号，即带有 **sig** 参数的信号处理程序。

## 声明

下面是 signal() 函数的声明。

    void (*signal(int sig, void (*func)(int)))(int)

## 参数

* **sig** \-- 在信号处理程序中作为变量使用的信号码。下面是一些重要的标准信号常量：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:5%">宏</th><th>信号</th></tr> <tr><td>SIGABRT</td><td>(Signal Abort) 程序异常终止。</td></tr> <tr><td>SIGFPE</td><td>(Signal Floating-Point Exception) 算术运算出错，如除数为 0 或溢出（不一定是浮点运算）。</td></tr> <tr><td>SIGILL</td><td>(Signal Illegal Instruction) 非法函数映象，如非法指令，通常是由于代码中的某个变体或者尝试执行数据导致的。</td></tr> <tr><td>SIGINT</td><td>(Signal Interrupt) 中断信号，如 ctrl-C，通常由用户生成。</td></tr> <tr><td>SIGSEGV</td><td>(Signal Segmentation Violation) 非法访问存储器，如访问不存在的内存单元。</td></tr> <tr><td>SIGTERM</td><td>(Signal Terminate) 发送给本程序的终止请求信号。</td></tr> </table>

* **func** \-- 一个指向函数的指针。它可以是一个由程序定义的函数，也可以是下面预定义函数之一：

| ----- |
| SIG_DFL | 默认的信号处理程序。 |
| SIG_IGN | 忽视信号。 |

## 返回值

该函数返回信号处理程序之前的值，当发生错误时返回 SIG_ERR。

## 实例

下面的实例演示了 signal() 函数的用法。

    #include 
    #include 
    #include 
    #include 

    void sighandler(int);

    int main()
    {
       signal(SIGINT, sighandler);

       while(1)
       {
          printf("开始休眠一秒钟...n");
          sleep(1);
       }

       return(0);
    }

    void sighandler(int signum)
    {
       printf("捕获信号 %d，跳出...n", signum);
       exit(1);
    }

让我们编译并运行上面的程序，这将产生以下结果，且程序会进入无限循环，需使用 CTRL + C 键跳出程序。

    开始休眠一秒钟...
    开始休眠一秒钟...
    开始休眠一秒钟...
    开始休眠一秒钟...
    开始休眠一秒钟...
    捕获信号 2，跳出...
    