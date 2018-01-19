# C 库函数 – atol()


## 描述

C 库函数 **long int atol(const char *str)** 把参数 **str** 所指向的字符串转换为一个长整数（类型为 long int 型）。

## 声明

下面是 atol() 函数的声明。

    long int atol(const char *str)

## 参数

* **str** \-- 要转换为长整数的字符串。

## 返回值

该函数返回转换后的长整数，如果没有执行有效的转换，则返回零。

## 实例

下面的实例演示了 atol() 函数的用法。

    #include 
    #include 
    #include 

    int main()
    {
       long val;
       char str[20];

       strcpy(str, "98993489");
       val = atol(str);
       printf("字符串值 = %s, 长整型值 = %ldn", str, val);

       strcpy(str, "jikexueyuan.com");
       val = atol(str);
       printf("字符串值 = %s, 长整型值 = %ldn", str, val);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    字符串值 = 98993489, 长整型值 = 98993489
    字符串值 = jikexueyuan.com, 长整型值 = 0