//w.a.p to reverse a string using recursion(function).
#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
	clrscr();
	void reverse(char*,int,int);
	char a[100];
	cout<<"Enter a string:\n";
	cin>>a;
	reverse(a,0,strlen(a)-1);
	cout<<a;
}
void reverse(char*x,int begin,int end)
{
	char c;
	if(begin>=end)
	return;
	c=*(x+begin);
	*(x+begin)=*(x+end);
	*(x+end)=c;
	reverse(x,++begin,--end);
}