#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int days;
cout<<"enter no of days=";
cin>>days;
int year=days/365;
int temp=days%365;
int month=temp/30;
int rday=temp%30;
cout<<"No of year="<<year<<endl<<"No of month="<<month<<endl
<<"No of remaining days="<<rday<<endl;
getch();
}