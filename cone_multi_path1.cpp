#include <iostream>
using namespace std;
class shape{
	public:
		int extral;
		shape(int extral=0):extral(extral){
		}
		void display()
		{
			cout<<"im shape\n";
		}
};
class rectangle:public shape{
	public:
		int length;
		int breadth;
		rectangle(int length=0,int breadth=0,int extral=0):shape(extral),length(length),breadth(breadth){
		}
		void displayr()
		{
			cout<<"length of rectangle: "<<length<<"\n";
			cout<<"breadth of rectangle: "<<breadth<<"\n";
		}
};
class circle:public shape{
	public:
		int radius;
		circle(int radius=0,int extral=0):shape(extral),radius(radius){
		}
		void displayc()
		{
			cout<<"radius of circle "<<radius<<"\n";
		}
};
class cone:public rectangle,public circle{
	public:
		int height;
		cone(int height=0,int length=0,int breadth=0,int radius=0,int extral=0,int extra=0):rectangle(length,breadth,extral),circle(radius,extra),height(height){
		}
		void displayo()
		{
			cout<<"height of cone "<<height<<"\n";
			cout<<"length of cone "<<length<<"\n";
			cout<<"breadth of cone "<<breadth<<"\n";
			cout<<"radius of cone "<<radius<<"\n";
			cout<<"extra length of cone through rec "<<rectangle::extral<<"\n";
			cout<<"extra length of cone through cir "<<circle::extral<<"\n";
		}
};
main()
{
	cone c(1,2,3,4,5,6);
	c.displayo();
}
