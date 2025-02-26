#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i;
 for(i=65;i<=90;i++)
 {
  if((i==65)||(i==69)||(i==73)||
  (i==79)||(i==85))
  continue;
  else
  cout<<(char)i<<"\t";
 }
  getch();
}