//w.a.p to display a diamond pattern.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x,y,space=1;
	cout<<"Enter no.of rows:\n";
	cin>>n;
	space=n-1;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=space;y++)
		cout<<" ";
		space--;
		for(y=1;y<=2*x-1;y++)
		cout<<"*";
		cout<<"\n";
	}
	space=1;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=space;y++)
		cout<<" ";
		space++;
		for(y=1;y<=2*(n-x)-1;y++)
		cout<<"*";
		cout<<"\n";
	}
}