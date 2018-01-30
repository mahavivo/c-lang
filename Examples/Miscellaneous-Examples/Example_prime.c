#include <stdio.h>

int main()
{
	// 判断素数

	// int n, i, flag = 0;

	// printf("输入一个正整数：");
	// scanf("%d", &n);

	// for (i = 2; i <= n/2; ++i)
	// {
	// 	if (n%i == 0)
	// 	{
	// 		flag = 1;
	// 		break;
	// 	}
	// }
	// if (flag == 0)
	// 	printf("%d 是素数", n);
	// else
	// 	printf("%d 不是素数", n);

	// 判断两个数之间的素数

	int low, high, i, flag;

	printf("输入两个整数：");
	scanf("%d %d", &low, &high);

	printf("%d 与 %d 之间的素数为：", low, high);

	while (low < high)
	{
		flag = 0;

		for (i = 2; i < low/2; ++i)
		{
			if (low%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d\n", low);
		++low;
	}

	return 0;
}