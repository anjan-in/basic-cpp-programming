//w.a.p to print table of a number.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z;
	cout<<"Enter no. to print table:";
	cin>>x;
	for(y=1;y<=10;y++)
	{
		z=x*y;
		cout<<"\n"<<x<<"X"<<y<<"="<<z;
	}
}