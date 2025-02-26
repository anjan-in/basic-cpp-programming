#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 int no;
 xyz:cout<<"enter the no.=";
 cin>>no;
 if(no%2==0)
 goto even;
 else
 goto odd;
 even:cout<<"No. is even";
 exit(0);
 odd:cout<<"No. is odd";
 getch();
}