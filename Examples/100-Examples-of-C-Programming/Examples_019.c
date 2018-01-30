#include <stdio.h>

#define N 1000

int main()
{
	// 一个数如果恰好等于它的因子之和，这个数就称为"完数"。
	// 例如6=1＋2＋3.编程找出1000以内的所有完数。

	int i, j, k, n, sum;
	int a[256];
	for (i = 2; i <= N; i++)
	{
		sum = a[0] = 1;
		k = 0;
		for (j = 2; j <= (i/2); j++)
		{
			if (i%j == 0)
			{
				sum += j;
				a[++k] = j;
			}
		}

		if (i == sum)
		{
			printf("%d=%d", i, a[0]);
			for (n = 1; n <= k; n++)
			{
				printf("+%d", a[n]);
			}
			printf("\n");
		}
	}

	return 0;
}