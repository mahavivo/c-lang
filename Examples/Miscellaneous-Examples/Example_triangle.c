#include <stdio.h>

int main()
{
	// 创建各类三角形图案

	int i, j, rows, space, k = 0;

	printf("行数：");
	scanf("%d", &rows);

	// 使用 * 号
	for (i = 1; i <= rows; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}

	// 使用数字
	for (i = 1; i <= rows; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	// 倒三角形
	for (i = rows; i >= 1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}

	// 倒三角形数字
	for (i = rows; i >= 1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	// 金字塔
	for (i = 1; i <= rows; ++i, k = 0)
	{
		for (space = 1; space <= rows-i; ++space)
		{
			printf("  ");
		}

		while (k != 2*i-1)
		{
			printf("* ");
			++k;
		}

		printf("\n");
	}

	// 倒金字塔
	for(i = rows; i >= 1; --i)
    {
        for(space = 0; space < rows-i; ++space)
            printf("  ");
 
        for(j = i; j <= 2*i-1; ++j)
            printf("* ");
 
        for(j = 0; j < i-1; ++j)
            printf("* ");
 
        printf("\n");
    }

	return 0;
}