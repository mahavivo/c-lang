#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 判断最大值
	int i, num;
	float *data;

	printf("输入元素个数(1 ~ 100): ");
	scanf("%d", &num);

	// 为 'num' 元素分配内存
	data = (float*) calloc(num, sizeof(float));

	if (data == NULL)
	{
		printf("Error!!! 内存没有分配。");
		exit(0);
	}

	printf("\n");

	// 用户输入
	for (i = 0; i < num; ++i)
	{
		printf("输入数字 %d: ", i + 1);
		scanf("%f", data + i);
	}

	for (i = 0; i < num; ++i)
	{
		if (*data < *(data + i))
			*data = *(data + i);
	}

	printf("最大的元素 = %.2f", *data);

	return 0;
}