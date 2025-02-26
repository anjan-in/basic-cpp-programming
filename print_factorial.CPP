//w.a.p to print factorial of a number.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,fact;
	cout<<"Enter any no.:";
	cin>>fact;
	y=fact-1;
	x=y;
	while(x>=1)
	{
		fact=fact*x;
		x--;
	}
	cout<<"Factorial="<<fact;
}