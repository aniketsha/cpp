#include <iostream>
using namespace std ;
class student{
	int roll;
	string name;
	public:
		student(int roll=0,string name="")
		{
			this->roll=roll;
			this->name=name;
		}
		void display()
		{
			cout<<"\nname :"<<name;
			cout<<"\nroll :"<<roll;
		}
};

main ()
{
	student s1(1,"dev");
	s1.display();
	student s2;
	s2.display();
}
