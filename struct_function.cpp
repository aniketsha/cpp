#include <iostream>
using namespace std;
struct dob
{
	int d,m,y;
};
struct student
{
	int roll;
	string name;
	float percentage;
	//int date,month,year;
	struct dob d;
	void input()
	{
		cout<<"enter roll no, name , %age , date of birth\n";
		cin>>roll>>name>>percentage>>d.d>>d.m>>d.y;
	}
	void output()
	{
		cout<<"info ";
		cout<<"\n roll no: "<<roll;
		cout<<"\n name: "<<name;
		cout<<"\n %age : "<<percentage;
		cout<<"\n date of birth: "<<d.d<<"-"<<d.m<<"-"<<d.y;
	}
};
struct teacher
{
	string depart;int salary;
	string name;
	int date,month,year;
	struct dob d;
	void input()
	{
		cout<<"enter name of department, name , date of birth and salary \n";
		cin>>depart>>name>>d.d>>d.m>>d.y>>salary;
	}
	void output()
	{
		cout<<"info ";
		cout<<"\n department: "<<depart;
		cout<<"\n name: "<<name;
		cout<<"\n salary : "<<salary;
		cout<<"\n date of birth: "<<d.d<<"-"<<d.m<<"-"<<d.y;
	}
};
main()
{
	struct student s;
	s.input();
	s.output();
	cout<<"\n For teacher \n";
	struct teacher t;
	t.input();
	t.output();
}
