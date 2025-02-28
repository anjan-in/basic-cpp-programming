//w.a.p to accept any no.& display binary no.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,c=50,r=10;
	cout<<"Enter any number=";
	cin>>x;
	cout<<"Binary number:";
	while(x>=2)
	{
		y=x%2;
		gotoxy(c,r);
		cout<<y;
		x=x/2;
		c=c-5;
	}
	gotoxy(c,r);
	cout<<x;
}