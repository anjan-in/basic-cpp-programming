//w.a.p to sum 2X3 matrix.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,mat1[2][3],mat2[2][3],mat3[2][3];
	cout<<" Enter 2X3 matrix nos:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat1[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat2[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	cout<<" Matrix is:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		cout<<"  "<<mat3[i][j];
		cout<<endl;
	}
	cout<<endl;
}