#include<iostream>
using namespace std;
main()
{
	int a;
	int b;
	int c=1;
	int d;
	cout<<"enter value of base"<<"\n";
	cout<<"enter value of power"<<"\n";
	cin>>a>>b;
	for(d=1;d<=b;d++)
	{
		c=a*c;
	}
	cout<<c;
}
