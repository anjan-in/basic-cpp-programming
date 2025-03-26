//w.a.p to find HCF and LCM of given integer using function.
#include<iostream.h>
#include<conio.h>
long gcd(long,long);
void main()
{
	clrscr();
	long x,y,hcf,lcm;
	cout<<"Enter 2 integers:\n";
	cin>>x>>y;
	hcf=gcd(x,y);
	lcm=(x*y)/hcf;
	cout<<"HCF of "<<x<<" and "<<y<<"= "<<hcf<<endl;
	cout<<"LCM of "<<x<<" and "<<y<<"= "<<lcm<<endl;
}
long gcd(long x,long y)
{
	if(x==0)
	{
		return y;
	}
	while(y!=0)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	}
	return x;
}