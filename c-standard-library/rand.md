# C 库函数 – rand()


## 描述

C 库函数 **int rand(void)** 返回一个范围在 0 到 _RAND_MAX_ 之间的伪随机数。

RAND_MAX 是一个常量，它的默认值在不同的实现中会有所不同，但是值至少是 32767。

## 声明

下面是 rand() 函数的声明。

    int rand(void)

## 参数

## 返回值

该函数返回一个范围在 0 到 RAND_MAX 之间的整数值。

## 实例

下面的实例演示了 rand() 函数的用法。

    #include 
    #include 

    int main()
    {
       int i, n;
       time_t t;

       n = 5;

       /* 初始化随机数发生器 */
       srand((unsigned) time(&t));

       /* 输出 0 到 49 之间的 5 个随机数 */
       for( i = 0 ; i < n ; i++ ) {
          printf("%dn", rand() % 50);
       }

      return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    38
    45
    29
    29
    47