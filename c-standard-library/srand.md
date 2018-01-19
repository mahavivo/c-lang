# C 库函数 – srand()


## 描述

C 库函数 **void srand(unsigned int seed)** 播种由函数 **rand** 使用的随机数发生器。

## 声明

下面是 srand() 函数的声明。

    void srand(unsigned int seed)

## 参数

* **seed** \-- 这是一个整型值，用于伪随机数生成算法播种。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 srand() 函数的用法。

    #include 
    #include 
    #include 

    int main()
    {
       int i, n;
       time_t t;

       n = 5;

       /* 初始化随机数发生器 */
       srand((unsigned) time(&t));

       /* 输出 0 到 50 之间的 5 个随机数 */
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