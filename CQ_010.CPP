//w.a.p to print & sum the series 1+2+3+4+5+6+7+8+9+10
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y=0;
	for(x=1;x<=10;x++)
	{
		y=y+x;
		cout<<x<<"+";
	}
	cout<<"\b="<<y<<endl;
}
