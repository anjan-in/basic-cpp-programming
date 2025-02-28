//w.a.p to accept 10 nos. & display Array in Ascending order & search a no.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int no[10],x,y,z,s;
	cout<<"Enter any 10 nos:"<<endl;
	for(x=0;x<10;x++)
	{
		cin>>no[x];
	}
	for(x=0;x<10;x++)
	{
		for(y=x+1;y<10;y++)
		{
		 if(no[x]>no[y])
		 {
		  z=no[x];
		  no[x]=no[y];
		  no[y]=z;
		 }
		}
	}
	cout<<"Ascending Order:"<<endl;
	for(x=0;x<10;x++)
	{
		cout<<"\n"<<no[x];
	}
	cout<<"\nEnter no. to search=";
	cin>>s;
	for(x=0;x<=9;x++)
	{
		if(no[x]==s)
		{
			cout<<"Search item="<<no[x];
		}
	}
}