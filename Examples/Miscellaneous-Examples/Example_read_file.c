#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 从文件中读取一行
	char c[1000];
	FILE *fptr;

	if ((fptr = fopen("test.txt", "r")) == NULL)
	{
		printf("Error! opening file");
		// 文件指针返回 NULL 则退出
		exit(1);
	}

	// 读取文本，知道碰到新的一行开始
	fscanf(fptr, "%[^\n]", c);

	printf("读取内容：\n%s", c);
	fclose(fptr);

	return 0;
}