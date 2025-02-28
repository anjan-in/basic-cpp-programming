//w.a.p to display a reverse pyramid.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,z;
	for(x=1;x<=5;x++)
	{
	 for(y=5;y>=x;y--)
	 {
		cout<<" "<<x;
	 }
	 cout<<"\n";
	 for(z=1;z<=x;z++)
	 {
		cout<<" ";
	 }
	}
}