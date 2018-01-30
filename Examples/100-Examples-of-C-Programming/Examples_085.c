#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p, i;
    long int sum = 9;
    printf("请输入一个素数:\n");
    scanf("%d", &p);
    for(i = 1; ; i++)
        if(sum%p == 0) {
        	break;
        } else {
        	sum = sum*10+9;
        }
    printf("素数%d能整除%d个9组成的数%ld\n", p, i, sum);
    return 0;
}