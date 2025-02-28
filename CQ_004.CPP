//w.a.p to find out big of 3 nos.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z;
	cout<<"Enter 3 nos:";
	cin>>x>>y>>z;
	if(x>y)
	{
		if(x>z)
		cout<<"X is big";
		else
		cout<<"Z is big";
	}
	else
	{
		if(y>z)
		cout<<"Y is big";
		else
		cout<<"Z is big";
	}
}
