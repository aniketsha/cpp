#include <iostream>
using namespace std ;
class student{
	int roll;
	string name;
	public:
		student(int roll=0,string name=""):roll(roll),name(name)
		{
		}
		void display()
		{
			cout<<"\nname :"<<name;
			cout<<"\nroll :"<<roll;
		}
		friend void fdisplay();
};
void fdisplay()
{
	student s1;
	s1.roll=10;
	s1.name="ani";
	s1.display();
}
main ()
{
	student s1(1,"dev");
	s1.display();
	student s2;
	s2.display();
	fdisplay();
}
