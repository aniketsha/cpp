#include<iostream>
using namespace std;
main()
{
	int a=123;
	int i=10;
	int d;
	for(d=a;d>0;d=d/i)
	{
		cout<<d%i<<"\n";
	}
}
