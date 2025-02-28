//w.a.p to display a pyramid.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n;
	cout<<"Enter the number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
}