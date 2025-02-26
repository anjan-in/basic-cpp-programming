#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
cout<<"enter the value of a and b=";
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"swap value of a="<<a<<endl<<"swap value of b="<<b<<endl;
getch();
}