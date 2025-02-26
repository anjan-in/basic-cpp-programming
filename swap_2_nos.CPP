//w.a.p to swap 2 nos. without using 3rd variable.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y;
	cout<<"Enter 2 nos:";
	cin>>x>>y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"Swap of nos:"<<x<<" "<<y<<endl;
}
