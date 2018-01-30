#include <stdio.h>

int main()
{
	// 判断闰年

	int year;

	printf("输入年份：");
	scanf("%d", &year);

	if (year%4 == 0)
	{
		if (year%100 == 0)
		{
			if (year%400 == 0)
				printf("%d 是闰年", year);
			else
				printf("%d 不是闰年", year);
		} else {
			printf("%d 是闰年", year);
		}
	} else {
		printf("%d 不是闰年", year);
	}

	return 0;
}