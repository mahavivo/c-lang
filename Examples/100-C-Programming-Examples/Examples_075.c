#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, n;
    for(i = 1; i < 5; i++)
    {
        n = 0;
        if (i != 1) {
            n = n + 1;
        }
        if (i == 3) {
            n = n + 1;
        }
        if (i == 4) {
            n = n + 1;
        }
        if (i != 4) {
            n = n + 1;
        }
        if (n == 3) {
            printf("%c\n", 64 + i);
        }
    }
}