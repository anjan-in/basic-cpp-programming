#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int marks;
 cout<<"enter the marks b/w 1 to 100=";
 cin>>marks;
 if(marks>=80)
 cout<<"grade=A"<<endl;
 else
 if(marks>=60&&marks<80)
 cout<<"grade=B"<<endl;
 else
 if(marks>=40&&marks<60)
 cout<<"grade=C"<<endl;
 else
 cout<<"grade=Fail"<<endl;
 getch();
}