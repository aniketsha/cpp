#include <iostream>
using namespace std;
struct fraction
{
	int numerator;
	int denomerator;	
	void input()
	{
		cout<<"enter numertor for fraction: ";
		cin>>numerator;
		cout<<"enter denomertor for fraction: ";
		cin>>denomerator;
	}
};
int multiply(fraction f,fraction f1)
{
	int c;
	c=(f.numerator/f.denomerator)*(f1.numerator/f1.denomerator);
	return c;
}
main()
{
	fraction f,f1;
	f.input();
	f1.input();
	int result=multiply(f,f1);
	cout<<"answer: "<<result;
}
