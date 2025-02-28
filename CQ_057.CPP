//w.a.p to find largest no. from 3 numbers.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z,m;
	int max(int,int,int);
	cout<<"Enter 3 nos:";
	cin>>x>>y>>z;
	m=max(x,y,z);
	cout<<"Largest no. is "<<m;
}
int max(int x,int y,int z)
{
	if((x>y)&&(x>z))
	{
		return(x);
	}
	else if((y>x)&&(y>z))
	{
		return(y);
	}
	else if((z>x)&&(z>y))
	{
		return(z);
	}
	else
	{
		return 0;
	}
}