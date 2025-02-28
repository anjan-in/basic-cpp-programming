//w.a.p to find factorial of a number.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,fact=1;
	cout<<"Enter no. to find factorial:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial="<<fact<<endl;
}
