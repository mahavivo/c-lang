# C 库函数 – time()


## 描述

C 库函数 **time_t time(time_t *seconds)** 返回自纪元 Epoch（1970-01-01 00:00:00 UTC）起经过的时间，以秒为单位。如果 **seconds** 不为空，则返回值也存储在变量 **seconds** 中。

## 声明

下面是 time() 函数的声明。

    time_t time(time_t *t)

## 参数

* **seconds** \-- 这是指向类型为 time_t 的对象的指针，用来存储 seconds 的值。

## 返回值

以 time_t 对象返回当前日历时间。

## 实例

下面的实例演示了 time() 函数的用法。

    #include 
    #include 

    int main ()
    {
      time_t seconds;

      seconds = time(NULL);
      printf("自 1970-01-01 起的小时数 = %ldn", seconds/3600);

      return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    自 1970-01-01 起的小时数 = 373711