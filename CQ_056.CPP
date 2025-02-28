//w.a.p to print the largest no. from 2 nos.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,m;
	int max(int,int);
	cout<<"Enter 2 nos:";
	cin>>x>>y;
	m=max(x,y);
	cout<<"largest no. is "<<m;
}
int max(int x,int y)
{
	if(x>y)
	{
		return(x);
	}
	else
	{
		return(y);
	}
}