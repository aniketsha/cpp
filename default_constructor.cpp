#include <iostream>
using namespace std;
class student{
	int roll;
	string name;
	public:
	student()
	{
		cout<<"enter roll no and name\n";
		cin>>roll>>name;
	}
	student(int r,string n)
	{
		roll=r;
		name=n;
		cout<<"name :"<<name;
		cout<<"\nroll no :"<<roll;
	}
	void display()
	{
		cout<<"\n"<<roll<<"\n";
		cout<<name;
	}
};
main()
{
	//student s1;
	student s2(10,"ani");
	//s1.display();
}
