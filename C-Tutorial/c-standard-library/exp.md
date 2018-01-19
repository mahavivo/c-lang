# C 库函数 – exp()


## 描述

C 库函数 **double exp(double x)** 返回 **e** 的 **x** 次幂的值。

## 声明

下面是 exp() 函数的声明。

    double exp(double x)

## 参数

## 返回值

该函数返回 e 的 x 次幂。

## 实例

下面的实例演示了 exp() 函数的用法。

    #include 
    #include 

    int main ()
    {
       double x = 0;

       printf("e 的 %lf 次幂是 %lfn", x, exp(x));
       printf("e 的 %lf 次幂是 %lfn", x+1, exp(x+1));
       printf("e 的 %lf 次幂是 %lfn", x+2, exp(x+2));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    e 的 0.000000 次幂是 1.000000
    e 的 1.000000 次幂是 2.718282
    e 的 2.000000 次幂是 7.389056