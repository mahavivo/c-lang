#include <stdio.h>
#include <math.h>

// int convertBinaryToDecimal(long long n);
long long convertDecimalToBinary(int n);
int main()
{
	// 二进制与十进制相互转换

	// long long n;
	int n;

	// printf("输入一个二进制数：");
	printf("输入一个十进制数: ");
	// scanf("%lld", &n);
	scanf("%d", &n);
	// printf("二进制数 %d 转换为十进制为 %lld", n, convertBinaryToDecimal(n));
	printf("十进制数 %d 转换为二进制位 %lld", n, convertDecimalToBinary(n));

	return 0;
}

int convertBinaryToDecimal(long long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n%10;
		n /= 10;
		decimalNumber += remainder*pow(2, i);
		++i;
	}
	return decimalNumber;
}

long long convertDecimalToBinary(int n)
{
	long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (n != 0)
	{
		remainder = n%2;
		printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, remainder, n/2);
		n /= 2;
		binaryNumber += remainder*i;
		i *= 10;
	}
	return binaryNumber;
}