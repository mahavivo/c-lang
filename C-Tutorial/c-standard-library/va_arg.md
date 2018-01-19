# C 库宏 – va_arg()


## 描述

C 库宏 **type va_arg(va_list ap, type)** 检索函数参数列表中类型为 **type** 的下一个参数。它无法判断检索到的参数是否是传给函数的最后一个参数。

## 声明

下面是 va_arg() 宏的声明。

    type va_arg(va_list ap, type)

## 参数

* **ap** \-- 这是一个 **va_list** 类型的对象，存储了有关额外参数和检索状态的信息。该对象应在第一次调用 va_arg 之前通过调用 va_start 进行初始化。
* **type** \-- 这是一个类型名称。该类型名称是作为扩展自该宏的表达式的类型来使用的。

## 返回值

该宏返回下一个额外的参数，是一个类型为 type 的表达式。

## 实例

下面的实例演示了 va_arg() 宏的用法。

    #include 
    #include 

    int sum(int, ...);

    int main()
    {
       printf("15 和 56 的和 = %dn",  sum(2, 15, 56) );
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

    15 和 56 的和 = 71