#include <stdio.h>
#include <string.h>

int main()
{
	// 字符串排序
	int i, j;
	char str[10][50], temp[50];

	printf("输入10个单词：\n");

	for (i = 0; i < 10; ++i)
	{
		scanf("%s[^\n]", str[i]);
	}

	for (i = 0; i < 9; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[i]);
				strcpy(str[j], temp);
			}
		}
	}

	printf("\n排序后：\n");

	for (i = 0; i < 10; ++i)
	{
		puts(str[i]);
	}

	return 0;
}