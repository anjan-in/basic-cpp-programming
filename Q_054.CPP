#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,j,k;
 cout<<"Enter the range no=";
 cin>>n;
 for(i=2;i<=n;i++)
 {
  k=0;
  for(j=2;j<i/2;j++)
  {
   if(i%j==0)
   {
    k=1;
    break;
   }
  }
   if(k==0&&n!=1)
   cout<<i<<" ";
  }
  getch();
}

