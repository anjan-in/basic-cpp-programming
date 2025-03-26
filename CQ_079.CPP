//w.a.p to check palindrome or not.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[100],b[100];
	cout<<"Enter the string to check:\n";
	cin>>a;
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	cout<<"Entered string is a palindrome.\n";
	else
	cout<<"Entered string is not a palindrome.\n";
}
