#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter any number";
	cin>>a;
	if(a%2==0)
	{
		if(a%3==0)
		{
			cout<<a<<"is divisible by both";
		}
		else
		{
			cout<<a<<"only divisble by 2";
		}
	}
	else
	{
		if(a%3==0)
		{
			cout<<a<<"only divisible by 3";
		}
		else
		{
			cout<<a<<"not divisible by 2 or 3";
		}
	}
}
