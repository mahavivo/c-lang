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