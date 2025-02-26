#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int dv,ds;
cout<<"enter two values=";
cin>>dv>>ds;
float Q=dv/ds;
float rm=dv-(Q*ds);
cout<<"remainder of two nos="<<rm<<endl;
getch();
}