//w.a.p to find HCF and LCM of given integer.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,x,y,t,hcf,lcm;
	cout<<"Enter 2 integers:\n";
	cin>>x>>y;
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
	lcm=(x*y)/hcf;
	cout<<"HCF of "<<x<<" and "<<y<<" = "<<hcf<<endl;
	cout<<"\nLCM of "<<x<<" and "<<y<<" = "<<lcm<<endl;
}
