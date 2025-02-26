#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=1;
 xyz:
 cout<<"a="<<a<<endl;
 if (a!=5)
 {
  a=a+1;
  goto xyz;
 }
  getch();
}