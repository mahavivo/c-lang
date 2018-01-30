#include <stdio.h>

int main()
{
	// 要求输出国际象棋棋盘。
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i+j)%2 == 0) {
				printf("%d", 11);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}