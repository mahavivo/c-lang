# C 库函数 – strftime()


## 描述

C 库函数 **size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)** 根据 **format** 中定义的格式化规则，格式化结构 **timeptr** 表示的时间，并把它存储在 **str** 中。

## 声明

下面是 strftime() 函数的声明。

    size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)

## 参数

* **str** \-- 这是指向目标数组的指针，用来复制产生的 C 字符串。
* **maxsize** \-- 这是被复制到 str 的最大字符数。
* **format** \-- 这是 C 字符串，包含了普通字符和特殊格式说明符的任何组合。这些格式说明符由函数替换为表示 tm 中所指定时间的相对应值。格式说明符是：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:8%">说明符</th><th>替换为</th><th>实例</th></tr> <tr><td>%a</td><td>缩写的星期几名称 </td><td>Sun</td></tr> <tr><td>%A</td><td>完整的星期几名称 </td><td>Sunday</td></tr> <tr><td>%b</td><td>缩写的月份名称 </td><td>Mar</td></tr> <tr><td>%B</td><td>完整的月份名称 </td><td>March</td></tr> <tr><td>%c</td><td>日期和时间表示法 </td><td>Sun Aug 19 02:56:02 2012</td></tr> <tr><td>%d</td><td>一月中的第几天（01-31）</td><td>19</td></tr> <tr><td>%H</td><td>24 小时格式的小时（00-23）</td><td>14</td></tr> <tr><td>%I</td><td>12 小时格式的小时（01-12）</td><td>05</td></tr> <tr><td>%j</td><td>一年中的第几天（001-366）</td><td>231</td></tr> <tr><td>%m</td><td>十进制数表示的月份（01-12）</td><td>08</td></tr> <tr><td>%M</td><td>分（00-59）</td><td>55</td></tr> <tr><td>%p</td><td>AM 或 PM 名称</td><td>PM</td></tr> <tr><td>%S</td><td>秒（00-61）</td><td>02</td></tr> <tr><td>%U</td><td>一年中的第几周，以第一个星期日作为第一周的第一天（00-53）</td><td>33</td></tr> <tr><td>%w</td><td>十进制数表示的星期几，星期日表示为 0（0-6）</td><td>4</td></tr> <tr><td>%W</td><td>一年中的第几周，以第一个星期一作为第一周的第一天（00-53）</td><td>34</td></tr> <tr><td>%x</td><td>日期表示法</td><td>08/19/12</td></tr> <tr><td>%X</td><td>时间表示法</td><td>02:50:06</td></tr> <tr><td>%y</td><td>年份，最后两个数字（00-99）</td><td>01</td></tr> <tr><td>%Y</td><td>年份</td><td>2012</td></tr> <tr><td>%Z</td><td>时区的名称或缩写</td><td>CDT</td></tr> <tr><td>%%</td><td>一个 % 符号</td><td>%</td></tr> </table> <ul class="list"> <li>
* **timeptr** \-- 这是指向 tm 结构的指针，该结构包含了一个呗分解为以下各部分的日历时间：


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

如果产生的 C 字符串小于 size 个字符（包括空结束字符），则会返回复制到 str 中的字符总数（不包括空结束字符），否则返回零。

## 实例

下面的实例演示了 strftime() 函数的用法。

    #include 
    #include 

    int main ()
    {
       time_t rawtime;
       struct tm *info;
       char buffer[80];

       time( &rawtime );

       info = localtime( &rawtime );

       strftime(buffer,80,"%x - %I:%M%p", info);
       printf("格式化的日期 & 时间 : |%s|n", buffer );

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    格式化的日期 & 时间 : |08/23/12 - 12:40AM|