#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 将字符串写入文件
	char sentence[1000];
	FILE *fptr;

	fptr = fopen("test.txt", "w");
	if (fptr == NULL)
	{
		printf("Error!");
		exit(1);
	}

	printf("输入字符串：\n");
	fgets(sentence, (sizeof sentence / sizeof sentence[0]), stdin);

	fprintf(fptr, "%s", sentence);
	fclose(fptr);

	return 0;
}