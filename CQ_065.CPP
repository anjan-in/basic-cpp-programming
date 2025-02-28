//w.a.p to display fibonacci series using function.
//Call by value: actual parameter without return value.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int z;
	void fibo(int);
	fibo(z);
}
void fibo(int z)
{
	int n=10,i,x=1,y=1;
	cout<<"Fibonacci Series:"<<"\n"<<x<<"\n"<<y;
	for(i=1;i<=n;i++)
	{
		z=x+y;
		cout<<"\n"<<z;
		x=y;
		y=z;
	}
}
