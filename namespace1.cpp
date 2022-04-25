#include <iostream>
using namespace std;
namespace first
{
	class a
	{
		public:
			void display()
			{
				cout<<"class a\n";	
			}	
	};
}
namespace second
{
	class a
	{
		public:
			void display()
			{
				cout<<"class 2nd\n";
			}	
	};
}
using namespace first;
main()
{
	a obj;
	obj.display();
	//using namespace second;	
	second::a obj1;
	obj1.display();
}
