//w.a.p to display 2X3 matrix.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,arr[2][3];
	cout<<"Enter 2X3 matrix nos:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			cout<<"   "<<arr[i][j];
			cout<<"\n";
		}
			cout<<"\n";
}