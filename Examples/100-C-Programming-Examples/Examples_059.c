#include "graphics.h"
#include <math.h>

int main()
{
	// 画图，综合例子。（在TC中实现）。
	int i,j,k,x0,y0,x,y,driver,mode;
    float a;
    driver=CGA;mode=CGAC0;
    initgraph(&driver,&mode,"");
    setcolor(3);
    setbkcolor(GREEN);
    x0=150;y0=100;
    circle(x0,y0,10);
    circle(x0,y0,20);
    circle(x0,y0,50);
    for(i=0;i<16;i++)
    {
        a=(2*PAI/16)*i;
        x=ceil(x0+48*cos(a));
        y=ceil(y0+48*sin(a)*B);
        setcolor(2); line(x0,y0,x,y);
    }
    setcolor(3);circle(x0,y0,60);
    /* Make 0 time normal size letters */
    settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
    outtextxy(10,170,"press a key");
    getch();
    setfillstyle(HATCH_FILL,YELLOW);
    floodfill(202,100,WHITE);
    getch();
    for(k=0;k<=500;k++)
    {
        setcolor(3);
        for(i=0;i<=16;i++)
        {
            a=(2*PAI/16)*i+(2*PAI/180)*k;
            x=ceil(x0+48*cos(a));
            y=ceil(y0+48+sin(a)*B);
            setcolor(2); line(x0,y0,x,y);
        }
        for(j=1;j<=50;j++)
        {
            a=(2*PAI/16)*i+(2*PAI/180)*k-1;
            x=ceil(x0+48*cos(a));
            y=ceil(y0+48*sin(a)*B);
            line(x0,y0,x,y);
        }
    }
    restorecrtmode();
}