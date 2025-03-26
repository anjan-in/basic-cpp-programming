//w.a.p to check armstrong no(small numbers).
#include<iostream.h>
#include<conio.h>
int power(int,int);
void main()
{
	clrscr();
	int n,sum=0,temp,remainder,digits=0;
	cout<<"Input an integer\n";
	cin>>n;
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
	cout<<n<<" is an armstrong no.";
	else
	cout<<n<<" is not an armstrong no.";
}
int power(int n,int r)
{
	int c,p=1;
	for(c=1;c<=r;c++)
	p=p*n;
	return p;
}