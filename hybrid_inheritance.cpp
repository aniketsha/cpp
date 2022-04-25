#include <iostream>
using namespace std ;
class parent1{
	public:
		void display1()
		{
			cout<<"im parent 1\n";
		}
};
class parent2{
	public:
		void display2()
		{
			cout<<"im parent 2\n";
		}
};
class parent3{
	public:
		void display3()
		{
			cout<<"im parent 3\n";
		}
};
class child:public parent1, public parent2, public parent3{
	public:
		void displayc()
		{
			cout<<"im child\n";
		}
};
class child1:public child{
	public:
		void displayc1()
		{
			cout<<"im first child of child";
		}
};
class child2:public child{
	public:
		void displayc2()
		{
			cout<<"im second child of child";
		}
};
class child3:public child{
	public:
		void displayc3()
		{
			cout<<"im third child of child";
		}
};
main()
{
	child1 f;
	f.display1();
	f.displayc();
	f.displayc1();
	child2 v;
	v.display2();
	v.displayc2();
	child3 a;
	a.display3();
	a.displayc3();
}
