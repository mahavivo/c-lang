#include <stdio.h>

int main()
{
	// 删除字符串中的特殊字符
	char line[150];
	int i, j;

	printf("输入一个字符串：");
	fgets(line, (sizeof line / sizeof line[0]), stdin);

	for (i = 0; line[i] != '\0'; ++i)
	{
		while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0'))
		{
			for (j = i; line[j] != '\0'; ++j)
			{
				line[j] = line[j+1];
			}
			line[j] = '\0';
		}
	}

	printf("输出：");
	puts(line);

	return 0;
}