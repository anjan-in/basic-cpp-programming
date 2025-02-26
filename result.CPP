//Accept roll name phy chem math marks & find total,per(%)& result.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int roll,phy,chem,math,total;
	char name[30];
	float per;
	cout<<"Enter Rollno. Name Phy Chem Maths marks:";
	cin>>roll>>name>>phy>>chem>>math;
	total=phy+chem+math;
	per=total/3;
	cout<<"Total="<<total<<endl;
	cout<<"Percentage="<<per<<endl;
	if(per>=60)
	cout<<"Result:1st div"<<endl;
	else if((per<60)&&(per>=45))
	cout<<"Result:2nd div"<<endl;
	else if((per<45)&&(per>=33))
	cout<<"Result:3rd div"<<endl;
	else
	cout<<"Result:Fail"<<endl;
}