#include <stdio.h>

int main()
{
	// 判断数字为几位数

	long long n;
	int count = 0;

	printf("输入一个整数：");
	scanf("%lld", &n);

	while(n != 0)
	{
		n /= 10;
		++count;
	}

	printf("数字是 %d 位数。", count);
}