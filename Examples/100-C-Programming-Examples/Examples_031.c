#include <stdio.h>

int main()
{
	// 请输入星期几的第一个字母来判断一下是星期几，
	// 如果第一个字母一样，则继续判断第二个字母。
	char i, j;
	printf("请输入第一个字母：");
	scanf("%c", &i);
	getchar();
	switch (i)
	{
		case 'm':
			printf("monday\n");
			break;
		case 'w':
			printf("wendnesday\n");
			break;
		case 'f':
			printf("friday\n");
			break;
		case 't':
			printf("请输入下一个字母\n");
			scanf("%c", &j);
			if (j == 'u') {printf("tuesday\n");break;}
			if (j == 'u') {printf("thursday\n");break;}
		case 's':
			printf("请输入下一个字母\n");
			scanf("%c", &j);
			if (j == 'a') {printf("saturday\n");break;}
			if (j == 'u') {printf("sunday\n");break;}
		default :
			printf("error\n");
			break;
	}

	return 0;
}