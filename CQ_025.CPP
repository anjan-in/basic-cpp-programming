//w.a.p to display an alphabetic pyramid.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n,p=65;
	for(i=65;i<=70;i++)
	{
		for(j=65;j<=i;j++)
		{
			cout<<(char)p++;
		}
		cout<<"\n";
	}
}