//w.a.p to accept month no. & print month name.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int m;
	cout<<"Enter month no.:";
	cin>>m;
	switch(m)
	{
		case 1:cout<<"Jan";
		break;
		case 2:cout<<"Feb";
		break;
		case 3:cout<<"March";
		break;
		case 4:cout<<"April";
		break;
		case 5:cout<<"May";
		break;
		case 6:cout<<"June";
		break;
		case 7:cout<<"July";
		break;
		case 8:cout<<"Aug";
		break;
		case 9:cout<<"Sep";
		break;
		case 10:cout<<"Oct";
		break;
		case 11:cout<<"Nov";
		break;
		case 12:cout<<"Dec";
		break;
		default :cout<<"Invalid month no.";
		break;
	}
}