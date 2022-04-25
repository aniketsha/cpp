#include <iostream>
using namespace std;
class teacher;
class student {
	int roll;
	string name;
	public:
		student(int roll=0,string name=""):roll(roll),name(name)
		{
		}
		void display()
		{
			cout<<"\n name: "<<name;
			cout<<"\nroll :"<<roll;
		}
		friend class teacher;
};
class teacher{
	int id;
	string name;
	public:
		teacher(int id=1001,string name="t"):id(id),name(name)
		{
		}
		void display()
		{
			student s1(10,"dev");
			s1.roll=20;
			s1.name="ani";
			s1.display();
			cout<<"\n teacher name: "<<name;
			cout<<"\nteacher id :"<<id;
		}
};	
main()
{
	teacher t;
	t.display();
}
