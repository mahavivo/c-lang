# 指向指针的指针

指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。

![C 指向指针的指针](images/pointer_to_pointer.jpg)

一个指向指针的指针变量必须如下声明，即在变量名前放置两个星号。例如，下面声明了一个指向 int 类型指针的指针：

    int **var;

当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符，如下面实例所示：

    #include 

    int main ()
    {
       int  var;
       int  *ptr;
       int  **pptr;

       var = 3000;

       /* 获取 var 的地址 */
       ptr = &var;

       /* 使用运算符 & 获取 ptr 的地址 */
       pptr = &ptr;

       /* 使用 pptr 获取值 */
       printf("Value of var = %dn", var );
       printf("Value available at *ptr = %dn", *ptr );
       printf("Value available at **pptr = %dn", **pptr);

       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    Value of var = 3000
    Value available at *ptr = 3000
    Value available at **pptr = 3000
