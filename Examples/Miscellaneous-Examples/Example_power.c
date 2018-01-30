#include <stdio.h>

int main()
{
	// 计算一个数的 n 次方

	int base, exponent;
	long long result = 1;

	printf("基数：");
	scanf("%d", &base);

	printf("指数：");
	scanf("%d", &exponent);

	while (exponent != 0)
	{
		result *= base;
		--exponent;
	}
	printf("结果：%lld", result);

	return 0;

}