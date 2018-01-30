#include <stdio.h>

int main()
{
	// 输出九九乘法口诀表

	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%dx%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}

	return 0;
}