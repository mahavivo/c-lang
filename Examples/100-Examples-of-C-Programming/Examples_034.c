#include <stdio.h>

void hello_word(void)
{
	printf("Hello, world!\n");
}

void three_hellos(void)
{
	int counter;
	for (counter = 1; counter <= 3; counter++) {
		hello_word();
	}
}

int main()
{
	// 练习函数调用。

	three_hellos();
}