#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 cout<<"enter any characters=";
 cin>>ch;
 switch(ch)
 {
  case 'a':cout<<"Vowel";
  break;
  case 'e':cout<<"Vowel";
  break;
  case 'i':cout<<"Vowel";
  break;
  case 'o':cout<<"Vowel";
  break;
  case 'u':cout<<"Vowel";
  break;
  default:
  cout<<"Consonant";
 }
  getch();
}