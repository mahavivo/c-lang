#include <stdio.h>

int main()
{
	// 将一个正整数分解质因数;

	int n, i;
	printf("请输入整数：");
	scanf("%d", &n);
	printf("%d=", n);

	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1) printf("*");
		}
	}

	printf("\n");

	return 0;
}