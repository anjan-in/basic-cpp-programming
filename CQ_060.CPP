//w.a.p to find perimeter & area of rectangle using function.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int l,b,per,ar;
	int perimeter(int,int);
	int area(int,int);
	cout<<"Enter length & width:";
	cin>>l>>b;
	per=perimeter(l,b);
	ar=area(l,b);
	cout<<"Perimeter="<<per<<endl;
	cout<<"Area="<<ar;
}
int perimeter(int l,int b)
{
	int per;
	per=2*(l+b);
	return(per);
}
int area(int l,int b)
{
	int ar;
	ar=l*b;
	return(ar);
}

