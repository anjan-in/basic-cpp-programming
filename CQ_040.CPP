//w.a.p to print 1 to 100 & 100 to 1 using do-while loop.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=1;
	do
	{
	 cout<<x<<"\t";
	 x++;
	}
	while(x<=100);
	cout<<"\n";
	x=100;
	do
	{
	 cout<<x<<"\t";
	 x--;
	}
	while(x>=1);
}
