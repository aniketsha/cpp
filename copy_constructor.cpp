#include <iostream>
using namespace std;
class student
{
	int roll;
	string name;
	public:
	student()
	{
		cout<<"enter name and rollno:";
		cin>>name>>roll;
	}
	student(int r,string n)
	{
		roll=r;
		name=n;
	}
	student (student &s)
	{
		name=s.name;
		roll=s.roll;
	}
	void display()
	{
		cout<<"\nname :"<<name;
		cout<<"\nroll no :"<<roll;
	}
};
main()
{
	student s;
	s.display();
	//student s1(12,"dev");
	//s1.display();
	student s2(s);
	s2.display();
}
