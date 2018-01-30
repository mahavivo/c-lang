#include <stdio.h>
#include <math.h>

int main()
{
	// 判断Armstrong数(阿姆斯壮数)

	// int number, originalNumber, remainder, result = 0;

	// printf("输入三位数：");
	// scanf("%d", &number);

	// originalNumber = number;

	// while (originalNumber != 0)
	// {
	// 	remainder = originalNumber%10;
	// 	result += remainder*remainder*remainder;
	// 	originalNumber /= 10;
	// }

	// if (result == number)
	// 	printf("%d 是 Armstrong 数", number);
	// else
	// 	printf("%d 不是 Armstrong 数", number);

	// 两数之间的 Armstrong 数

	int low, high, i, temp1, temp2, remainder, n = 0, result = 0;

	printf("输入两个整数：");
	scanf("%d %d", &low, &high);
	printf("%d 和 %d 之间的 Armstrong 数为：", low, high);

	for (i = low + 1; i < high; ++i)
	{
		temp2 = i;
		temp1 = i;

		while (temp1 != 0)
		{
			temp1 /= 10;
			++n;
		}

		while (temp2 != 0 )
		{
			remainder = temp2 % 10;
			result += pow(remainder, n);
			temp2 /= 10;
		}

		if (result == i)
			printf("%d ", i);

		n = 0;
		result = 0;
	}

	return 0;
}