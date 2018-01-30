#include <stdio.h>

int main()
{
	// 输入三个整数x,y,z，请把这三个数由小到大输出。

	int x, y, z, t;
	printf("\n请输入三个数字：\n");
	scanf("%d%d%d", &x, &y, &z);

	if (x > y) {
		t = x; x = y; y = t;
	}
	if (x > z) {
		t = z; z = x; x = t;
	}
	if (y > z) {
		t = y; y = z; z = t;
	}
	printf("从小到大排序：%d %d %d\n", x, y, z);
}