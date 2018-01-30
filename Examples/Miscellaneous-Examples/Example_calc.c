#include <stdio.h>

int main()
{
	// 实现简单的计算器

	char operator;
	double firstNumber, secondNumber;

	printf("输入操作符(+, -, *, /)：");
	scanf("%c", &operator);

	printf("输入两个数字：");
	scanf("%lf %lf", &firstNumber, &secondNumber);

	switch (operator)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
			break;
		default:
			printf("Error! operator is not correct");
	}

	return 0;
}