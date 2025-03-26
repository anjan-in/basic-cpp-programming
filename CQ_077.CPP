//w.a.p to check the number is prime number or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,c=2;
	cout<<"Enter a number to check prime=";
	cin>>n;
	for(c=2;c<=n;c++)
	{
		if(n%c==0)
		{
			cout<<n<<" is not a prime number.";
			break;
		}
		if(c==n)
		cout<<n<<" is a prime number.";
	}
}
