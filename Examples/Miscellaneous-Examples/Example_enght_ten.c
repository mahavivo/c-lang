#include <stdio.h>
#include <math.h>

// int converDecimalToOctal(int decimalNumber);
long long converOctalToDecimal(int octalNumber);
int main()
{
	// 八进制与十进制相互转换

	// int decimalNumber;
	int octalNumber;

	// printf("输入一个十进制数：");
	// scanf("%d", &decimalNumber);

	printf("输入一个八进制数：");
	scanf("%d", &octalNumber);

	// printf("十进制数 %d 转换为八进制为 %d", decimalNumber, converDecimalToOctal(decimalNumber));
	printf("八进制数 %d 转换为十进制为 %d", octalNumber, converOctalToDecimal(octalNumber));

	return 0;
}

int converDecimalToOctal(int decimalNumber)
{
	int octalNumber = 0, i = 1;

	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}

	return octalNumber;
}

long long converOctalToDecimal(int octalNumber)
{
	int decimalNumber = 0, j = 0;

	while (octalNumber != 0)
	{
		decimalNumber += (octalNumber%10) * pow(8, j);
		++j;
		octalNumber /= 10;
	}

	j = 1;

	return decimalNumber;
}