#include <iostream>
using namespace std;
#define PIE 3.14
class shape{
	public:
		virtual void area()=0;//pure virtual	function
};
class circle:public shape{
	int radius;
	int a;
	public:
		circle(int r):radius(r){
		}
		circle()
		{
			cout<<"\nenter radius: ";
			cin>>radius;
		}
		void area()
		{
			a=PIE*radius*radius;
			cout<<"\narea of circle : "<<a;
		}
};
class rectangle:public shape{
	int length,breadth;
	int a;
	public:
		rectangle(int l,int b):length(l),breadth(b){
		}
		rectangle()
		{
			cout<<"\nenter length: ";
			cin>>length;
			cout<<"\nenter breadth: ";
			cin>>breadth;
		}
		void area()
		{
			a=length*breadth;
			cout<<"\narea of rectangle : "<<a;
		}
};
main()
{
	circle ci;
	shape *s;
	s=&ci;
	s->area();
	rectangle r;
	s=&r;
	s->area();
}
