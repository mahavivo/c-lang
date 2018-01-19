# C 库函数 – atan2()

## 描述

C 库函数 **double atan2(doubly y, double x)** 返回以弧度表示的 **y/x** 的反正切。y 和 x 的值的符号决定了正确的象限。

## 声明

下面是 atan2() 函数的声明。

    double atan2(doubly y, double x)

## 参数

* **x** \-- 代表 x 轴坐标的浮点值。
* **y** \-- 代表 y 轴坐标的浮点值。

## 返回值

该函数返回以弧度表示的 y/x 的反正切，弧度区间为 [-pi,+pi]。

## 实例

下面的实例演示了 atan2() 函数的用法。

    #include 
    #include 

    #define PI 3.14159265

    int main ()
    {
       double x, y, ret, val;

       x = -7.0;
       y = 7.0;
       val = 180.0 / PI;

       ret = atan2 (y,x) * val;
       printf("x = %lf, y = %lf 的反正切", x, y);
       printf("是 %lf 度n", ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    x = -7.000000, y = 7.000000 的反正切是 135.000000 度