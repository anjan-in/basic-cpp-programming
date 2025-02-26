#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
cout<<"enter the value of a and b=";
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"swap value of a="<<a<<endl
<<"swap value of b="<<b<<endl;
getch();
}
