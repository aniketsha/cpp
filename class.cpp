#include <iostream>
using namespace std;
class employee
{
	int id;
	string name;
	public:
	void insert(int i, string n)
	{
		id=i;
		name=n;
	}
	void display()
	{
		cout<<id<<" "<<name<<"\n";
	}
};
main()
{
	employee e1,e2;
	e1.insert(201, "dev");
	e2.insert(202, "ani");
	e1.display();
	e2.display();
}
