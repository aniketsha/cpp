#include <iostream>
using namespace std;
struct DOB
{
	int dd;
	int mm;
	int yy;
};
struct student
{
	int rollno;
	string name;
	float percentage;
	int marks[5];
	struct DOB d1;
};
struct student input()
{
	struct student s;
	cout<<"enter your roll no : ";
	cin>>s.rollno;
	cout<<"enter your name : ";
	cin>>s.name;
	cout<<"enter your percentage : ";
	cin>>s.percentage;
	cout<<"enter your marks : ";
	for(int i=0; i<5; i++)
	{
		cin>>s.marks[i];
	}
	cout<<"enter date of birth : ";
	cin>>s.d1.dd;
	cout<<"enter month of birth : ";
	cin>>s.d1.mm;
	cout<<"enter year of birth : ";
	cin>>s.d1.yy;
	return s;
}
void display(struct student s)
{
	cout<<"roll no: "<<s.rollno<<"\n";
	cout<<"name : "<<s.name<<"\n";
	cout<<"percentage : "<<s.percentage<<"\n marks \n";
	for(int i=0;i<5;i++)
	{
		cout<<s.marks[i]<<"\n";
	}
	cout<<"DOB : "<<s.d1.dd<<"-"<<s.d1.mm<<"-"<<s.d1.yy<<"\n";	
}
main()
{
	struct student s1[3];
	int c=1;
	for(int i=0;i<3; i++)
	{
		cout<<"Data of "<<c++<<" student \n";
		s1[i]=input();
	}
	c=1;
	for(int i=0;i<3; i++)
	{
		cout<<"\n data of "<<c++<<" student\n";
		display(s1[i]);
	}
}
