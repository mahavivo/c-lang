# C 库函数 – qsort()


## 描述

C 库函数 **void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))** 对数组进行排序。

## 声明

下面是 qsort() 函数的声明。

    void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))

## 参数

* ** base ** \-- 指向要排序的数组的第一个元素的指针。
* ** nitems ** \-- 由 base 指向的数组中元素的个数。
* ** size ** \-- 数组中每个元素的大小，以字节为单位。
* ** compar ** \-- 用来比较两个元素的函数。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 qsort() 函数的用法。

    #include 
    #include 

    int values[] = { 88, 56, 100, 2, 25 };

    int cmpfunc (const void * a, const void * b)
    {
       return ( *(int*)a - *(int*)b );
    }

    int main()
    {
       int n;

       printf("排序之前的列表：n");
       for( n = 0 ; n < 5; n++ ) {
          printf("%d ", values[n]);
       }

       qsort(values, 5, sizeof(int), cmpfunc);

       printf("n排序之后的列表：n");
       for( n = 0 ; n < 5; n++ ) {
          printf("%d ", values[n]);
       }

      return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    排序之前的列表：
    88 56 100 2 25
    排序之后的列表：
    2 25 56 88 100