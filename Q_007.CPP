#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter three values=";
cin>>a>>b>>c;
float s=(a+b+c)/2.0;
float area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"area of triangle="<<area<<endl;
getch();
}