#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter any number";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is greatest";
		}
		else
		{
			cout<<c<<" is greatest";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<b<<"is greatest";
		}
		else
		{
			cout<<c<<"is greatest";
		}
	}
}
