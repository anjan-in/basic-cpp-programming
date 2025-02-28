//w.a.p to swap 2 numbers with 3rd variable using function.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y;
	void swap(int,int);
	cout<<"Enter 2 nos. to swap:";
	cin>>x>>y;
	swap(x,y);
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"Swap nos:"<<a<<" "<<b;
}