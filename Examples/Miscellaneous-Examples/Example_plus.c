#include <stdio.h>

int main()
{
	// 两个整数相加
	int firstNumber, secondNumber, sumOfTowNumbers;

	printf("输入两个数(以空格分割)：");

	scanf("%d %d", &firstNumber, &secondNumber);

	sumOfTowNumbers = firstNumber + secondNumber;

	printf("%d + %d = %d", firstNumber, secondNumber, sumOfTowNumbers);
	return 0;
}