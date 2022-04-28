#include <iostream>
using namespace std;
struct student
{
	int rollno;
	string name;
	float percentage;
	int marks[5];
};
struct student input ()
{
	struct student s;
	cout<<"rollno : ";
	cin>>s.rollno;
	cout<<"name : ";
	cin>>s.name;
	cout<<"percentage : ";
	cin>>s.percentage;
	cout<<"marks : ";
	for(int i=0;i<5;i++)
	{
		cin>>s.marks[i];
	}
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
}
main()
{
	struct student s1=input();
	display(s1);
	cout<<"\n for another student \n";
	struct student s2=input();
	display(s2);
}
