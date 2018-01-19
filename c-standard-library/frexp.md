# C 库函数 – frexp()



## 描述

C 库函数 **double frexp(double x, int *exponent)** 把浮点数 x 分解成尾数和指数。返回值是尾数，并将指数存入 **exponent** 中。所得的值是 **x = mantissa * 2 ^ exponent**。

## 声明

下面是 frexp() 函数的声明。

    double frexp(double x, int *exponent)

## 参数

* **x** \-- 要被计算的浮点值。
* **exponent** \-- 指向一个对象的指针，该对象存储了指数的值。

## 返回值

该函数返回规格化小数。如果参数 x 不为零，则规格化小数是 x 的二次方，且它的绝对值范围从 1/2（包含）到 1（不包含）。如果 x 为零，则规格化小数是零，且零存储在 exp 中。

## 实例

下面的实例演示了 frexp() 函数的用法。

    #include 
    #include 

    int main ()
    {
       double x = 1024, fraction;
       int e;

       fraction = frexp(x, &e);
       printf("x = %.2lf = %.2lf * 2^%dn", x, fraction, e);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    x = 1024.00 = 0.50 * 2^11