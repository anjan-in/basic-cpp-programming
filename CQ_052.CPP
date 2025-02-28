//w.a.p to add 2 numbers using function.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z;
	int add(int,int);
	cout<<"Enter 2 nos:";
	cin>>x>>y;
	z=add(x,y);
	cout<<"Sum of "<<x<<" + "<<y<<"= "<<z;
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}