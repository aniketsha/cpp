#include <iostream>
using namespace std;
class parent1{
	public:
		void displayp1()
		{
			cout<<"p1\n";
		}
};
class parent2{
	public:
		void displayp2()
		{
			cout<<"p2\n";
		}
};
class parent3{
	public:
		void displayp3()
		{
			cout<<"p3\n";
		}
};
class child:public parent1,public parent2,public parent3{
	public:
		void displayc()
		{
			cout<<"i am child\n";
		}
};
main()
{
	child a;
	a.displayc();
	a.displayp1();
	a.displayp2();
	a.displayp3();
}
