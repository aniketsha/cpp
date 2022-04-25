#include <iostream>
using namespace std;
class overloading{
	public:
		void sum(int a, int b)
		{
			cout<<"\n sum of integer :"<<a+b;
		}
		void sum(double a, double b)
		{
			cout<<"\n sum of doubles :"<<a+b;
		}
		void sum(float a, float b)
		{
			cout<<"\n sum of floats :"<<a+b;
		}
		void sum(int a, float b)
		{
			cout<<"\n sum of one int and one float :"<<(float)a+b;
		}
};
main()
{
	overloading o;
	o.sum(2,3);//passing two int  
	o.sum(5.33,8.23);//passing two doubles
	o.sum(3.3f,3.3f);//passing two floats
	o.sum(2,2.3f);//passing one int and one float
}

