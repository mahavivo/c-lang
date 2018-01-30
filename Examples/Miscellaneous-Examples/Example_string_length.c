#include <stdio.h>
#include <string.h>

int main()
{
	// 计算字符串长度
	char s[1000];
	int len;

	printf("输入字符串：");
	scanf("%s", s);
	len = strlen(s);

	printf("字符串长度：%d", len);

	return 0;
}