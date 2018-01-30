#include <stdio.h>

int main()
{
	// 查找数组中最大的元素值

	int i, n;
	float arr[100];

	printf("输入元素个数(0~100)：");
	scanf("%d", &n);
	printf("\n");

	// 接收用户输入
	for (i = 0; i < n; ++i)
	{
		printf("输入数字 %d：", i+1);
		scanf("%f", &arr[i]);
	}

	// 循环，并将最大元素存储到 arr[0]
	for (i = 1; i < n; ++i)
	{
		// 如果要查找最小值可以将 < 换成 >
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	printf("最大元素为 = %.2f", arr[0]);

	return 0;
}