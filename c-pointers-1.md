# 指针的算术运算

C 指针是一个用数值表示的地址。因此，您可以对指针执行算术运算。可以对指针进行四种算术运算：++、--、+、-。

假设 **ptr** 是一个指向地址 1000 的整型指针，是一个 32 位的整数，让我们对该指针执行下列的算术运算：

    ptr++

在执行完上述的运算之后，**ptr** 将指向位置 1004，因为 ptr 每增加一次，它都将指向下一个整数位置，即当前位置往后移 4 个字节。这个运算会在不影响内存位置中实际值的情况下，移动指针到下一个内存位置。如果 **ptr** 指向一个地址为 1000 的字符，上面的运算会导致指针指向位置 1001，因为下一个字符位置是在 1001。

## 递增一个指针

我们喜欢在程序中使用指针代替数组，因为变量指针可以递增，而数组不能递增，因为数组是一个常量指针。下面的程序递增变量指针，以便顺序访问数组中的每一个元素：

    #include 

    const int MAX = 3;

    int main ()
    {
       int  var[] = {10, 100, 200};
       int  i, *ptr;

       /* 指针中的数组地址 */
       ptr = var;
       for ( i = 0; i < MAX; i++)
       {

          printf("Address of var[%d] = %xn", i, ptr );
          printf("Value of var[%d] = %dn", i, *ptr );

          /* 移动到下一个位置 */
          ptr++;
       }
       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Address of var[0] = bf882b30
    Value of var[0] = 10
    Address of var[1] = bf882b34
    Value of var[1] = 100
    Address of var[2] = bf882b38
    Value of var[2] = 200

## 递减一个指针

同样地，对指针进行递减运算，即把值减去其数据类型的字节数，如下所示：

    #include 

    const int MAX = 3;

    int main ()
    {
       int  var[] = {10, 100, 200};
       int  i, *ptr;

       /* 指针中最后一个元素的地址 */
       ptr = &var[MAX-1];
       for ( i = MAX; i > 0; i--)
       {

          printf("Address of var[%d] = %xn", i, ptr );
          printf("Value of var[%d] = %dn", i, *ptr );

          /* 移动到下一个位置 */
          ptr--;
       }
       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Address of var[3] = bfedbcd8
    Value of var[3] = 200
    Address of var[2] = bfedbcd4
    Value of var[2] = 100
    Address of var[1] = bfedbcd0
    Value of var[1] = 10

## 指针的比较

指针可以用关系运算符进行比较，如 ==、< 和 >。如果 p1 和 p2 指向两个相关的变量，比如同一个数组中的不同元素，则可对 p1 和 p2 进行大小比较。

下面的程序修改了上面的实例，只要变量指针所指向的地址小于或等于数组的最后一个元素的地址 &var[MAX - 1]，则把变量指针进行递增：

    #include 

    const int MAX = 3;

    int main ()
    {
       int  var[] = {10, 100, 200};
       int  i, *ptr;

       /* 指针中第一个元素的地址 */
       ptr = var;
       i = 0;
       while ( ptr <= &var[MAX - 1] )
       {

          printf("Address of var[%d] = %xn", i, ptr );
          printf("Value of var[%d] = %dn", i, *ptr );

          /* 指向上一个位置 */
          ptr++;
          i++;
       }
       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Address of var[0] = bfdbcb20
    Value of var[0] = 10
    Address of var[1] = bfdbcb24
    Value of var[1] = 100
    Address of var[2] = bfdbcb28
    Value of var[2] = 200