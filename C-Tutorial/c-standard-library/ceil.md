# C 库函数 – ceil()


## 描述

C 库函数 **double ceil(double x)** 返回大于或等于 **x** 的最小的整数值。

## 声明

下面是 ceil() 函数的声明。

    double ceil(double x)

## 参数

## 返回值

该函数返回不小于 x 的最小整数值。

## 实例

下面的实例演示了 ceil() 函数的用法。

    #include 
    #include 

    int main ()
    {
       float val1, val2, val3, val4;

       val1 = 1.6;
       val2 = 1.2;
       val3 = 2.8;
       val4 = 2.3;

       printf ("value1 = %.1lfn", ceil(val1));
       printf ("value2 = %.1lfn", ceil(val2));
       printf ("value3 = %.1lfn", ceil(val3));
       printf ("value4 = %.1lfn", ceil(val4));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    value1 = 2.0
    value2 = 2.0
    value3 = 3.0
    value4 = 3.0