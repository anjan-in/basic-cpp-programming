//w.a.p to check 2 string are "ANAGRAM".
/*ANAGRAM are words consisting of alphabets only,if the letters from one word
can be rearranged to form the other word.*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int check_anagram(char[],char[]);
	char a[100],b[100];
	int flag;
	cout<<"Enter 1st string:\n";
	cin>>a;
	cout<<"Enter 2nd string:\n";
	cin>>b;
	flag=check_anagram(a,b);
	if(flag==1)
	cout<<a<<" and "<<b<<" are anagrams."<<endl;
	else
	cout<<a<<" and "<<b<<" are not anagrams."<<endl;
}
int check_anagram(char a[],char b[])
{
	int first[26]={0},second[26]={0},c=0;
	while(a[c]!='\0')
	{
		first[a[c]-'a']++;
		c++;
	}
	c=0;
	while(b[c]!='\0')
	{
		second[b[c]-'a']++;
		c++;
	}
	for(c=0;c<26;c++)
	{
		if(first[c]!=second[c])
		return 0;
	}
	return 1;
}