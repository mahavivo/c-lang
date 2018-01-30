#include <stdio.h>
int main(int agrc, char*agrv[])
{
    long sum = 4, s = 4;//sum的初始值为4表示，只有一位数字组成的奇数个数为4个
    int j;
    for (j = 2; j <= 8; j++)
    {    
        printf("%d位数为奇数的个数%ld\n", j-1, s);
        if (j <= 2)
            s *= 7;
        else
            s *= 8;
        sum += s;    
    }
    printf("%d位数为奇数的个数%ld\n", j-1, s);
    printf("奇数的总个数为：%ld\n", sum);
    // system("pause");
    return 0;
}