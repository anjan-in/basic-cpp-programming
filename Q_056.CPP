#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,num=0,rem,nu;
 cout<<"Enter any +ve number=";
 cin>>n;
 nu=n;
 while(nu!=0)
 {
  rem=nu%10;
  num=num+rem*rem*rem;
  nu=nu/10;
 }
  if(num==n)
  {
   cout<<"Armstrong Number";
  }
   else
   {
    cout<<"Not Armstrong Number";
   }
    getch();
  }
