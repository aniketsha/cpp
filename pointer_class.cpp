#include<iostream>
using namespace std;
class parent{
	public:
		void displayp()
		{
			cout<<"p\n";
		}
		void display()
		{
			cout<<"parent\n";
		}
};
class child:public parent{
	public:
		void displayc()
		{
			cout<<"c\n";
		}
		void display()
		{
			cout<<"child\n";
		}
};
main()
{
	child c1;
	child *p;
	p=&c1;
	p->displayc();
	p->displayp();
	p->display();
}
