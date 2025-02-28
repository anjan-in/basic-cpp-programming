//w.a.p to diplay an alphabetic pyramid.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y;
	for(x=65;x<=75;x+=2)
	{
		for(y=65;y<=x;y+=2)
		{
			cout<<(char)x;
		}
		cout<<"\n";
	}
}