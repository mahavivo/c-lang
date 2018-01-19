# C 库宏 – va_end()


## 描述

C 库宏 **void va_end(va_list ap)** 允许使用了 **va_start** 宏的带有可变参数的函数返回。如果在从函数返回之前没有调用 **va_end**，则结果为未定义。

## 声明

下面是 va_end() 宏的声明。

    void va_end(va_list ap)

## 参数

* **ap** \-- 这是之前由同一函数中的 va_start 初始化的 va_list 对象。

## 返回值

该宏不返回任何值。

## 实例

下面的实例演示了 va_end() 宏的用法。

    #include 
    #include 

    int mul(int, ...);

    int main()
    {
       printf("15 * 12 = %dn",  mul(2, 15, 12) );

       return 0;
    }

    int mul(int num_args, ...)
    {
       int val = 1;
       va_list ap;
       int i;

       va_start(ap, num_args);
       for(i = 0; i < num_args; i++)
       {
          val *= va_arg(ap, int);
       }
       va_end(ap);

       return val;
    }

让我们编译并运行上面的程序，这将产生以下结果：

    15 * 12 =  180