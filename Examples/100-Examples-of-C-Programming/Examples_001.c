#include <stdio.h>

int main()
{
	// 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
	int i, j, k;
	printf("\n");
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != k && i != j && j != k)
				{
					printf("%d,%d,%d\n", i, j, k);
				}
			}
		}
	}
}