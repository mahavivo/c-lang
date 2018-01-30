#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, i = 0, j = 1;
    while (i < 5) {
        x = 4*j;
        for (i = 0; i < 5; i++)
        {
            if (x%4 != 0) {break;}
            x = (x/4)*5+1;
        }
        j++;
    }
    printf("%d\n", x);
    return 0;
}