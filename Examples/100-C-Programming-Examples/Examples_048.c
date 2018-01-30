#include <stdio.h>

#define LAG >
#define SMA <
#define EQ ==

int main()
{
	// 宏#define命令练习3。
	int i, j;
	printf("请输入两个数字：\n");
	scanf("%d %d", &i, &j);

	if (i LAG j) {
		printf("%d 大于 %d \n", i, j);
	} else if (i EQ j) {
		printf("%d 等于 %d \n", i, j);
	} else if (i SMA j) {
		printf("%d 小于 %d \n", i, j);
	} else {
		printf("，没有值。\n");
	}

	return 0;
}