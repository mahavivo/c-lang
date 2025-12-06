# C 库函数 – calloc()


## 描述

C 库函数 **void *calloc(size_t nitems, size_t size)** 分配所需的内存空间，并返回一个指向它的指针。**malloc** 和 **calloc** 之间的不同点是，malloc 不会设置内存为零，而 calloc 会设置分配的内存为零。

## 声明

下面是 calloc() 函数的声明。

    void *calloc(size_t nitems, size_t size)

## 参数

* **nitems** \-- 要被分配的元素个数。
* **size** \-- 元素的大小。

## 返回值

该函数返回一个指针，指向已分配的内存。如果请求失败，则返回 NULL。

## 实例

下面的实例演示了 calloc() 函数的用法。

    #include 
    #include 

    int main()
    {
       int i, n;
       int *a;

       printf("要输入的元素个数：");
       scanf("%d",&n);

       a = (int*)calloc(n, sizeof(int));
       printf("输入 %d 个数字：n",n);
       for( i=0 ; i < n ; i++ )
       {
          scanf("%d",&a[i]);
       }

       printf("输入的数字为：");
       for( i=0 ; i < n ; i++ ) {
          printf("%d ",a[i]);
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    要输入的元素个数：3
    输入 3 个数字：
    22
    55
    14
    输入的数字为：22 55 14