#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,rev=0;
 cout<<"Enter the number=";
 cin>>n;
 while(n>0)
 {
  rev=rev*10+n%10;
  n=n/10;
 }
  cout<<"Reverse number="<<rev;
  getch();
}