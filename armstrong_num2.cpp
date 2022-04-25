#include<iostream>
using namespace std;
main()
{
	int a;
	int i=10;
	for(a=1;a>=0;a=a/i)
	{
		cout<<a%i;
		if(a==1)
		cout<<a<<"\n";
	}
}
