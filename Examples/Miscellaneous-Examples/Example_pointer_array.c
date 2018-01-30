#include <stdio.h>

int main()
{
	// 使用指针访问数组元素
	int data[5], i;
	printf("输入元素：");

	for (i = 0; i < 5; ++i)
	{
		scanf("%d", data + i);
	}

	printf("你输入的是：\n");
	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", *(data + i));
	}

	return 0;
}