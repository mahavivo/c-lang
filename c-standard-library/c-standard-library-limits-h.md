# C 标准库 - <limits.h>

## 简介
limits.h 头文件决定了各种变量类型的各种属性。定义在该头文件中的宏限制了各种变量类型（比如 char、int 和 long）的值。

这些限制指定了变量不能存储任何超出这些限制的值，例如一个无符号可以存储的最大值是 255。

## 库宏
下面的值是特定实现的，且是通过 #define 指令来定义的，这些值都不得低于下边所给出的值。

</p> <table > <tr><th style="width:25%">宏</th><th style="width:25%">值</th><th>描述</th></tr> <tr><td>CHAR_BIT </td><td>8</td><td>定义一个字节的比特数。</td></tr> <tr><td>SCHAR_MIN</td><td>-128</td><td>定义一个有符号字符的最小值。</td></tr> <tr><td>SCHAR_MAX</td><td>127</td><td>定义一个有符号字符的最大值。</td></tr> <tr><td>UCHAR_MAX </td><td>255</td><td>定义一个无符号字符的最大值。</td></tr> <tr><td>CHAR_MIN</td><td>0</td><td>定义类型 char 的最小值，如果 char 表示负值，则它的值等于 SCHAR_MIN，否则等于 0。</td></tr> <tr><td>CHAR_MAX</td><td>127</td><td>定义类型 char 的最大值，如果 char 表示负值，则它的值等于 SCHAR_MAX，否则等于 UCHAR_MAX。</td></tr> <tr><td>MB_LEN_MAX </td><td>1</td><td>定义多字节字符中的最大字节数。</td></tr> <tr><td>SHRT_MIN</td><td>-32768</td><td>定义一个短整型的最小值。</td></tr> <tr><td>SHRT_MAX </td><td>+32767</td><td>定义一个短整型的最大值。</td></tr> <tr><td>USHRT_MAX </td><td>65535</td><td>定义一个无符号短整型的最大值。</td></tr> <tr><td>INT_MIN </td><td>-32768</td><td>定义一个整型的最小值。</td></tr> <tr><td>INT_MAX </td><td>+32767</td><td>定义一个整型的最大值。</td></tr> <tr><td>UINT_MAX</td><td>65535</td><td>定义一个无符号整型的最大值。</td></tr> <tr><td>LONG_MIN </td><td>-2147483648</td><td>定义一个长整型的最小值。</td></tr> <tr><td>LONG_MAX </td><td>+2147483647</td><td>定义一个长整型的最大值。</td></tr> <tr><td>ULONG_MAX </td><td>4294967295</td><td>定义一个无符号长整型的最大值。</td></tr> </table> 

# 实例
下面的实例演示了 limit.h 文件中定义的一些常量的使用。

```
#include <stdio.h>
#include <limits.h>

int main()
{

   printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\n", LONG_MAX);
  
   return(0);
}
```

让我们编译和运行上面的程序，这将产生下列结果：

```
The number of bits in a byte 8
The minimum value of SIGNED CHAR = -128
The maximum value of SIGNED CHAR = 127
The maximum value of UNSIGNED CHAR = 255
The minimum value of SHORT INT = -32768
The maximum value of SHORT INT = 32767
The minimum value of INT = -32768
The maximum value of INT = 32767
The minimum value of CHAR = -128
The maximum value of CHAR = 127
The minimum value of LONG = -2147483648
The maximum value of LONG = 2147483647
```