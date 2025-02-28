//w.a.p to enter a number & check it is palindrome or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,rem,org,rev=0;
	cout<<"Enter a number:";
	cin>>n;
	org=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==org)
	cout<<"Palindrome";
	else
	cout<<"Not Palindrome";
}