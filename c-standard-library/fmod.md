# C 库函数 – fmod()


## 描述

C 库函数 **double fmod(double x, double y)** 返回 **x** 除以 **y** 的余数。

## 声明

下面是 fmod() 函数的声明。

    double fmod(double x, double y)

## 参数

* **x** \-- 代表分子的浮点值。
* **y** \-- 代表分母的浮点值。

## 返回值

该函数返回 x/y 的余数。

## 实例

下面的实例演示了 fmod() 函数的用法。

    #include 
    #include 

    int main ()
    {
       float a, b;
       int c;
       a = 9.2;
       b = 3.7;
       c = 2;
       printf("%f / %d 的余数是 %lfn", a, c, fmod(a,c));
       printf("%f / %f 的余数是 %lfn", a, b, fmod(a,b));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    9.200000 / 2 的余数是 1.200000
    9.200000 / 3.700000 的余数是 1.800000