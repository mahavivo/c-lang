#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);
int main()
{
	// 使用引用循环替换数值
	int a, b, c;

	printf("输入 a, b 和 c 的值：");
	scanf("%d %d %d", &a, &b, &c);

	printf("交换前：");
	scanf("a = %d \nb = %d \nc = %d\n", a, b, c);

	cyclicSwap(&a, &b, &c);

	printf("交换后：");
	printf("a = %d \nb = %d \nc= %d", a, b, c);

	return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
	int temp;

	// 交换
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}