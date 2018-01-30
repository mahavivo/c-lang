#include <stdio.h>

#define N 10

int main()
{
	// 对10个数进行排序。

	int i, j, a[N], temp;
	printf("请输入 10 个数字：\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N-1; i++) {
		int main = i;
		for (j = i+1; j < N; j++) {
			if (a[main] > a[j]) {
				main = j;
			}
		}
		if (main != i) {
			temp = a[main];
			a[main] = a[i];
			a[i] = temp;
		}
	}
	printf("排序结果是：\n");
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}