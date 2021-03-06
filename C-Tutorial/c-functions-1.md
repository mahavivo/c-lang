# 传值方式调用函数

向函数传递参数的**传值调用**方法，把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数不会影响实际参数。

默认情况下，C 语言使用_传值调用_方法来传递参数。一般来说，这意味着函数内的代码不会改变用于调用函数的实际参数。函数 **swap()** 定义如下：
```c
/* 函数定义 */
void swap(int x, int y)
{
   int temp;

   temp = x; /* 保存 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 temp 赋值给 y */

   return;
}
```
现在，让我们通过传递实际参数来调用函数 **swap()**：
```c
#include <stdio.h>

/* 函数声明 */
void swap(int x, int y);

int main ()
{
   /* 局部变量定义 */
   int a = 100;
   int b = 200;

   printf("交换前，a 的值： %dn", a );
   printf("交换前，b 的值： %dn", b );

   /* 调用函数来交换值 */
   swap(a, b);

   printf("交换后，a 的值： %dn", a );
   printf("交换后，b 的值： %dn", b );

   return 0;
}
```
当上面的代码被编译和执行时，它会产生下列结果：
```
交换前，a 的值： 100
交换前，b 的值： 200
交换后，a 的值： 100
交换后，b 的值： 200
```
上面的实例表明了，虽然在函数内改变了 a 和 b 的值，但是实际上 a 和 b 的值没有发生变化。
