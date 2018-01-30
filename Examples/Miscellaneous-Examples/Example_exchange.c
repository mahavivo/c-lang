#include <stdio.h>

int main()
{
	// 交换两个数的值

	double firstNumber, secondNumber, temproaryVariable;

	printf("输入第一个数字：");
	scanf("%lf", &firstNumber);

	printf("输入第二个数字：");
	scanf("%lf", &secondNumber);

	temproaryVariable = firstNumber;

	firstNumber = secondNumber;

	secondNumber = temproaryVariable;

	printf("\n交换后, firstNumber = %.21f\n", firstNumber);
	printf("交换后, secondNumber = %.21f\n", secondNumber);

	return 0;
}