#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int no;
 cout<<"enter no. b/w 1 to 4=";
 cin>>no;
 switch(no)
 {
  case 1:cout<<"One";
  break;
  case 2:cout<<"Two";
  break;
  case 3:cout<<"Three";
  break;
  case 4:cout<<"Four";
  break;
  default:
  cout<<"No.is out of Range";
  break;
 }
  getch();
}