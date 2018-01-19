# C 库函数 – sinh()


## 描述

C 库函数 **double sinh(double x)** 返回 **x** 的双曲正弦。

## 声明

下面是 sinh() 函数的声明。

    double sinh(double x)

## 参数

## 返回值

该函数返回 x 的双曲正弦。

## 实例

下面的实例演示了 sinh() 函数的用法。

    #include 
    #include 

    int main ()
    {
       double x, ret;
       x = 0.5;

       ret = sinh(x);
       printf("%lf 的双曲正弦是 %lf 度", x, ret);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    0.500000 的双曲正弦是 0.521095 度