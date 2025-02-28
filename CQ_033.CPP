//w.a.p to sum the digit of a number.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z=10,a,sum=0;
	cout<<"Enter any number=";
	cin>>x;
	y=1;
	while(y<=4)
	{
		a=x%z;
		sum=sum+a;
		x=(x-a)/z;
		y++;
	}
	cout<<sum;
}