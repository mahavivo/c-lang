# C 标准库

## 简介

**time.h** 头文件定义了四个变量类型、两个宏和各种操作日期和时间的函数。

## 库变量

下面是头文件 time.h 中定义的变量类型：

</p> <table > <tr><th style="width:5%">序号</th><th>变量 &amp; 描述</th></tr> <tr><td>1</td><td><b>size_t </b><br />是无符号整数类型，它是 <b>sizeof</b> 关键字的结果。</td></tr> <tr><td>2</td><td><b>clock_t </b><br />这是一个适合存储处理器时间的类型。</td></tr> <tr><td>3</td><td><b>time_t is </b><br />这是一个适合存储日历时间类型。</td></tr> <tr><td>4</td><td><b>struct tm </b><br />这是一个用来保存时间和日期的结构。</td></tr> </table> <p>

tm 结构的定义如下：

```

    struct tm {
   int tm_sec;         /* 秒，范围从 0 到 59		*/
   int tm_min;         /* 分，范围从 0 到 59		*/
   int tm_hour;        /* 小时，范围从 0 到 23		*/
   int tm_mday;        /* 一月中的第几天，范围从 1 到 31	*/
   int tm_mon;         /* 月，范围从 0 到 11		*/
   int tm_year;        /* 自 1900 年起的年数		*/
   int tm_wday;        /* 一周中的第几天，范围从 0 到 6	*/
   int tm_yday;        /* 一年中的第几天，范围从 0 到 365	*/
   int tm_isdst;       /* 夏令时				*/
};
```

## 库宏

下面是头文件 time.h 中定义的宏：

</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1</td><td><b>NULL</b><br />这个宏是一个空指针常量的值。</td></tr> <tr><td>2</td><td><b>CLOCKS_PER_SEC </b><br />这个宏表示每秒的处理器时钟个数。</td></tr> </table> 

## 库函数

下面是头文件 time.h 中定义的函数：  
</p> <table > <tr><th style="width:5%">序号</th><th>函数 &amp; 描述</th></tr> <tr><td>1</td><td><a href="asctime.md">char *asctime(const struct tm *timeptr)</a><br />返回一个指向字符串的指针，它代表了结构 timeptr 的日期和时间。</td></tr> <tr><td>2</td><td><a href="clock.md">clock_t clock(void)</a><br />返回程序执行起（一般为程序的开头），处理器时钟所使用的时间。</td></tr> <tr><td>3</td><td><a href="ctime.md">char *ctime(const time_t *timer)</a><br />返回一个表示当地时间的字符串，当地时间是基于参数 timer。</td></tr> <tr><td>4</td><td><a href="difftime.md">double difftime(time_t time1, time_t time2)</a><br />返回 time1 和 time2 之间相差的秒数 (time1-time2)。</td></tr> <tr><td>5</td><td><a href="gmtime.md">struct tm *gmtime(const time_t *timer)</a><br />timer 的值被分解为 tm 结构，并用协调世界时（UTC）也被称为格林尼治标准时间（GMT）表示。</td></tr> <tr><td>6</td><td><a href="localtime.md">struct tm *localtime(const time_t *timer)</a><br />timer 的值被分解为 tm 结构，并用本地时区表示。</td></tr> <tr><td>7</td><td><a href="mktime.md">time_t mktime(struct tm *timeptr)</a><br />把 timeptr 所指向的结构转换为一个依据本地时区的 time_t 值。</td></tr> <tr><td>8</td><td><a href="strftime.md">size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)</a><br />根据 format 中定义的格式化规则，格式化结构 timeptr 表示的时间，并把它存储在 str 中。</td></tr> <tr><td>9</td><td><a href="time.md">time_t time(time_t *timer)</a><br />计算当前日历时间，并把它编码成 time_t 格式。</td></tr> </table> 