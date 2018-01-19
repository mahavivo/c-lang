# C 库宏 – ERANGE


## 描述

C 库宏 **ERANGE** 表示一个范围错误，它在输入参数超出数学函数定义的范围时发生，errno 被设置为 ERANGE。

## 声明

下面是 ERANGE 宏的声明。

    #define ERANGE some_value

## 参数

## 返回值

## 实例

下面的实例演示了 ERANGE 宏的用法。

    #include 
    #include 
    #include 

    int main()
    {
       double x;
       double value;

       x = 1.000000;
       value = log(x);
       if( errno == ERANGE )
       {
          printf("Log(%f) is out of rangen", x);
       }
       else
       {
          printf("Log(%f) = %fn", x, value);
       }

       x = 0.000000;
       value = log(x);
       if( errno == ERANGE )
       {
          printf("Log(%f) is out of rangen" x);
       }
       else
       {
          printf("Log(%f) = %fn", x, value);
       }

       return 0;
    }

让我们编译并运行上面的程序，这将产生以下结果：

    Log(1.000000) = 1.609438
    Log(0.000000) is out of range
