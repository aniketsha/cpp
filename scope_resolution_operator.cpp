#include <iostream>
using namespace std;
class employee{
	public: void display();
};
void employee::display()
{
	cout<<"hello";
}
main()
{
	employee e;
	e.display();
}
