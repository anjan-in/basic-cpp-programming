#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter values of a,b and c=";
cin>>a>>b>>c;
int d=(a<b)?a:b;
int min=(d<c)?d:c;
cout<<"smallest no="<<min<<endl;
getch();
}