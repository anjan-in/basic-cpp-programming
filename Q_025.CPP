#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,d,e;
 cout<<"Enter the values of a,b,c,d and e=";
 cin>>a>>b>>c>>d>>e;
 int p=(a<b)?a:b;
 int q=(p<c)?p:c;
 int r=(q<d)?q:d;
 int min=(r<e)?r:e;
 cout<<"Smallest of five nos="<<min<<endl;
 getch();
}