# C 库函数 – ldexp()


## 描述

C 库函数 **double ldexp(double x, int exponent)** 返回 **x** 乘以 2 的 **exponent** 次幂。

## 声明

下面是 ldexp() 函数的声明。

    double ldexp(double x, int exponent)

## 参数

* **x** \-- 代表有效位数的浮点值。
* **exponent** \-- 指数的值。

## 返回值

该函数返回 x * 2 exp。

## 实例

下面的实例演示了 ldexp() 函数的用法。

    #include 
    #include 

    int main ()
    {
       double x, ret;
       int n;

       x = 0.65;
       n = 3;
       ret = ldexp(x ,n);
       printf("%f * 2^%d = %fn", x, n, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    0.650000 * 2^3 = 5.200000