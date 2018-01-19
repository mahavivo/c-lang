# C 运算符

运算符是一种告诉编译器执行特定的数学或逻辑操作的符号。C 语言内置了丰富的运算符，并提供了以下类型的运算符：

* 算术运算符
* 关系运算符
* 逻辑运算符
* 位运算符
* 赋值运算符
* 杂项运算符

本章将逐一介绍算术运算符、关系运算符、逻辑运算符、位运算符、赋值运算符和其他运算符。

下表显示了 C 语言支持的所有算术运算符。假设变量 **A** 的值为 10，变量 **B** 的值为 20，则：

</p> <table > <tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr> <tr><td>+</td><td>把两个操作数相加</td><td> A + B 将得到 30</td></tr> <tr><td>-</td><td>从第一个操作数中减去第二个操作数</td><td> A - B 将得到 -10</td></tr> <tr><td>*</td><td>把两个操作数相乘</td><td> A * B 将得到 200</td></tr> <tr><td>/</td><td>分子除以分母</td><td> B / A 将得到 2</td></tr> <tr><td>%</td><td>取模运算符，整除后的余数</td><td> B % A 将得到 0</td></tr> <tr><td>++</td><td>自增运算符，整数值增加 1</td><td> A++ 将得到 11</td></tr> <tr><td>--</td><td>自减运算符，整数值减少 1</td><td> A-- 将得到 9</td></tr> </table> 

### 实例

请看下面的实例，了解 C 语言中所有可用的算术运算符：

```
    #include 

    main()
    {
       int a = 21;
       int b = 10;
       int c ;

       c = a + b;
       printf("Line 1 - c 的值是 %dn", c );
       c = a - b;
       printf("Line 2 - c 的值是 %dn", c );
       c = a * b;
       printf("Line 3 - c 的值是 %dn", c );
       c = a / b;
       printf("Line 4 - c 的值是 %dn", c );
       c = a % b;
       printf("Line 5 - c 的值是 %dn", c );
       c = a++;
       printf("Line 6 - c 的值是 %dn", c );
       c = a--;
       printf("Line 7 - c 的值是 %dn", c );

    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    Line 1 - c 的值是 31
    Line 2 - c 的值是 11
    Line 3 - c 的值是 210
    Line 4 - c 的值是 2
    Line 5 - c 的值是 1
    Line 6 - c 的值是 21
    Line 7 - c 的值是 22
```

下表显示了 C 语言支持的所有关系运算符。假设变量 **A** 的值为 10，变量 **B** 的值为 20，则：

</p> <table > <tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr> <tr><td>+</td><td>把两个操作数相加</td><td> A + B 将得到 30</td></tr> <tr><td>-</td><td>从第一个操作数中减去第二个操作数</td><td> A - B 将得到 -10</td></tr> <tr><td>*</td><td>把两个操作数相乘</td><td> A * B 将得到 200</td></tr> <tr><td>/</td><td>分子除以分母</td><td> B / A 将得到 2</td></tr> <tr><td>%</td><td>取模运算符，整除后的余数</td><td> B % A 将得到 0</td></tr> <tr><td>++</td><td>自增运算符，整数值增加 1</td><td> A++ 将得到 11</td></tr> <tr><td>--</td><td>自减运算符，整数值减少 1</td><td> A-- 将得到 9</td></tr> </table> 

### 实例

请看下面的实例，了解 C 语言中所有可用的关系运算符：

```
    #include 

    main()
    {
       int a = 21;
       int b = 10;
       int c ;

       if( a == b )
       {
          printf("Line 1 - a 等于 bn" );
       }
       else
       {
          printf("Line 1 - a 不等于 bn" );
       }
       if ( a < b )
       {
          printf("Line 2 - a 小于 bn" );
       }
       else
       {
          printf("Line 2 - a 不小于 bn" );
       }
       if ( a > b )
       {
          printf("Line 3 - a 大于 bn" );
       }
       else
       {
          printf("Line 3 - a 不大于 bn" );
       }
       /* 改变 a 和 b 的值 */
       a = 5;
       b = 20;
       if ( a <= b )
       {
          printf("Line 4 - a 小于或等于 bn" );
       }
       if ( b >= a )
       {
          printf("Line 5 - b 大于或等于 bn" );
       }
    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    Line 1 - a 不等于 b
    Line 2 - a 不小于 b
    Line 3 - a 大于 b
    Line 4 - a 小于或等于 b
    Line 5 - b 大于或等于 b
```

下表显示了 C 语言支持的所有关系逻辑运算符。假设变量 **A** 的值为 1，变量 **B** 的值为 0，则：

</p> <table > <tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr> <tr><td>&amp;&amp;</td><td>称为逻辑与运算符。如果两个操作数都非零，则条件为真。</td><td> (A &amp;&amp; B) 为假。</td></tr> <tr><td>||</td><td>称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。</td><td> (A || B) 为真。</td></tr> <tr><td>!</td><td>称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。</td><td> !(A &amp;&amp; B) 为真。</td></tr> </table> 

### 实例

请看下面的实例，了解 C 语言中所有可用的逻辑运算符：

```
    #include 

    main()
    {
       int a = 5;
       int b = 20;
       int c ;

       if ( a && b )
       {
          printf("Line 1 - 条件为真n" );
       }
       if ( a || b )
       {
          printf("Line 2 - 条件为真n" );
       }
       /* 改变 a 和 b 的值 */
       a = 0;
       b = 10;
       if ( a && b )
       {
          printf("Line 3 - 条件为真n" );
       }
       else
       {
          printf("Line 3 - 条件不为真n" );
       }
       if ( !(a && b) )
       {
          printf("Line 4 - 条件为真n" );
       }
    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    Line 1 - 条件为真
    Line 2 - 条件为真
    Line 3 - 条件不为真
    Line 4 - 条件为真
```

位运算符作用于位，并逐位执行操作。&、 | 和 ^ 的真值表如下所示：

</p> <table > <tr><th style="width:20%">p</th><th style="width:20%">q</th><th style="width:20%">p &amp; q</th><th style="width:20%">p | q</th><th style="width:20%">p ^ q</th></tr> <tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr> <tr><td>0</td><td>1</td><td>0</td><td>1</td><td>1</td></tr> <tr><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr> <tr><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr> </table> <p>

假设如果 A = 60，且 B = 13，现在以二进制格式表示，它们如下所示：

A = 0011 1100

B = 0000 1101

\-----------------

A&B = 0000 1100

A|B = 0011 1101

A^B = 0011 0001

~A  = 1100 0011

下表显示了 C 语言支持的位运算符。假设变量 **A** 的值为 60，变量 **B** 的值为 13，则：

</p> <table > <tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr> <tr><td>&amp;</td><td>如果同时存在于两个操作数中，二进制 AND 运算符复制一位到结果中。</td><td> (A &amp; B) 将得到 12，即为 0000 1100</td></tr> <tr><td>|</td><td>如果存在于任一操作数中，二进制 OR 运算符复制一位到结果中。</td><td> (A | B) 将得到 61，即为 0011 1101</td></tr> <tr><td>^</td><td>如果存在于其中一个操作数中但不同时存在于两个操作数中，二进制异或运算符复制一位到结果中。</td><td> (A ^ B) 将得到 49，即为 0011 0001</td></tr> <tr><td>~</td><td>二进制补码运算符是一元运算符，具有"翻转"位效果。</td><td> (~A ) 将得到 -61，即为 1100 0011，2 的补码形式，带符号的二进制数。</td></tr> <tr><td>&lt;&lt;</td><td>二进制左移运算符。左操作数的值向左移动右操作数指定的位数。</td><td> A &lt;&lt; 2 将得到 240，即为 1111 0000</td></tr> <tr><td>&gt;&gt;</td><td>二进制右移运算符。左操作数的值向右移动右操作数指定的位数。</td><td> A &gt;&gt; 2 将得到 15，即为 0000 1111</td></tr> </table> 

### 实例

请看下面的实例，了解 C 语言中所有可用的位运算符：

```
    #include 

    main()
    {

       unsigned int a = 60;	/* 60 = 0011 1100 */
       unsigned int b = 13;	/* 13 = 0000 1101 */
       int c = 0;

       c = a & b;       /* 12 = 0000 1100 */
       printf("Line 1 - c 的值是 %dn", c );

       c = a | b;       /* 61 = 0011 1101 */
       printf("Line 2 - c 的值是 %dn", c );

       c = a ^ b;       /* 49 = 0011 0001 */
       printf("Line 3 - c 的值是 %dn", c );

       c = ~a;          /*-61 = 1100 0011 */
       printf("Line 4 - c 的值是 %dn", c );

       c = a << 2;     /* 240 = 1111 0000 */
       printf("Line 5 - c 的值是 %dn", c );

       c = a >> 2;     /* 15 = 0000 1111 */
       printf("Line 6 - c 的值是 %dn", c );
    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    Line 1 - c 的值是 12
    Line 2 - c 的值是 61
    Line 3 - c 的值是 49
    Line 4 - c 的值是 -61
    Line 5 - c 的值是 240
    Line 6 - c 的值是 15
```

下表列出了 C 语言支持的赋值运算符：

</p> <table > <tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr> <tr><td>=</td><td>简单的赋值运算符，把右边操作数的值赋给左边操作数</td><td> C = A + B 将把 A + B 的值赋给 C</td></tr> <tr><td>+=</td><td>加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数</td><td> C += A 相当于 C = C + A</td></tr> <tr><td>-=</td><td>减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数</td><td> C -= A 相当于 C = C - A</td></tr> <tr><td>*=</td><td>乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数</td><td> C *= A 相当于 C = C * A</td></tr> <tr><td>/=</td><td>除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数</td><td> C /= A 相当于 C = C / A</td></tr> <tr><td>%=</td><td>求模且赋值运算符，求两个操作数的模赋值给左边操作数</td><td> C %= A 相当于 C = C % A</td></tr> <tr><td>&lt;&lt;=</td><td>左移且赋值运算符</td><td> C &lt;&lt;= 2 等同于 C = C &lt;&lt; 2</td></tr> <tr><td>&gt;&gt;=</td><td>右移且赋值运算符</td><td> C &gt;&gt;= 2 等同于 C = C &gt;&gt; 2</td></tr> <tr><td>&amp;=</td><td>按位与且赋值运算符</td><td> C &amp;= 2 等同于 C = C &amp; 2</td></tr> <tr><td>^=</td><td>按位异或且赋值运算符</td><td> C ^= 2 等同于 C = C ^ 2</td></tr> <tr><td>|=</td><td>按位或且赋值运算符</td><td> C |= 2 等同于 C = C | 2</td></tr> </table> 

### 实例

请看下面的实例，了解 C 语言中所有可用的赋值运算符：

```
    #include 

    main()
    {
       int a = 21;
       int c ;

       c =  a;
       printf("Line 1 - =  运算符实例，c 的值 = %dn", c );

       c +=  a;
       printf("Line 2 - += 运算符实例，c 的值 = %dn", c );

       c -=  a;
       printf("Line 3 - -= 运算符实例，c 的值 = %dn", c );

       c *=  a;
       printf("Line 4 - *= 运算符实例，c 的值 = %dn", c );

       c /=  a;
       printf("Line 5 - /= 运算符实例，c 的值 = %dn", c );

       c  = 200;
       c %=  a;
       printf("Line 6 - %= 运算符实例，c 的值 = %dn", c );

       c <<=  2;
       printf("Line 7 - <<= 运算符实例，c 的值 = %dn", c );

       c >>=  2;
       printf("Line 8 - >>= 运算符实例，c 的值 = %dn", c );

       c &=  2;
       printf("Line 9 - &= 运算符实例，c 的值 = %dn", c );

       c ^=  2;
       printf("Line 10 - ^= 运算符实例，c 的值 = %dn", c );

       c |=  2;
       printf("Line 11 - |= 运算符实例，c 的值 = %dn", c );

    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    Line 1 - =  运算符实例，c 的值 = 21
    Line 2 - += 运算符实例，c 的值 = 42
    Line 3 - -= 运算符实例，c 的值 = 21
    Line 4 - *= 运算符实例，c 的值 = 441
    Line 5 - /= 运算符实例，c 的值 = 21
    Line 6 - %= 运算符实例，c 的值 = 11
    Line 7 - <<= 运算符实例，c 的值 = 44
    Line 8 - >>= 运算符实例，c 的值 = 11
    Line 9 - &= 运算符实例，c 的值 = 2
    Line 10 - ^= 运算符实例，c 的值 = 0
    Line 11 - |= 运算符实例，c 的值 = 2
```

下表列出了 C 语言支持的其他一些重要的运算符，包括 **sizeof** 和 **? :**。

</b>。</p> <table > <tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr> <tr> <td>sizeof()</td><td>返回变量的大小。</td><td>sizeof(a) 将返回 4，其中 a 是整数。</td> </tr> <tr> <td>&amp;</td><td>返回变量的地址。</td><td>&amp;a; 将给出变量的实际地址。</td> </tr> <tr> <td>*</td><td>指向一个变量。</td><td>*a; 将指向一个变量。</td> </tr> <tr> <td>? :</td><td>条件表达式</td><td>如果条件为真 ? 则值为 X : 否则值为 Y</td> </tr> </table> 

### 实例

请看下面的实例，了解 C 语言中所有可用的杂项运算符：

```
    #include 

    main()
    {
       int a = 4;
       short b;
       double c;
       int* ptr;

       /* sizeof 运算符实例 */
       printf("Line 1 - 变量 a 的大小 = %dn", sizeof(a) );
       printf("Line 2 - 变量 b 的大小 = %dn", sizeof(b) );
       printf("Line 3 - 变量 c 的大小 = %dn", sizeof(c) );

       /* & 和 * 运算符实例 */
       ptr = &a;	/* 'ptr' 现在包含 'a' 的地址 */
       printf("a 的值是 %dn", a);
       printf("*ptr 是 %dn", *ptr);

       /* 三元运算符实例 */
       a = 10;
       b = (a == 1) ? 20: 30;
       printf( "b 的值是 %dn", b );

       b = (a == 10) ? 20: 30;
       printf( "b 的值是 %dn", b );
    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    a 的值是 4
    *ptr 是 4
    b 的值是 30
    b 的值是 20
```

运算符的优先级确定表达式中项的组合。这会影响到一个表达式如何计算。某些运算符比其他运算符有更高的优先级，例如，乘除运算符具有比加减运算符更高的优先级。

例如 x = 7 + 3 * 2，在这里，x 被赋值为 13，而不是 20，因为运算符 * 具有比 + 更高的优先级，所以首先计算乘法 3*2，然后再加上 7。

下表将按运算符优先级从高到低列出各个运算符，具有较高优先级的运算符出现在表格的上面，具有较低优先级的运算符出现在表格的下面。在表达式中，较高优先级的运算符会优先被计算。

</p> <table > <tr> <th>类别&nbsp;</th> <th>运算符&nbsp;</th><th>结合性&nbsp;</th> </tr> <tr> <td>后缀&nbsp;</td><td>() [] -&gt; . ++ - - &nbsp;</td> <td>从左到右&nbsp;</td> </tr> <tr> <td>一元&nbsp;</td> <td>+ - ! ~ ++ - - (type)* &amp; sizeof&nbsp;</td> <td>从右到左&nbsp;</td></tr> <tr> <td>乘除&nbsp;</td> <td>* / %&nbsp;</td><td>从左到右&nbsp;</td> </tr> <tr> <td>加减&nbsp;</td><td>+ -&nbsp;</td> <td>从左到右&nbsp;</td> </tr> <tr> <td>移位&nbsp;</td> <td>&lt;&lt; &gt;&gt;&nbsp;</td> <td>从左到右&nbsp;</td> </tr> <tr> <td>关系&nbsp;</td><td>&lt; &lt;= &gt; &gt;=&nbsp;</td> <td>从左到右&nbsp;</td> </tr> <tr> <td>相等&nbsp;</td> <td>== !=&nbsp;</td> <td>从左到右&nbsp;</td> </tr> <tr> <td>位与 AND&nbsp;</td><td>&amp;&nbsp;</td> <td>从左到右&nbsp;</td> </tr> <tr> <td>位异或 XOR&nbsp;</td> <td>^&nbsp;</td> <td>从左到右&nbsp;</td></tr> <tr> <td>位或 OR&nbsp;</td> <td>|&nbsp;</td> <td>从左到右&nbsp;</td></tr> <tr> <td>逻辑与 AND&nbsp;</td><td>&amp;&amp;&nbsp;</td> <td>从左到右&nbsp;</td></tr> <tr><td>逻辑或 OR&nbsp;</td> <td>||&nbsp;</td> <td>从左到右&nbsp;</td></tr> <tr> <td>条件&nbsp;</td><td>?:&nbsp;</td> <td>从右到左&nbsp;</td> </tr> <tr><td>赋值&nbsp;</td> <td>= += -= *= /= %=&gt;&gt;= &lt;&lt;= &amp;= ^= |=&nbsp;</td><td>从右到左&nbsp;</td></tr> <tr> <td>逗号&nbsp;</td> <td>,&nbsp;</td> <td>从左到右&nbsp;</td></tr> </table>
### 实例

请看下面的实例，了解 C 语言中运算符的优先级：

```
    #include 

    main()
    {
       int a = 20;
       int b = 10;
       int c = 15;
       int d = 5;
       int e;

       e = (a + b) * c / d;      // ( 30 * 15 ) / 5
       printf("(a + b) * c / d 的值是 %dn",  e );

       e = ((a + b) * c) / d;    // (30 * 15 ) / 5
       printf("((a + b) * c) / d 的值是 %dn" ,  e );

       e = (a + b) * (c / d);   // (30) * (15/5)
       printf("(a + b) * (c / d) 的值是 %dn",  e );

       e = a + (b * c) / d;     //  20 + (150/5)
       printf("a + (b * c) / d 的值是 %dn" ,  e );

       return 0;
    }
```

当上面的代码被编译和执行时，它会产生下列结果：

```
    (a + b) * c / d 的值是 90
    ((a + b) * c) / d 的值是 90
    (a + b) * (c / d) 的值是 90
    a + (b * c) / d 的值是 50
```
  