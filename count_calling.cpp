#include <iostream>
using namespace std ;

class student{
	int roll;
	string name;
	static int x;
	public:
		student(int roll=0,string name=""):roll(roll),name(name)
		{
				x++;
		}
		void display()
		{
			cout<<"\nname :"<<name;
			cout<<"\nroll :"<<roll;
		
		}
};
int student::x=0;
main ()
{
	student s1(1,"dev");
	s1.display();
	student s2;
	s2.display();
	cout<<"\ncalling :"<<student::x;
		
}
