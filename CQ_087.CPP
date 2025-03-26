//w.a.p to find frequency of characters in a string using function.
#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
	clrscr();
	void find(char[],int[]);
	char st[100];
	int c,count[26]={0};
	cout<<"Input a  string:\n";
	cin>>st;
	find(st,count);
	cout<<"Character count\n";
	for(c=0;c<20;c++)
	cout<<c+'a'<<"\t"<<count[c]<<endl;
}
void find(char s[],int count[])
{
	int c=0;
	while(s[c]!='\0')
	{
		if(s[c]>='a'&&s[c]<='z')
		count[s[c]-'a']++;
		c++;
	}
}