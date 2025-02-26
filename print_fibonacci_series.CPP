//w.a.p to display fibonacci series.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=1,y=1,n=10,i,z;
	cout<<"Fibonacci series:\n"<<y<<","<<y;
	for(i=1;i<=n;i++)
	{
		z=x+y;
		cout<<","<<z;
		x=y;
		y=z;
	}
}