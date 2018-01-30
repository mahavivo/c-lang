#include <stdio.h>
#include <string.h>

int main()
{
	// 字符串复制
	char src[40];
	char dest[100];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is runoob.com");
	strcpy(dest, src);

	printf("最终的目标字符串：%s\n", dest);

	return (0);
}