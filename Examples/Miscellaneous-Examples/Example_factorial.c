#include <stdio.h>

int main()
{
	// 阶乘

	int n, i;
	unsigned long long factorial = 1;

	printf("输入一个整数：");
	scanf("%d", &n);

	if (n < 0)
		printf("Error！负数没有阶乘。");
	else
	{
		for (i = 1; i <= n; ++i)
		{
			factorial *= i;
		}
		printf("%d! = %llu", n, factorial);
	}

	return 0;
}