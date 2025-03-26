//w.a.p to find frequency of characters in a string.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char st[100];
	int c=0,count[26]={0};
	cout<<"Enter a string:\n";
	cin>>st;
	while(st[c]!='\0')
	{
		if(st[c]>='a'&&st[c]<='z')
		count[st[c]-'a']++;
		c++;
	}
	for(c=0;c<26;c++)
	{
		cout<<(char)c+'a'<<" occurs "<<count[c]<<" times in the entered string.\n";
	}
}