# C 库函数 – atan()


## 描述

C 库函数 **double atan(double x)** 返回以弧度表示的 **x** 的反正切。

## 声明

下面是 atan() 函数的声明。

    double atan(double x)

## 参数

## 返回值

该函数返回以弧度表示的 x 的反正切，弧度区间为 [-pi/2,+pi/2]。

## 实例

下面的实例演示了 atan() 函数的用法。

    #include 
    #include 

    #define PI 3.14159265

    int main ()
    {
       double x, ret, val;
       x = 1.0;
       val = 180.0 / PI;

       ret = atan (x) * val;
       printf("%lf 的反正切是 %lf 度", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    1.000000 的反正切是 45.000000 度