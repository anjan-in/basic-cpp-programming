//w.a.p to check prime number using function.
#include<iostream.h>
#include<conio.h>
int check_prime(int);
void main()
{
	clrscr();
	int n,result;
	cout<<"Enter an integer to check prime\n";
	cin>>n;
	result=check_prime(n);
	if(result==1)
	cout<<n<<" is prime no.\n";
	else
	cout<<n<<" is not a prime no.\n";
}
int check_prime(int a)
{
	int c;
	for(c=2;c<=a-1;c++)
	{
		if(a%c==0)
		return 0;
	}
		if(c==a)
		return 1;
}
