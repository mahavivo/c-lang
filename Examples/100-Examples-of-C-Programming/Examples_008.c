#include <stdio.h>

int main()
{
	// 输出9*9口诀。
	int i, j, result;
	printf("\n");

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			result = i * j;
			printf("%d*%d=%-3d", i, j, result);
		}
		printf("\n");
	}

	return 0;
}