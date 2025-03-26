//w.a.p to print A to Z.
#include<iostream.h>
#include<conio.h>
int alpha(int x)
{
	return(x);
}
void main()
{
	clrscr();
	int x;
	cout<<"Alphabets A to Z:\n";
	for(x=65;x<=90;x++)
	{
		cout<<(char)x<<"\t";
	}
}