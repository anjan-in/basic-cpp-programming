#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
cout<<"enter values of a,b,c and d=";
cin>>a>>b>>c>>d;
if((c-d)!=0)
 {
   float ratio=(float)(a+b)/(c+d);
   cout<<"ratio="<<ratio;
 }
   getch();
}