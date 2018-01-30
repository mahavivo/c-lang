#include <stdio.h>

int main()
{
	// 判断元音/辅音

	char c;
	int isLowercaseVowel, isUppercaseVowel;

	printf("输入一个字母：");
	scanf("%c", &c);

	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (isLowercaseVowel || isUppercaseVowel)
		printf("%c 是元音", c);
	else
		printf("%c 是辅音", c);

	return 0;
}