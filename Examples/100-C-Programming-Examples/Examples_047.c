#include <stdio.h>
#define exchange(a, b) {int t; t=a; a=b; b=t;}

int main()
{
	// 宏#define命令练习2。
	int x = 10;
	int y = 20;
	printf("x=%d; y=%d\n", x, y);
	exchange(x, y);
	printf("x=%d; y=%d\n", x, y);

	return 0;
}