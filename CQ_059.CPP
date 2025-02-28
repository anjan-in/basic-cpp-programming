//w.a.p to swap 2 numbers using function without 3rd variable.
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
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Swap nos:"<<a<<" "<<b;
}