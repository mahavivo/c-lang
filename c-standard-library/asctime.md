# C 库函数 – asctime()


## 描述

C 库函数 **char *asctime(const struct tm *timeptr)** 返回一个指向字符串的指针，它代表了结构 **struct timeptr** 的日期和时间。

## 声明

下面是 asctime() 函数的声明。

    char *asctime(const struct tm *timeptr)

## 参数

**timeptr** 是指向 tm 结构的指针，包含了分解为如下各部分的日历时间：

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

## 返回值

该函数返回一个 C 字符串，包含了可读格式的日期和时间信息 **Www Mmm dd hh:mm:ss yyyy**，其中，_Www_ 表示星期几，_Mmm_ 是以字母表示的月份，_dd_ 表示一月中的第几天，_hh:mm:ss_ 表示时间，_yyyy_ 表示年份。

## 实例

下面的实例演示了 asctime() 函数的用法。

    #include 
    #include 
    #include 

    int main()
    {
       struct tm t;

       t.tm_sec    = 10;
       t.tm_min    = 10;
       t.tm_hour   = 6;
       t.tm_mday   = 25;
       t.tm_mon    = 2;
       t.tm_year   = 89;
       t.tm_wday   = 6;

       puts(asctime(&t));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    Sat Mar 25 06:10:10 1989
