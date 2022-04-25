#include<iostream>
using namespace std;
main()
{
	int a;
	int b;
	int c;
	cout<<"enter a number";
	cin>>b;
	for(a=b;a>=1;a--)
	{
		c*=a;
		cout<<a<<"*";
	}
	cout<<"\b="<<c;
}
