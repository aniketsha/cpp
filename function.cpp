#include <iostream>
using namespace std;
void sum()
{
	int a,c,b;
	cout<<"enter 2 numbers";
	cin>>a>>b;
	c=a+b;
	cout<<"sum"<<c;
}
void sub()
{
	int a,b,c;
	cout<<" \nenter 2 numbers";
	cin>>a>>b;
	c=a-b;
	cout<<"sub"<<c;
}
main()
{
	sum();
	sub();
}
