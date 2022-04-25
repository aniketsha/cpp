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
main()
{
	first::a obj;
	obj.display();
	second::a obj1;
	obj1.display();
}
