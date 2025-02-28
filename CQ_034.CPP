//w.a.p to accept input and print in capital.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x;
	cout<<"Enter name:";
	while((x=getch())!=13)
	{
		if((x>=97)&&(x<=122))
		//y=x-32;
		cout<<(char)x-32;
		else
		cout<<(char)x;
	}
}