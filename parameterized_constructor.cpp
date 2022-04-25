#include <iostream>
using namespace std;
class employee{
		int no;
		string name;
		public:
		employee(int n,string s)
		{
			no=n;
			name=s;
			cout<<no<<name;
		}
};
main()
{
	employee e1(1,"ani"); 
	employee e2(2,"dev");
	//e1.employee();
	//e2.employee;
}
