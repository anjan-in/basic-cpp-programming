//w.a.p to delete an element from an array.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int m1[10],ptn,c,n;
	cout<<"Enter no. of elements in array:\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements:\n";
	for(c=0;c<n;c++)
	{
		cin>>m1[c];
	}
	cout<<"Enter the location where wish to delete element:\n";
	cin>>ptn;
	if(ptn>=n+1)
	{
		cout<<"Deletion not possible.\n";
	}
	else
	{
		for(c=ptn-1;c<n-1;c++)
		m1[c]=m1[c+1];
	}
	cout<<"Resultant array is:\n";
	for(c=0;c<n-1;c++)
	{
		cout<<m1[c]<<"\n";
	}
}
