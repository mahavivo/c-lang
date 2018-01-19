# C 库函数 – log()


## 描述

C 库函数 **double log(double x)** 返回 **x** 的自然对数（基数为 e 的对数）。

## 声明

下面是 log() 函数的声明。

    double log(double x)

## 参数

## 返回值

该函数返回 x 的自然对数。

## 实例

下面的实例演示了 log() 函数的用法。

    #include 
    #include 

    int main ()
    {
       double x, ret;
       x = 2.7;

       /* 计算 log(2.7) */
       ret = log(x);
       printf("log(%lf) = %lf", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    log(2.700000) = 0.993252