//w.a.p to display fibonacci series using function.
//Call by value with actual parameter with return value.
#include<iostream.h>
#include<conio.h>
int fibo(int z)
{
	return(z);
}
void main()
{
	clrscr();
	int fibo(int z);
	int n=10,i,x=1,y=1,z;
	cout<<"Fibonacci Series:"<<"\n"<<x<<"\n"<<y;
	for(i=1;i<=n;i++)
	{
		z=x+y;
		cout<<"\n"<<z;
		x=y;
		y=z;
	}
}
