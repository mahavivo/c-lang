# C 库函数 – asin()


## 描述

C 库函数 **double asin(double x)** 返回以弧度表示的 **x** 的反正弦。

## 声明

下面是 asin() 函数的声明。

    double asin(double x)

## 参数

* **x** \-- 介于 [-1,+1] 区间的浮点值。

## 返回值

该函数返回以弧度表示的 x 的反正弦，弧度区间为 [-pi/2,+pi/2]。

## 实例

下面的实例演示了 asin() 函数的用法。

    #include 
    #include 

    #define PI 3.14159265

    int main ()
    {
       double x, ret, val;
       x = 0.9;
       val = 180.0 / PI;

       ret = asin(x) * val;
       printf("%lf 的反正弦是 %lf 度", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    0.900000 的反正弦是 64.190609 度