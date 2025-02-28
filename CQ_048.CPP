//w.a.p to transpose 2 matrices.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int m,n,c,d,mat[10][10],trp[10][10];
	cout<<"Enter the no. of rows & columns of matrix:\n";
	cin>>m>>n;
	cout<<"Enter the matix:\n";
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		cin>>mat[c][d];
	}
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		trp[d][c]=mat[c][d];
	}
	cout<<"Transpose matrix:\n";
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			cout<<trp[c][d]<<"\t";
		}
		cout<<"\n";
	}
}
