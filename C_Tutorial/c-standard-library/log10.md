# C 库函数 – log10()


## 描述

C 库函数 **double log10(double x)** 返回 **x** 的常用对数（基数为 10 的对数）。

## 声明

下面是 log10() 函数的声明。

    double log10(double x)

## 参数

## 返回值

该函数返回 x 的常用对数，x 的值大于 0。

## 实例

下面的实例演示了 log10() 函数的用法。

    #include 
    #include 

    int main ()
    {
       double x, ret;
       x = 10000;

       /* 计算 log10(10000) */
       ret = log10(x);
       printf("log10(%lf) = %lfn", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    log10(10000.000000) = 4.000000