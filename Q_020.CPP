#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter values of a,b and c=";
cin>>a>>b>>c;
if(a<b)
 {
   if(a<c)
   cout<<"a is smallest no";
   else
   cout<<"c is smallest no";
 }
 else
 {
   if(b<c)
   cout<<"b is smallest no";
   else
   cout<<"c is smallest no";
 }
   getch();
}