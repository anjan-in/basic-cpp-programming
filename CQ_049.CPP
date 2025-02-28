//w.a.p to reverse the elements of an array.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,c,d,m1[10],m2[10];
	cout<<"Enter no. of elements in matrix:\n";
	cin>>n;
	cout<<"Enter the matrix:\n";
	for(c=0;c<n;c++)
	{
		cin>>m1[c];
	}
	c=n-1;
	d=0;
	while(c>=0)
	{
		m2[d]=m1[c];
		c--;
		d++;
	}
	for(c=0;c<n;c++)
	{
		m1[c]=m2[c];
	}
	cout<<"Reverse Array matrix:\n";
	for(c=0;c<n;c++)
	{
		cout<<m1[c]<<"\n";
	}
}