
### 26 判断素数

```c
#include <stdio.h>

int main()
{
    // 判断素数

    // int n, i, flag = 0;

    // printf("输入一个正整数：");
    // scanf("%d", &n);

    // for (i = 2; i <= n/2; ++i)
    // {
    //     if (n%i == 0)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 0)
    //     printf("%d 是素数", n);
    // else
    //     printf("%d 不是素数", n);

    // 判断两个数之间的素数

    int low, high, i, flag;

    printf("输入两个整数：");
    scanf("%d %d", &low, &high);

    printf("%d 与 %d 之间的素数为：", low, high);

    while (low < high)
    {
        flag = 0;

        for (i = 2; i < low/2; ++i)
        {
            if (low%i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d\n", low);
        ++low;
    }

    return 0;
}
```

### 32-1 二进制转换为十进制

```c
#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main()
{
    long long n;
    printf("输入一个二进制数: ");
    scanf("%lld", &n);
    printf("二进制数 %lld 转换为十进制为 %d", n, convertBinaryToDecimal(n));
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
```

### 32-2 十进制转换为二进制

```c
#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n);

int main()
{
    int n;
    printf("输入一个十进制数: ");
    scanf("%d", &n);
    printf("十进制数 %d 转换为二进制位 %lld", n, convertDecimalToBinary(n));
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

```

### 35 翻转字符串

```c
#include <stdio.h>

void reverseSentence();
int main()
{
    // 字符串翻转

    printf("输入一个字符串：");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}
```

### 43 判断最大值

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 判断最大值
    int i, num;
    float *data;

    printf("输入元素个数(1 ~ 100): ");
    scanf("%d", &num);

    // 为 'num' 元素分配内存
    data = (float*) calloc(num, sizeof(float));

    if (data == NULL)
    {
        printf("Error!!! 内存没有分配。");
        exit(0);
    }

    printf("\n");

    // 用户输入
    for (i = 0; i < num; ++i)
    {
        printf("输入数字 %d: ", i + 1);
        scanf("%f", data + i);
    }

    for (i = 0; i < num; ++i)
    {
        if (*data < *(data + i))
            *data = *(data + i);
    }

    printf("最大的元素 = %.2f", *data);

    return 0;
}
```

### 将字符串写入文件

```c
#include <stdio.h>
#include <stdlib.h>  /* exit() 函数 */

int main()
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen("runoob.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("输入字符串:\n");
   fgets(sentence, (sizeof sentence / sizeof sentence[0]), stdin);

   fprintf(fptr,"%s", sentence);
   fclose(fptr);

   return 0;
}

```

### 从文件中读取一行

```c
#include <stdio.h>
#include <stdlib.h> //  exit() 函数
int main()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("runoob.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // 文件指针返回 NULL 则退出
        exit(1);         
    }

    // 读取文本，直到碰到新的一行开始
    fscanf(fptr,"%[^\n]", c);

    printf("读取内容:\n%s", c);
    fclose(fptr);

    return 0;
}
```

### 004 输入某年某月某日，判断这一天是这一年的第几天？

```c
#include <stdio.h>

int main()
{
    int day, month, year, sum, leap;

    printf("\n请输入年、月、日，格式为：年，月，日（2015,12,10）\n");
    scanf("%d,%d,%d", &year, &month, &day);

    // 先计算某月以前月份的总天数
    switch(month)
    {
        case 1:sum = 0;break;
        case 2:sum = 31;break;
        case 3:sum = 59;break;
        case 4:sum = 90;break;
        case 5:sum = 120;break;
        case 6:sum = 151;break;
        case 7:sum = 181;break;
        case 8:sum = 212;break;
        case 9:sum = 243;break;
        case 10:sum = 273;break;
        case 11:sum = 304;break;
        case 12:sum = 334;break;
        default:printf("date error");break;
    }

    sum = sum + day;
    if (year % 400 == 0 || (year%4 == 0 && year%100 != 0)) {
        leap = 1;
    } else {
        leap = 0;
    }
    if (leap == 1 && month > 2) {
        sum++;
    }
    printf("这是这一年的第 %d 天。", sum);
    printf("\n");

    return 0;
}
```

### 008 输出9*9口诀

```c
#include <stdio.h>

int main()
{
    int i, j, result;
    printf("\n");

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            result = i * j;
            printf("%d*%d=%-3d", i, j, result);
        }
        printf("\n");
    }

    return 0;
}
```

### 015 条件运算符的嵌套

// 利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，
// 60-89分之间的用B表示，60分以下的用C表示。

```c
#include <stdio.h>

int main()
{


    int score;
    char grade;

    printf("请输入分数：");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');

    printf("%c\n", grade);

    return 0;
}
```

### 023 打印菱形图案

```
// 打印出如下图案（菱形）
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
```

```c
#include <stdio.h>

int main()
{


    int i, j, k;
    for (i = 0; i <= 3;i++)
    {
        for (j = 0; j <= 2-i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= 2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i <= 2;i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= 4-2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

### 038 求一个3*3矩阵对角线元素之和

```c
#include <stdio.h>

#define N 3

int main()
{
    int i, j, a[N][N], sum = 0;
    printf("请输入矩阵(3*3): \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        sum += a[i][i];
    }
    printf("对角线之和为: %d\n", sum);

    return 0;
}
```

### 039 有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中

```c
#include <stdio.h>

int main()
{
    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int temp1, temp2, number, end, i, j;
    printf("原始数组是: \n");
    for (i = 0; i < 10; i++) {
        printf("%4d", a[i]);
    }
    printf("\n插入一个新的数字: ");
    scanf("%d", &number);
    end = a[9];
    if (number > end) {
        a[10] = number;
    } else {
        for (i = 0; i < 10; i++) {
            if (a[i] > number) {
                temp1 = a[i];
                a[i] = number;
                for (j = i+1; j < 11; j++) {
                    temp2 = a[j];
                    a[j] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }
    }
    for (i = 0; i < 11; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");

    return 0;
}
```

### 076 编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)

```c
#include <stdio.h>
#include <stdlib.h>

double  evenumber(int n);
double  oddnumber(int n);

int main()
{
    int n;
    double r;
    double (*pfunc)(int);
    printf("请输入一个数字：");
    scanf("%d", &n);
    if(n%2 == 0) pfunc = evenumber;
    else pfunc = oddnumber;

    r = (*pfunc)(n);
    printf("%lf\n", r);

    system("pause");
    return 0;
}
double  evenumber(int n)
{
    double s = 0, a = 0;
    int i;
    for(i = 2; i <= n; i += 2)
    {
        a = (double)1/i;
        s += a;
    }
    return s;
}
double  oddnumber(int n)
{
    double s=0,a=0;
    int i;
    for(i = 1; i <= n; i += 2)
    {
        a = (double)1/i;
        s += a;
    }
    return s;
}
```

### 078 找到年龄最大的人，并输出。

```c
#include <stdio.h>
#include <stdlib.h>
struct man{
    char name[20];
    int  age;
}
person[3] = {"li",18,"wang",19,"sun",22};

int main()
{
    struct man *q, *p;
    int i, m = 0;
    p = person;
    for (i = 0; i < 3; i++)
    {
        if (m < p->age){
            m = p->age;
        }
        q = p++;
    }
    printf("%s %d\n", q->name, q->age);
    return 0;
}
```
