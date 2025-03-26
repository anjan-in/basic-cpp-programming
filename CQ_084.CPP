//w.a.p to reverse string.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[100];
	cout<<"Enter a string to reverse:\n";
	cin>>a;
	strrev(a);
	cout<<"Reverse of entered string:\n"<<a;
}