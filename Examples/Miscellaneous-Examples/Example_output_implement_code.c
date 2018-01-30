#include <stdio.h>

int main()
{
	// 输出当前文件执行代码
	FILE *fp;
	char c;
	fp = fopen(__FILE__, "r");
	do {
		c = getc(fp);
		putchar(c);
	}

	while (c != EOF);
	fclose(fp);

	return 0;
}