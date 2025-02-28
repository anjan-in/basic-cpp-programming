//w.a.p to divide 2 numbers:Call by value with actual parameter without return.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y;
	void div(int,int);
	cout<<"Enter 2 nos:";
	cin>>x>>y;
	div(x,y);
}
void div(int a,int b)
{
	int c;
	c=a/b;
	cout<<"Division of "<<a<<"/"<<b<<"="<<c;
}