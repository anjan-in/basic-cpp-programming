//w.a.p to find square root of a number using function.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,sq;
	int pow(int);
	cout<<"Enter any number=";
	cin>>x;
	sq=pow(x);
	cout<<"Square root="<<sq;
}
int pow(int x)
{
	int sq;
	sq=x*x;
	return(sq);
}
