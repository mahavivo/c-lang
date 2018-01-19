# C 库函数 – localtime()


## 描述

C 库函数 **struct tm *localtime(const time_t *timer)** 使用 timer 的值来填充 **tm** 结构。**timer** 的值被分解为 **tm** 结构，并用本地时区表示。

## 声明

下面是 localtime() 函数的声明。

    struct tm *localtime(const time_t *timer)

## 参数

* **timer** \-- 这是指向表示日历时间的 time_t 值的指针。

## 返回值

该函数返回指向 **tm** 结构的指针，该结构带有被填充的时间信息。下面是 tm 结构的细节：

    struct tm {
       int tm_sec;         /* 秒，范围从 0 到 59				*/
       int tm_min;         /* 分，范围从 0 到 59				*/
       int tm_hour;        /* 小时，范围从 0 到 23				*/
       int tm_mday;        /* 一月中的第几天，范围从 1 到 31	                */
       int tm_mon;         /* 月份，范围从 0 到 11				*/
       int tm_year;        /* 自 1900 起的年数				*/
       int tm_wday;        /* 一周中的第几天，范围从 0 到 6		        */
       int tm_yday;        /* 一年中的第几天，范围从 0 到 365	                */
       int tm_isdst;       /* 夏令时						*/
    };

## 实例

下面的实例演示了 localtime() 函数的用法。

    #include 
    #include 

    int main ()
    {
       time_t rawtime;
       struct tm *info;
       char buffer[80];

       time( &rawtime );

       info = localtime( &rawtime );
       printf("当前的本地时间和日期：%s", asctime(info));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    当前的本地时间和日期：Thu Aug 23 09:12:05 2012