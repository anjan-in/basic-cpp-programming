//w.a.p to delete vowels from given string.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s[100],t[100];
	int i,j=0;
	int check_vowel(char);
	cout<<"Input a string to delete vowels:\n";
	cin>>s;
	for(i=0;s[i]!='0';i++)
	{
		if(check_vowel(s[i])==0)
		{
			t[j]=s[i];
			j++;
		}
	}
	t[j]='\0';
	strcpy(s,t);
	cout<<"String after deleting vowels:"<<"\n"<<s<<endl;
}
int check_vowel(char c)
{
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		return 1;
		default:
		return 0;
	}
}