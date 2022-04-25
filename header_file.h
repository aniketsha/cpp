#include <iostream>
using namespace std;
struct student
{
	int roll;
	string name;
	void input()
	{
		cout<<"enter name and roll no \n";
		cin>>name;
		cin>>roll;
	}
	void output()
	{
		cout<<"\n name : "<<name;
		cout<<"\n rollno : "<<roll;
	}
};
