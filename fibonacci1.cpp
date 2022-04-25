#include<iostream>
using namespace std;
main()
{
	int a=0;
	int b=1;
	int c;
	int d;
	cout<<a<<"\n";
	for(d=1;d<=10;d++)
	{
		c=a+b;
		cout<<c<<"\n";
		a=b;
		b=c;
	}
}
