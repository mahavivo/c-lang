#include <stdio.h>

int main()
{
	// 输出整数
	int number;

	// printf() 输出字符串
	printf("输出一个整数：");

	// scanf() 格式化输入
	scanf("%d", &number);

	// printf() 显示格式化输入
	printf("你输入的整数是：%d", number);
	return 0;
}