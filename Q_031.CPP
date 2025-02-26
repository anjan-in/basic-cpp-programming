#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter value of a & b=";
 cin>>a>>b;
 if (a>=b)
 goto xyz;
 else
 goto pqr;
 xyz:
 cout<<"a is largest";
 exit(0);
 pqr:
 cout<<"b is largest";
 getch();
}