//w.a.p to accept choice and do add,sub,multiply & divide.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z,c;
	cout<<"Enter 1 to add, 2 to sub, 3 to multiply & 4 to divide:";
	cin>>c;
	switch(c)
	{
		case 1:cout<<"Enter 2 nos:";
		cin>>x>>y;
		z=x+y;
		cout<<"Sum of "<<x<<"+"<<y<<"="<<z;
		break;
		case 2:cout<<"Enter 2 nos:";
		cin>>x>>y;
		z=x-y;
		cout<<"Sub="<<z;
		case 3:cout<<"Enter 2 nos:";
		cin>>x>>y;
		z=x*y;
		cout<<"Product="<<z;
		break;
		case 4:cout<<"Enter 2 nos:";
		cin>>x>>y;
		z=x/y;
		cout<<"Division="<<z;
		break;
		default :cout<<"Invalid selection";
		break;
	}
}