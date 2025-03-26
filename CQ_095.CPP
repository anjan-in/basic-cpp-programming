//w.a.p to draw a concentric circle.
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	int x=320,y=240,rad;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(rad=25;rad<=125;rad=rad+20)
	circle(x,y,rad);
	getch();
	closegraph();
}