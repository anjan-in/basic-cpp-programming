//w.a.p to accept User name & Password.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char user[30];
	char pwd;
	cout<<"Enter User name:";
	cin>>user;
	cout<<"Enter password:";
	while((x=getch())!=13)
	{
		cout<<"*";
	}
}