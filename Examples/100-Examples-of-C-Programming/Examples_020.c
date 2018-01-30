#include <stdio.h>

int main()
{
	// 小球自由下落

	float h, s;
	h = s = 100;
	h = h/2;
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2*h;
		h = h/2;
	}
	printf("第十次落地时，共经过%f米，第十次反弹高%f米\n", s, h);
}