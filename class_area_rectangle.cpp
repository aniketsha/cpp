#include <iostream>
using namespace std;
class rectangle{
	int length,breadth;
	public:
	rectangle(int l, int b)
	{
		length=l;
		breadth=b;
	}
	void area()
	{
		int a=length*breadth;
		cout<<"area : "<<a;
	}
	void perimeter()
	{
		int p= 2*(length + breadth);
		cout<<"\nperimeter : "<<p;
	}
};
main()
{
	int l,b;
	cout<<"enter value of length :";
	cin>>l;
	cout<<"enter value of breadth : ";
	cin>>b;
	rectangle r(l,b);
	r.area();
	r.perimeter();
}
