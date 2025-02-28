//w.a.p to print A to Z & a to z.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x;
	cout<<"A to Z:\n";
	for(x=65;x<=90;x++)
	{
		cout<<(char)x<<"\t";
	}
	cout<<"\n"<<"a to z:\n";
	for(x=97;x<=122;x++)
	{
		cout<<(char)x<<"\t";
	}
}