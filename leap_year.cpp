#include <iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter a year: ";
	cin>>a;
	if(a%100==0)
	{
		if((a/100)%4==0)
		{
			cout<<"its leap year";
		}
		else
		{
			cout<<"not leap year";
		}
	}
	else
	{
		if(a%4==0)
		{
			cout<<"leap year";
		}
		else
		{
			cout<<"not leap year";
		}
	}
}
