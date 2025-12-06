# C 库函数 - difftime()


## 描述

C 库函数 double difftime(time_t time1, time_t time2) 返回 time1 和 time2 之间相差的秒数 (time1 - time2)。这两个时间是在日历时间中指定的，表示了自纪元 Epoch（协调世界时 UTC：1970-01-01 00:00:00）起经过的时间。

## 声明

下面是 difftime() 函数的声明。

    double difftime(time_t time1, time_t time2)

## 参数
- time1 -- 这是表示结束时间的 time_t 对象。
- time2 -- 这是表示开始时间的 time_t 对象。

## 返回值
该函数返回以双精度浮点型 double 值表示的两个时间之间相差的秒数 (time2 - time1)。

## 实例
下面的实例演示了 difftime() 函数的用法。

    #include <stdio.h>
    #include <time.h>

    int main ()
    {
       time_t start_t, end_t;
       double diff_t;

       printf("程序启动...\n");
       time(&start_t);

       printf("休眠 5 秒...\n");
       sleep(5);

       time(&end_t);
       diff_t = difftime(end_t, start_t);

       printf("执行时间 = %f\n", diff_t);
       printf("程序退出...\n");

       return(0);
    }
让我们编译并运行上面的程序，这将产生以下结果：

    程序启动...
    休眠 5 秒...
    执行时间 = 5.000000
    程序退出...