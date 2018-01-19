# C 库函数 – strtod()


## 描述

C 库函数 **double strtod(const char *str, char **endptr)** 把参数 **str** 所指向的字符串转换为一个浮点数（类型为 double 型）。如果 **endptr** 不为空，则指向转换中最后一个字符后的字符的指针会存储在 endptr 引用的位置。

## 声明

下面是 strtod() 函数的声明。

    double strtod(const char *str, char **endptr)

## 参数

* **str** \-- 要转换为双精度浮点数的字符串。
* **endptr** \-- 对类型为 char* 的对象的引用，其值由函数设置为 **str** 中数值后的下一个字符。

## 返回值

该函数返回转换后的双精度浮点数，如果没有执行有效的转换，则返回零（0.0）。

## 实例

下面的实例演示了 strtod() 函数的用法。

    #include 
    #include 

    int main()
    {
      char str[30] = "20.30300 This is test";
       char *ptr;
       double ret;

       ret = strtod(str, &ptr);
       printf("数字（double）是 %lfn", ret);
       printf("字符串部分是 |%s|", ptr);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    数字（double）是 20.303000
    字符串部分是 | This is test|