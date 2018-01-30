#include <stdio.h>

int main()
{
	// 判断正数/负数/零

	double number;

	printf("输入一个数字：");
	scanf("%lf", &number);

	if (number <= 0.0)
	{
		if (number == 0.0)
			printf("你输入的是0。");
		else
			printf("你输入的是负数。");
	}
	else
		printf("你输入的是整数。");

	return 0;
}