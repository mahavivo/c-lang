#include <stdio.h>

int main()
{
	// 一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
	long ge, shi, bai, qian, wan, x;
	printf("请输入 5 位数字：");
	scanf("%ld", &x);
	wan = x/10000;
	qian = x%10000/1000;
	shi = x%100/10;
	ge = x%10;
	if (ge == wan && shi == qian) {
		printf("这是回文数\n");
	} else {
		printf("这不是回文数\n");
	}

	return 0;
}