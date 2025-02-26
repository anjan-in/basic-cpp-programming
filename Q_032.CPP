#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 int a,b;
 xyz:cout<<"Enter any number=";
 cin>>a>>b;
 if(a>=b)
 goto max;
 else
 goto min;
 max:
 cout<<"Number is largest";
 exit(0);
 min:
 cout<<"Number is smallest";
 getch();
}