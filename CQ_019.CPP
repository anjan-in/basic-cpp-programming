//Accept number & reverse it.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,rev=0;
	cout<<"Enter any number to reverse:";
	cin>>n;
	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	cout<<"Reverse number="<<rev;
}