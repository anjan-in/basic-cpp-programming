//w.a.p to find 10 prime number.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,c,i=3,x;
	cout<<"How many prime nos. required=";
	cin>>n;
	if(n>=1)
	{
		cout<<"First "<<n<<" prime nos. are:\n";
		cout<<"2\n";
	}
	x=2;
	while(x<=n)
	{
		for(c=2;c<=i-1;c++)
		{
			if(i%c==0)
			break;
		}
		if(c==i)
		{
			cout<<i<<"\n";
			x++;
		}
		i++;
	}
}
