//w.a.p to accept 10 nos. & store in Array.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int no[10],x;
	cout<<"Enter any 10 nos:"<<endl;
	for(x=0;x<10;x++)
	{
		cin>>no[x];
	}
	for(x=0;x<10;x++)
	{
		cout<<"\n"<<no[x];
	}
}
