//w.a.p to print 1 to 10 & 10 to 1 using do-while loop.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=1;
	do
	{
	 cout<<x<<"\n";
	 x++;
	}
	while(x<=10);
	x=10;
	do
	{
	 cout<<x<<"\t";
	 x--;
	}
	while(x>=1);
}
