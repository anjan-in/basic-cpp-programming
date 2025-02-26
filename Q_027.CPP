#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=5;
 xyz:
 cout<<"a="<<a<<endl;
 if (a!=1)
 {
  a=a-1;
  goto xyz;
 }
  getch();
}