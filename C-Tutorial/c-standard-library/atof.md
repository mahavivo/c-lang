# C 库函数 – atof()


## 描述

C 库函数 **double atof(const char *str)** 把参数 **str** 所指向的字符串转换为一个浮点数（类型为 double 型）。

## 声明

下面是 atof() 函数的声明。

    double atof(const char *str)

## 参数

* **str** \-- 要转换为浮点数的字符串。

## 返回值

函数返回转换后的双精度浮点数，如果没有执行有效的转换，则返回零（0.0）。

## 实例

下面的实例演示了 atof() 函数的用法。

    #include 
    #include 
    #include 

    int main()
    {
       float val;
       char str[20];

       strcpy(str, "98993489");
       val = atof(str);
       printf("字符串值 = %s, 浮点值 = %fn", str, val);

       strcpy(str, "jikexueyuan.com");
       val = atof(str);
       printf("字符串值 = %s, 浮点值 = %fn", str, val);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    字符串值 = 98993489, 浮点值 = 98993488.000000
    字符串值 = jikexueyuan.com, 浮点值 = 0.000000