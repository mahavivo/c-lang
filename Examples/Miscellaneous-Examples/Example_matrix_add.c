#include <stdio.h>

int main()
{
	// 两个矩阵相加

	int r, c, a[100][100], b[100][100], sum[100][100], i, j;

	printf("输入行数(1~100)：");
	scanf("%d", &r);
	printf("输入列数(1~100)：");
	scanf("%d", &c);

	printf("\n输入第一维数组的元素:\n");

	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("输入元素 a%d%d：", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("输入第二维数组的元素:\n");

	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("输入元素 a%d%d: ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}

	// 相加
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	// 显示结果
	printf("\n二维数组相加结果: \n\n");

	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("%d ", sum[i][j]);

			if (j == c-1)
			{
				printf("\n\n");
			}
		}
	}
}