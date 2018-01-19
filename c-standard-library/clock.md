# C 库函数 – clock()


## 描述

C 库函数 **clock_t clock(void)** 返回程序执行起（一般为程序的开头），处理器时钟所使用的时间。为了获取 CPU 所使用的秒数，您需要除以 CLOCKS_PER_SEC。

在 32 位系统中，CLOCKS_PER_SEC 等于 1000000，该函数大约每 72 分钟会返回相同的值。

## 声明

下面是 clock() 函数的声明。

    clock_t clock(void)

## 参数

## 返回值

该函数返回自程序启动起，处理器时钟所使用的时间。如果失败，则返回 -1 值。

## 实例

下面的实例演示了 clock() 函数的用法。

    #include 
    #include 

    int main()
    {
       clock_t start_t, end_t, total_t;
       int i;

       start_t = clock();
       printf("程序启动，start_t = %ldn", start_t);

       printf("开始一个大循环，start_t = %ldn", start_t);
       for(i=0; i< 10000000; i++)
       {
       }
       end_t = clock();
       printf("大循环结束，end_t = %ldn", end_t);

       total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
       printf("CPU 占用的总时间：%fn", total_t  );
       printf("程序退出...n");

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    程序启动，start_t = 0
    开始一个大循环，start_t = 0
    大循环结束，end_t = 20000
    CPU 占用的总时间：0.000000
    程序退出...