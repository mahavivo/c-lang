#include <stdio.h>
int addNumbers(int n);

int main()
{
	// 计算自然数的和

	int n, i, sum = 0;

	printf("输入一个正整数：");
	scanf("%d", &n);

	// 使用 for
	// for (i = 1; i <= n; ++i)
	// {
	// 	sum += i;
	// }

	// 使用 while
	/*while ( i <= n )
	{
		sum += i;
		++i;
	}*/

	// 使用递归
	printf("Sum = %d", addNumbers(n));

	// printf("Sum = %d", sum);

	return 0;
}

int addNumbers(int n)
{
	if (n != 0)
		return n + addNumbers(n-1);
	else
		return n;
}