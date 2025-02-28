//w.a.p to accept month no. & print last date.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int m,y;
	cout<<"Enter month no. & year:";
	cin>>m>>y;
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:cout<<"Last date is 31";
		break;
		case 4:
		case 6:
		case 9:
		case 11:cout<<"Last date is 30";
		break;
		case 2:if(y%4==0)
		cout<<"Last date is 29";
		else
		cout<<"Last date is 28";
		break;
		default :cout<<"Invalid month";
		break;
	}
}