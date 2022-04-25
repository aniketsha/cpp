#include <iostream>
using namespace std;
class parent{
	public:	
		void display()
		{
			cout<<"p\n";
		}
		void show()
		{
			cout<<"parent\n";
		}
};
class child:public parent{
	public:
		void display()
		{
			cout<<"c\n";
		}
};
main()
{
	child s;
	s.show();
	s.display();
	s.display();
}
