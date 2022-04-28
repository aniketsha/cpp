#include<iostream>
using namespace std;
class parent{
	public:
		void displayp()
		{
			cout<<"p\n";
		}
		virtual void display()
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
	parent *p;//pointer of parent
	p=&c1;//sending address of child
	//it will not call the function of child(displayc) as its parent function
	p->displayp();
	p->display();
}
