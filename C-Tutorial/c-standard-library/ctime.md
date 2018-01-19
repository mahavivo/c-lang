# C 库函数 – ctime()


## 描述

C 库函数 **char *ctime(const time_t *timer)** 返回一个表示当地时间的字符串，当地时间是基于参数 **timer**。

返回的字符串格式如下： **Www Mmm dd hh:mm:ss yyyy** 其中，_Www_ 表示星期几，_Mmm_ 是以字母表示的月份，_dd_ 表示一月中的第几天，_hh:mm:ss_ 表示时间，_yyyy_ 表示年份。

## 声明

下面是 ctime() 函数的声明。

    char *ctime(const time_t *timer)

## 参数

* **timer** \-- 这是指向 time_t 对象的指针，该对象包含了一个日历时间。

## 返回值

该函数返回一个 C 字符串，该字符串包含了可读格式的日期和时间信息。

## 实例

下面的实例演示了 ctime() 函数的用法。

    #include 
    #include 

    int main ()
    {
       time_t curtime;

       time(&curtime);

       printf("当前时间 = %s", ctime(&curtime));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    当前时间 = Mon Aug 13 08:23:14 2012