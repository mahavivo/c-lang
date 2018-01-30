#include <stdio.h>

struct student
{
    int x;
    char c;
} a;

int main()
{
    a.x = 3;
    a.c = 'a';
    f(a);
    printf("%d,%c", a.x, a.c);
}
f(struct student b)
{
    b.x = 20;
    b.c = 'y';
}