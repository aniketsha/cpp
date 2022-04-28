#include <iostream>
using namespace std;
void swap(int a, int b)
{
	int n=a;
	a=b;
	b=n;
	cout<<"new1 value of a "<<a<<"\n";
	cout<<"new1 value of b "<<b<<"\n";
}
main()
{
	int a,b;
	cout<<"enter two numbers\n";
	cin>>a>>b;
	cout<<"value of a "<<a<<"\n";
	cout<<"value of b "<<b<<"\n";
	swap(a,b);
	cout<<"new value of a "<<a<<"\n";
	cout<<"new value of b "<<b<<"\n";
}
