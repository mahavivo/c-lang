#include <stdio.h>

int main()
{
	// 利用递归方法求5!。

	int i;
	int fact(int);
	for (i =0; i < 6; i++)
	{
		printf("%d!=%d\n", i, fact(i));
	}
}

int fact(int j)
{
	int sum;
	if (j == 0) {
		sum = 1;
	} else {
		sum = j * fact(j - 1);
	}
	return sum;
}