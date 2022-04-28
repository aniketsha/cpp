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
struct student input(struct student *p)
{
	cout<<"enter your roll no : ";
	cin>>p->rollno;
	cout<<"enter your name : ";
	cin>>p->name;
	cout<<"enter your percentage : ";
	cin>>p->percentage;
	cout<<"enter your marks : ";
	for(int i=0; i<5; i++)
	{
		cin>>p->marks[i];
	}
	cout<<"enter date of birth : ";
	cin>>p->d1.dd;
	cout<<"enter month of birth : ";
	cin>>p->d1.mm;
	cout<<"enter year of birth : ";
	cin>>p->d1.yy;
	return *p;
}
void display(struct student *p)
{
	cout<<"roll no: "<<p->rollno<<"\n";
	cout<<"name : "<<p->name<<"\n";
	cout<<"percentage : "<<p->percentage<<"\n marks \n";
	for(int i=0;i<5;i++)
	{
		cout<<p->marks[i]<<"\n";
	}
	cout<<"DOB : "<<p->d1.dd<<"-"<<p->d1.mm<<"-"<<p->d1.yy<<"\n";	
}
main()
{
	struct student s1;
	struct student *p;
	p=&s1;
	input(p);
	display(p);	
}
