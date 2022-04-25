#include <iostream>
using namespace std;
class dam{
	public:
		void area(int a)
		{
			cout<<"area of square : "<<a*a;
		}
		void area(int a,int b)
		{
			cout<<"area of rectangle: "<<a*b;
		}
		void area(int a,int b,int c)
		{
			cout<<"area of cube: "<<a*b*c;
		}
};
main()
{
	dam f1;
	f1.area(2,3,4);
	f1.area(2,3);
	f1.area(2);
}
