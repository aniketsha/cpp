#include <iostream>
using namespace std;
class grandparent{
	public:
		grandparent()
		{
			cout<<"grandparent\n";
		}
		void displaygp()
		{
			cout<<"gp\n";
		}
};
class parent:public grandparent{//multilevel inheritance
	public:	
		parent()
		{
			cout<<"parent\n";
		}
		void displayp()
		{
			cout<<"p\n";
		}
};
class child:public parent{
	public:
		child()
		{
			cout<<"child\n";
		}
		void displayc()
		{
			cout<<"c\n";
		}
};
main()
{
	child s;
	s.displayc();
	s.displaygp();
	s.displayp();
}
