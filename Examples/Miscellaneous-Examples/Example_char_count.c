#include <stdio.h>

int main()
{
	// 字符串中各种字符计算
	char line[150];
	int i, vowels, consonants, digits, spaces;

	vowels = consonants = digits = spaces = 0;

	printf("输入一个字符串：");
	scanf("%[^\n]", line);

	for (i = 0; line[i] != '\0'; ++i)
	{
		if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
		{
			++vowels;
		}
		else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i]>='A'&& line[i]<='Z'))
		{
			++consonants;
		}
		else if (line[i] >= '0' && line[i] <= '9')
		{
			++digits;
		}
		else if (line[i] == ' ')
		{
			++spaces;
		}
	}

	printf("元音：%d", vowels);
	printf("\n辅音：%d", consonants);
	printf("\n数字：%d", digits);
	printf("\n空白符：%d", spaces);

	return 0;
}