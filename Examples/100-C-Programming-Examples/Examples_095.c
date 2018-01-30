#include <stdio.h>

struct programming
{
    float constant;
    char *pointer;
};

int main()
{
    struct programming variable;
    char string[] = "菜鸟教程：http://www.runoob.com";
    
    variable.constant = 1.23;
    variable.pointer = string;
    
    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);
    
    return 0;
}