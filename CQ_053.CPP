//w.a.p to multiply 2 numbers:Call by value with actual parameter.
//User-defined function.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z;
	int mul(int,int);
	cout<<"Enter 2 nos:";
	cin>>x>>y;
	z=mul(x,y);
	cout<<"Product of "<<x<<" X "<<y<<" = "<<z;
}
int mul(int x,int y)
{
	int z;
	z=x*y;
	return(z);
}