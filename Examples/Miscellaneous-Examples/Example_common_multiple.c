#include <stdio.h>

int main()
{
	// 求两数最小公倍数

	int n1, n2, minMultiple;

	printf("输入两个正整数：");
	scanf("%d %d", &n1, &n2);

	minMultiple = (n1 > n2) ? n1 : n2;

	while(1)
	{
		if (minMultiple%n1 == 0 && minMultiple%n2 == 0)
		{
			printf("%d 和 %d 的最小公倍数为 %d", n1, n2, minMultiple);
			break;
		}
		++minMultiple;
	}

	return 0;
}