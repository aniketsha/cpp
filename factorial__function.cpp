#include <iostream>
using namespace std;
void fac(int x)
{
	int b,c;
	for(b=x;b>=1;b--)
	{
		c*=b;
		cout<<b<<"*";
	}
	cout<<"\b="<<c;
}
main()
{
	int a;
	cout<<"enter a number ";
	cin>>a;
	fac(a);
}
