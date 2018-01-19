# C 库函数 – sqrt()


## 描述

C 库函数 **double sqrt(double x)** 返回 **x** 的平方根。

## 声明

下面是 sqrt() 函数的声明。

    double sqrt(double x)

## 参数

## 返回值

该函数返回 x 的平方根。

## 实例

下面的实例演示了 sqrt() 函数的用法。

    #include 
    #include 

    int main ()
    {

       printf("%lf 的平方根是 %lfn", 4.0, sqrt(4.0) );
       printf("%lf 的平方根是 %lfn", 5.0, sqrt(5.0) );

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    4.000000 的平方根是 2.000000
    5.000000 的平方根是 2.236068