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
class rectangle:virtual public shape{
	public:
		int length;
		int breadth;
		rectangle(int length=0,int breadth=0):length(length),breadth(breadth){
		}
		void displayr()
		{
			cout<<"length of rectangle: "<<length<<"\n";
			cout<<"breadth of rectangle: "<<breadth<<"\n";
		}
};
class circle:virtual public shape{
	public:
		int radius;
		circle(int radius=0):radius(radius){
		}
		void displayc()
		{
			cout<<"radius of circle "<<radius<<"\n";
		}
};
class cone:public rectangle,public circle{
	public:
		int height;
		cone(int height=0,int length=0,int breadth=0,int radius=0):rectangle(length,breadth),circle(radius),height(height){
		}
		
		void displayo()
		{
			extral=8;
			cout<<"height of cone "<<height<<"\n";
			cout<<"length of cone "<<length<<"\n";
			cout<<"breadth of cone "<<breadth<<"\n";
			cout<<"radius of cone "<<radius<<"\n";
			cout<<"extra length of cone "<<extral<<"\n";
			//cout<<"extra length of cone through cir "<<extra<<"\n";
		}
};
main()
{
	cone c(1,2,3,4);
	c.displayo();
}
