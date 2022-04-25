#include <iostream>
using namespace std;
class parent{
	public:
		void display()
		{
			cout<<"parent\n";
		}
};
class child1:public parent{
	public:
		void displayc1()
		{
			cout<<"c1\n";
		}
};
class child2:public parent{
	public:
		void displayc2()
		{
			cout<<"c2\n";
		}
};
class child3:public parent{
	public:
		void displayc3()
		{
			cout<<"c3\n";
		}
};
main()
{
	child1 z;
	z.displayc1();
	z.display();
	child2 c4;
	c4.displayc2();
	child3 c7;
	c7.displayc3();
}
