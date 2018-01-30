#include <stdio.h>

int main()
{
	// 打印出杨辉三角形（要求打印出10行）。
	int i, j;
    int a[10][10];
    printf("\n");
    for (i = 0; i < 10; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for(i = 2; i < 10; i++) {
        for(j = 1; j < i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for(i = 0; i < 10; i++) {
        for(j = 0; j <= i; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}