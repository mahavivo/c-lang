# C 库函数 – modf()


## 描述

C 库函数 **double modf(double x, double *integer)** 返回值为小数部分（小数点后的部分），并设置 integer 为整数部分。

## 声明

下面是 modf() 函数的声明。

    double modf(double x, double *integer)

## 参数

* **x** \-- 浮点值。
* **integer** \-- 指向一个对象的指针，该对象存储了整数部分。

## 返回值

该函数返回 x 的小数部分，符号与 x 相同。

## 实例

下面的实例演示了 modf() 函数的用法。

    #include
    #include

    int main ()
    {
       double x, fractpart, intpart;

       x = 8.123456;
       fractpart = modf(x, &intpart);

       printf("整数部分 = %lfn", intpart);
       printf("小数部分 = %lf n", fractpart);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    整数部分 = 8.000000
    小数部分 = 0.123456