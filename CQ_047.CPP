//w.a.p to subtract 2 matrices.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int m,n,c,d,m1[10][10],m2[10][10],diff[10][10];
	cout<<"Enter the no. of rows & columns of matrix:\n";
	cin>>m>>n;
	cout<<"Enter the first matix:\n";
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		cin>>m1[c][d];
	}
	cout<<"Enter second matrix:\n";
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		cin>>m2[c][d];
	}
	cout<<"Difference of matrices:\n";
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			diff[c][d]=m1[c][d]-m2[c][d];
			cout<<diff[c][d]<<"\t";
		}
		cout<<"\n";
	}
}
