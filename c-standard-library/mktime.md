# C 库函数 – mktime()


## 描述

C 库函数 **time_t mktime(struct tm *timeptr)** 把 **timeptr** 所指向的结构转换为一个依据本地时区的 time_t 值。

## 声明

下面是 mktime() 函数的声明。

    time_t mktime(struct tm *timeptr)

## 参数

* **timeptr** \-- 这是指向表示日历时间的 time_t 值的指针，该日历时间被分解为以下各部分。下面是 timeptr 结构的细节：

```
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
```

## 返回值

该函数返回一个 time_t 值，该值对应于以参数传递的日历时间。如果发生错误，则返回 -1 值。

## 实例

下面的实例演示了 mktime() 函数的用法。

    #include 
    #include 

    int main ()
    {
       int ret;
       struct tm info;
       char buffer[80];

       info.tm_year = 2001 - 1900;
       info.tm_mon = 7 - 1;
       info.tm_mday = 4;
       info.tm_hour = 0;
       info.tm_min = 0;
       info.tm_sec = 1;
       info.tm_isdst = -1;

       ret = mktime(&info);
       if( ret == -1 )
       {
           printf("错误：不能使用 mktime 转换时间。n");
       }
       else
       {
          strftime(buffer, sizeof(buffer), "%c", &info );
          print(buffer);
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    Wed Jul 4 00:00:01 2001