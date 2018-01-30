#include <stdio.h>
#include <math.h>

int main()
{
	// 求100之内的素数
	int i, j, k, n = 0;
	for (i = 2; i <= 100; i++) {
		k = (int)sqrt(i);
		for (j = 2; j <= k; j++) {
			if (i%j == 0) {
				break;	
			}
		}
		if (j > k) {
			printf("%d ", i);
			n++;
			if (n%5 == 0) {
				printf("\n");
			}
		}
	}

	return 0;
}