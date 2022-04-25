#include <iostream>
using namespace std;
class parent{
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
class child1:public parent{
	public:
		child1()
		{
			cout<<"child\n";
		}
		void displayc1()
		{
			cout<<"c1\n";
		}
};
main()
{
	child1 d;
	d.displayc1();
	d.displayp();
}
