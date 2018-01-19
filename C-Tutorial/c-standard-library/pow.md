# C 库函数 – pow()


## 描述

C 库函数 **double pow(double x, double y)** 返回 **x** 的 **y** 次幂，即 xy。

## 声明

下面是 pow() 函数的声明。

    double pow(double x, double y)

## 参数

* **x** \-- 代表基数的浮点值。
* **y** \-- 代表指数的浮点值。

## 返回值

该函数返回 x 的 y 次幂的结果。

## 实例

下面的实例演示了 pow() 函数的用法。

    #include 
    #include 

    int main ()
    {
       printf("值 8.0 ^ 3 = %lfn", pow(8.0, 3));

       printf("值 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    值 8.0 ^ 3 = 512.000000
    值 3.05 ^ 1.98 = 9.097324