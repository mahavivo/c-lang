# C 库宏 – va_start()


## 描述

C 库宏 **void va_start(va_list ap, last_arg)** 初始化 **ap** 变量，它与 **va_arg** 和 **va_end** 宏是一起使用的。**last_arg** 是最后一个传递给函数的已知的固定参数，即省略号之前的参数。

这个宏必须在使用 **va_arg** 和 **va_end** 之前被调用。

## 声明

下面是 va_start() 宏的声明。

    void va_start(va_list ap, last_arg);

## 参数

* **ap** \-- 这是一个 **va_list** 类型的对象，它用来存储通过 **va_arg** 获取额外参数时所必需的信息。
* **last_arg** \-- 最后一个传递给函数的已知的固定参数。

## 返回值

NA

## 实例

下面的实例演示了 va_start() 宏的用法。

    #include
    #include

    int sum(int, ...);

    int main(void)
    {
       printf("10、20 和 30 的和 = %dn",  sum(3, 10, 20, 30) );
       printf("4、20、25 和 30 的和 = %dn",  sum(4, 4, 20, 25, 30) );

       return 0;
    }

    int sum(int num_args, ...)
    {
       int val = 0;
       va_list ap;
       int i;

       va_start(ap, num_args);
       for(i = 0; i < num_args; i++)
       {
          val += va_arg(ap, int);
       }
       va_end(ap);

       return val;
    }

让我们编译并运行上面的程序，这将产生以下结果：

    10、20 和 30 的和 = 60
    4、20、25 和 30 的和 = 79