#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,n;
 long int p=0;
 cout<<"Enter any number=";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  p=p*10+1;
  cout<<p*p;
  cout<<"\n";
 }
  getch();
}