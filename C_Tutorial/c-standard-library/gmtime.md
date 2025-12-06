# C 库函数 – gmtime()


## 描述

C 库函数 **struct tm *gmtime(const time_t *timer)** 使用 **timer** 的值来填充 **tm** 结构，并用协调世界时（UTC）也被称为格林尼治标准时间（GMT）表示。

## 声明

下面是 gmtime() 函数的声明。

    struct tm *gmtime(const time_t *timer)

## 参数

* **timeptr** \-- 这是指向表示日历时间的 time_t 值的指针。

## 返回值

该函数返回指向 tm 结构的指针，该结构带有被填充的时间信息。下面是 timeptr 结构的细节：

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

下面的实例演示了 gmtime() 函数的用法。

    #include 
    #include 

    #define BST (+1)
    #define CCT (+8)

    int main ()
    {

       time_t rawtime;
       struct tm *info;

       time(&rawtime);
       /* 获取 GMT 时间 */
       info = gmtime(&rawtime );

       printf("当前的世界时钟：n");
       printf("伦敦：%2d:%02dn", (info->tm_hour+BST)%24, info->tm_min);
       printf("中国：%2d:%02dn", (info->tm_hour+CCT)%24, info->tm_min);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    当前的世界时钟：
    伦敦：14:10
    中国：21:10