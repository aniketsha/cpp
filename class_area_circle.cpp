#include <iostream>
using namespace std;
#define PIE 3.14
class circle{
	int radius;
	public :
		circle(int r)
		{
			radius=r;
			float a=PIE*radius*radius;
			cout<<"area :"<<a;
		}
		void perimeter(int r)
		{
			radius=r;
			float p=2*PIE*radius;
			cout<<"\nperimeter :"<<p;
		}
};
main()
{
	int r;
	cout<<"enter value of radius :";
	cin>>r;
	circle c(r);
	c.perimeter(r);
}
