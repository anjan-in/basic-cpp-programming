//w.a.p to find factorial of a number using function.
#include<iostream.h>
#include<conio.h>
int fact(int f)
{
	return(f);
}
void main()
{
	clrscr();
	int x,y,f;
	int fact(int);
	cout<<"Enter any number:";
	cin>>f;
	y=f-1;
	for(x=y;x>=1;x--)
	{
		f=f*x;
	}
	cout<<"Factorial="<<f;
}