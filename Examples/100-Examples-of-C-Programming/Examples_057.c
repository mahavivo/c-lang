#include "graphics.h"

int main()
{
	// 画图，学用line画直线（在TC中实现）。
	int driver, mode, i;
	float x0, y0, y1, x1;
	float j = 12, k;
	driver = VGA;
	mode = VGAHI;
	initgraph(&driver, &mode, "");
	setbkcolor(GREEN);
	x0 = 263;
	y0 = 263;
	y1 = 275;
	x1 = 275;
	for (i = 0; i <= 18; i++) {
		setcolor(5);
		line(x0, y0, x0, y1);
		x0 = x0 - 5;
		y0 = y0 - 5;
		x1 = x1 + 5;
		y1 = y1 + 5;
		j = j + 10;
	}

	return 0;
}