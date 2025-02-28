//w.a.p to find the trigonometric value.
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int x;
	float y,z;
	cout<<"Enter any number=";
	cin>>x;
	y=sin(x*3.14/180);
	z=sin(x);
	cout<<"sin"<<x<<" = "<<y<<endl;
	cout<<"sin"<<x<<" =radian:"<<z;
}
