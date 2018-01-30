#include <stdio.h>

struct student
{
	char name[50];
	int roll;
	float marks;
} s;

int main()
{
	// 使用结构体（struct）
	printf("输入信息：\n");

	printf("名字：");
	scanf("%s", s.name);

	printf("编号：");
	scanf("%s", &s.roll);

	printf("成绩：");
	scanf("%s", &s.marks);

	printf("显示信息：\n");

	printf("名字：");
	puts(s.name);

	printf("编号：%d\n", s.roll);

	printf("成绩：%0.1f\n", s.marks);

	return 0;
}