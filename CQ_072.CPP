//w.a.p to display a reverse pyramid.
#include<iostream.h>
#include<conio.h>
int pyramid(int y)
{
	return(y);
}
void main()
{
	clrscr();
	int x,y,z;
	for(x=1;x<=5;x++)
	{
		for(y=5;y>=x;y--)
		{
			cout<<" "<<"*";
		}
		cout<<"\n";
		for(z=1;z<=x;z++)
		{
			cout<<" ";
		}
	}
}