#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s[] = {"man","woman","girl","boy","sister"};
    char **q;
    int k;
    for(k = 0; k < 5; k++)
    {
        q = &s[k];       /*在这里填入内容*/
        printf("%s\n", *q);
    }
    return 0;
}