#include <stdio.h>

void reverse(char* s)
{
	int len = 0;
	char* p = s;
	while (*p != 0) {
		len++;
		p++;
	}

	int i = 0;
	char c;
	while (i <= len / 2 - 1) {
		c = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = c;
		i++;
	}
}

int main()
{
	// 字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
	char s[] = "www.zhengss.com";
	printf("'%s' => \n", s);
	reverse(s);
	printf("'%s'\n", s);

	return 0;
}