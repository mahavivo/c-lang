#include <stdio.h>

int main()
{
	// 计算 int, float, double 和 char 字节大小

	int integerType;
	float floatType;
	double doubleType;
	char charType;

	// 计算 long long, long double 字节大小

	int a;
	long b;
	long long c;

	double e;
	long double f;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld bytes\n", sizeof(charType));

	printf("Size of int: %ld bytes\n", sizeof(a));
	printf("Size of long: %ld bytes\n", sizeof(b));
	printf("Size of long long: %ld bytes\n", sizeof(c));
	printf("Size of double: %ld bytes\n", sizeof(e));
	printf("Size of long double: %ld bytes\n", sizeof(f));

	return 0;
}