# C 库函数 – bsearch()


## 描述

C 库函数 **void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *))** 对 **nitems** 对象的数组执行二分查找，**base** 指向进行查找的数组，**key** 指向要查找的元素，**size** 指定数组中每个元素的大小。

数组的内容应根据 **compar** 所对应的比较函数升序排序。

## 声明

下面是 bsearch() 函数的声明。

    void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *))

## 参数

* ** key ** \-- 指向要查找的元素的指针，类型转换为 void*。
* ** base ** \-- 指向进行查找的数组的第一个对象的指针，类型转换为 void*。
* ** nitems ** \-- base 所指向的数组中元素的个数。
* ** size ** \-- 数组中每个元素的大小，以字节为单位。
* ** compar ** \-- 用来比较两个元素的函数。

## 返回值

如果查找成功，该函数返回一个指向数组中匹配元素的指针，否则返回空指针。.

## 实例

下面的实例演示了 bsearch() 函数的用法。

    #include 
    #include 

    int cmpfunc(const void * a, const void * b)
    {
       return ( *(int*)a - *(int*)b );
    }

    int values[] = { 5, 20, 29, 32, 63 };

    int main ()
    {
       int *item;
       int key = 32;

       /* 使用 bsearch() 在数组中查找值 32 */
       item = (int*) bsearch (&key, values, 5, sizeof (int), cmpfunc);
       if( item != NULL )
       {
          printf("Found item = %dn", *item);
       }
       else
       {
          printf("Item = %d could not be foundn", *item);
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    Found item = 32