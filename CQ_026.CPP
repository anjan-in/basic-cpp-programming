//w.a.p to diplay an alphabetic pyramid.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y;
	for(x=65;x<=70;x++)
	{
		for(y=65;y<=x;y++)
		{
			cout<<(char)x;
		}
		cout<<"\n";
	}
}