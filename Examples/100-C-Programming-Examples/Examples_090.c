#include <stdio.h>
#include <stdlib.h>

#define M 5
int main()
{
    int a[M] = {1,2,3,4,5};
    int i, j, t;
    i = 0; j = M-1;
    while (i < j) {
        t = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = t;
        i++;
        j--;
    }
    for (i = 0; i < M; i++) {
        printf("%d\n", *(a+i));
    }
}