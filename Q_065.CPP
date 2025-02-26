#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,n;
 cout<<"Enter any number=";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   cout<<" "<<(i+j+1)%2;
  }
  cout<<"\n";
 }
  getch();
}