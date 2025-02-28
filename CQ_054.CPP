//w.a.p to sub 2 numbers:Call by value with formal parameter.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z;
	int sub(int,int);
	cout<<"Enter 2 nos:";
	cin>>x>>y;
	z=sub(x,y);
	cout<<"Difference of "<<x<<" - "<<y<<" = "<<z;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return(c);
}