# C 库函数 – labs()


## 描述

C 库函数 **long int labs(long int x)** 返回 **x** 的绝对值。

## 声明

下面是 labs() 函数的声明。

    long int labs(long int x)

## 参数

## 返回值

该函数返回 x 的绝对值。

## 实例

下面的实例演示了 labs() 函数的用法。

    #include 
    #include 

    int main ()
    {
       long int a,b;

       a = labs(65987L);
       printf("a 的值 = %ldn", a);

       b = labs(-1005090L);
       printf("b 的值 = %ldn", b);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    a 的值 = 65987
    b 的值 = 1005090