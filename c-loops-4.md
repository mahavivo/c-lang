# C嵌套循环


C 语言允许在一个循环内使用另一个循环，下面演示几个实例来说明这个概念。

C 语言中 **嵌套 for 循环** 语句的语法：

    for ( init; condition; increment )
    {
       for ( init; condition; increment )
       {
          statement(s);
       }
       statement(s);
    }

C 语言中 **嵌套 while 循环** 语句的语法：

    while(condition)
    {
       while(condition)
       {
          statement(s);
       }
       statement(s);
    }

C 语言中 **嵌套 do...while 循环** 语句的语法：

    do
    {
       statement(s);
       do
       {
          statement(s);
       }while( condition );

    }while( condition );

关于嵌套循环有一点值得注意，您可以在任何类型的循环内嵌套其他任何类型的循环。比如，一个 for 循环可以嵌套在一个 while 循环内，反之亦然。

下面的程序使用了一个嵌套的 for 循环来查找 2 到 100 中的质数：

    #include 

    int main ()
    {
       /* 局部变量定义 */
       int i, j;

       for(i=2; i<100; i++) {
          for(j=2; j <= (i/j); j++)
            if(!(i%j)) break; // 如果找到，则不是质数
          if(j > (i/j)) printf("%d 是质数n", i);
       }

       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    2 是质数
    3 是质数
    5 是质数
    7 是质数
    11 是质数
    13 是质数
    17 是质数
    19 是质数
    23 是质数
    29 是质数
    31 是质数
    37 是质数
    41 是质数
    43 是质数
    47 是质数
    53 是质数
    59 是质数
    61 是质数
    67 是质数
    71 是质数
    73 是质数
    79 是质数
    83 是质数
    89 是质数
    97 是质数