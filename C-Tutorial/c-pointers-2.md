# 指针数组


在我们讲解指针数组的概念之前，先让我们来看一个实例，它用到了一个由 3 个整数组成的数组：

    #include 

    const int MAX = 3;

    int main ()
    {
       int  var[] = {10, 100, 200};
       int i;

       for (i = 0; i < MAX; i++)
       {
          printf("Value of var[%d] = %dn", i, var[i] );
       }
       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Value of var[0] = 10
    Value of var[1] = 100
    Value of var[2] = 200

可能有一种情况，我们想要让数组存储指向 int 或 char 或其他数据类型的指针。下面是一个指向整数的指针数组的声明：

    int *ptr[MAX];

在这里，把 **ptr** 声明为一个数组，由 MAX 个整数指针组成。因此，ptr 中的每个元素，都是一个指向 int 值的指针。下面的实例用到了三个整数，它们将存储在一个指针数组中，如下所示：

    #include 

    const int MAX = 3;

    int main ()
    {
       int  var[] = {10, 100, 200};
       int i, *ptr[MAX];

       for ( i = 0; i < MAX; i++)
       {
          ptr[i] = &var[i]; /* 赋值为整数的地址 */
       }
       for ( i = 0; i < MAX; i++)
       {
          printf("Value of var[%d] = %dn", i, *ptr[i] );
       }
       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Value of var[0] = 10
    Value of var[1] = 100
    Value of var[2] = 200

您也可以用一个指向字符的指针数组来存储一个字符串列表，如下：

    #include 

    const int MAX = 4;

    int main ()
    {
       char *names[] = {
                       "Zara Ali",
                       "Hina Ali",
                       "Nuha Ali",
                       "Sara Ali",
       };
       int i = 0;

       for ( i = 0; i < MAX; i++)
       {
          printf("Value of names[%d] = %sn", i, names[i] );
       }
       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Value of names[0] = Zara Ali
    Value of names[1] = Hina Ali
    Value of names[2] = Nuha Ali
    Value of names[3] = Sara Ali