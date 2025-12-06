# C 库函数 – abs()


## 描述

C 库函数 **int abs(int x)** 返回 **x** 的绝对值。

## 声明

下面是 abs() 函数的声明。

    int abs(int x)

## 参数

## 返回值

该函数返回 x 的绝对值。

## 实例

下面的实例演示了 abs() 函数的用法。

    #include 
    #include 

    int main ()
    {
       int a, b;

       a = abs(5);
       printf("a 的值 = %dn", a);

       b = abs(-10);
       printf("b 的值 = %dn", b);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    a 的值 = 5
    b 的值 = 10