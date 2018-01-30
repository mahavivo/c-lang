#include <stdio.h>

int main()
{
	// 求一个整数的所有因数

	int number, i;

	printf("输入一个整数：");
	scanf("%d", &number);

	printf("%d 的因数有：", number);
	for (i = 1; i <= number; ++i)
	{
		if (number%i == 0)
			printf("%d\n", i);
	}

	return 0;
}