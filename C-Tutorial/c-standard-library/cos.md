# C 库函数 – cos()


## 描述

C 库函数 **double cos(double x)** 返回弧度角 **x** 的余弦。

## 声明

下面是 cos() 函数的声明。

    double cos(double x)

## 参数

* **x** \-- 浮点值，代表了一个以弧度表示的角度。

## 返回值

该函数返回 x 的余弦。

## 实例

下面的实例演示了 cos() 函数的用法。

    #include 
    #include 

    #define PI 3.14159265

    int main ()
    {
       double x, ret, val;

       x = 60.0;
       val = PI / 180.0;
       ret = cos( x*val );
       printf("%lf 的余弦是 %lf 度n", x, ret);

       x = 90.0;
       val = PI / 180.0;
       ret = cos( x*val );
       printf("%lf 的余弦是 %lf 度n", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    60.000000 的余弦是 0.500000 度
    90.000000 的余弦是 0.000000 度