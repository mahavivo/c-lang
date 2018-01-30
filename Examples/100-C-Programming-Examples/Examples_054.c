#include <stdio.h>

int main()
{
	// 取一个整数a从右端开始的4～7位。

	unsigned a, b, c, d;
	printf("请输入整数: \n");
	scanf("%o", &a);
	b = a>>4;
	c = ~(~0<<4);
	d = b&c;
	printf("%o\n%o\n", a, b);
	return 0;
}