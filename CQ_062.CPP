//w.a.p to swap 2 numbers using function & pointer.
//Call by value:function by reference.
#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b);
int main()
{
	clrscr();
	int m=22,n=44;
	cout<<"value before swap a="<<m<<" and b="<<n;
	swap(&m,&n);
}
void swap (int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
	cout<<"\nvalue after swap a="<<*a<<" and b="<<*b;
}