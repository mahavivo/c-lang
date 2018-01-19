# C 库函数 – atexit()


## 描述

C 库函数 **int atexit(void (*func)(void))** 当程序正常终止时，调用指定的函数 **func**。您可以在任何地方注册你的终止函数，但它会在程序终止的时候被调用。

## 声明

下面是 atexit() 函数的声明。

    int atexit(void (*func)(void))

## 参数

* **func** \-- 在程序终止时被调用的函数。

## 返回值

如果函数成功注册，则该函数返回零，否则返回一个非零值。

## 实例

下面的实例演示了 atexit() 函数的用法。

    #include 
    #include 

    void functionA ()
    {
       printf("这是函数An");
    }

    int main ()
    {
       /* 注册终止函数 */
       atexit(functionA );

       printf("启动主程序...n");

       printf("退出主程序...n");

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    启动主程序...
    退出主程序...
    这是函数A