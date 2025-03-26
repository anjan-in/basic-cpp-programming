//w.a.p to check Armstrong no. using function(larger no).
#include<iostream.h>
#include<conio.h>
int check_armstrong(long long);
long long power(int,int);
void main()
{
	clrscr();
	long long n;
	cout<<"Input number=\n";
	cin>>n;
	if(check_armstrong(n)==1)
	cout<<n<<" is an armstrong no.\n";
	else
	cout<<n<<" is not an armstrong no.\n";
}
int check_armstrong(long long n)
{
	long long sum=0,temp;
	int remainder,digits=0;
	temp=n;
	while(temp!=0)
	{
		digits++;
		temp=temp/10;
	}
	temp=n;
	while(temp!=0)
	{
		remainder=temp%10;
		sum=sum+power(remainder,digits);
		temp=temp/10;
	}
	if(n==sum)
	return 1;
	else
	return 0;
}
	long long power(int n,int r)
	{
		int c;
		long long p=1;
		for(c=1;c<=r;c++)
		p=p*n;
		return p;
	}