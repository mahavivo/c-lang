# C 库函数 – floor()


## 描述

C 库函数 **double floor(double x)** 返回小于或等于 **x** 的最大的整数值。

## 声明

下面是 floor() 函数的声明。

    double floor(double x)

## 参数

## 返回值

该函数返回不大于 x 的最大整数值。

## 实例

下面的实例演示了 floor() 函数的用法。

    #include 
    #include 

    int main ()
    {
       float val1, val2, val3, val4;

       val1 = 1.6;
       val2 = 1.2;
       val3 = 2.8;
       val4 = 2.3;

       printf("Value1 = %.1lfn", floor(val1));
       printf("Value2 = %.1lfn", floor(val2));
       printf("Value3 = %.1lfn", floor(val3));
       printf("Value4 = %.1lfn", floor(val4));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    Value1 = 1.0
    Value2 = 1.0
    Value3 = 2.0
    Value4 = 2.0