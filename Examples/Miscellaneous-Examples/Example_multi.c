#include <stdio.h>

int main()
{
	// 两个浮点数相乘
	double firstNumber, secondNumber, product;
	printf("输入两个浮点数：");

	scanf("%lf %lf", &firstNumber, &secondNumber);

	product = firstNumber * secondNumber;

	printf("结果 = %.21f", product);

	return 0;
}