#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int num,i,count=0;
 cout<<"Enter a number=";
 cin>>num;
 for(i=2;i<num;i++)
 {
  if(num%i==0)
  {
   count++;
   break;
  }
 }
  if(count==0)
  {
   cout<<"This is not a composite number";
  }
   else
   {
    cout<<"This is a composite number";
   }
    getch();
  }