//w.a.p to display even no. & odd no. from 1 to 20.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y;
	cout<<"Odd numbers from 1 to 20:"<<"\n";
	for(x=1;x<=20;x=x+2)
	{
		cout<<x<<endl;
	}
	cout<<"Even numbers from 1 to 20:"<<"\n";
	for(y=1;y<=20;y++)
	{
		if(y%2==0)
		cout<<y<<endl;
	}
}
