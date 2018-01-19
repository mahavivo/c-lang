# C 库函数 – sin()


## 描述

C 库函数 **double sin(double x)** 返回弧度角 **x** 的正弦。

## 声明

下面是 sin() 函数的声明。

    double sin(double x)

## 参数

* **x** \-- 浮点值，代表了一个以弧度表示的角度。

## 返回值

该函数返回 x 的正弦。

## 实例

下面的实例演示了 sin() 函数的用法。

    #include 
    #include 

    #define PI 3.14159265

    int main ()
    {
       double x, ret, val;

       x = 45.0;
       val = PI / 180;
       ret = sin(x*val);
       printf("%lf 的正弦是 %lf 度", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    45.000000 的正弦是 0.707107 度