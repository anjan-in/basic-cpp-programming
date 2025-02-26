#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i;
 for(i=1;i<=5;i++)
 {
  if((i==3)||(i==4))
  continue;
  else
  cout<<"i="<<i<<"\t";
 }
  getch();
}