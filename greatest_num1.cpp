#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"enter any number";
	cin>>a>>b>>c>>d;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout<<a<<"is greatest";
			}
			else
			{
				cout<<d<<"is greatest";
			}
		}
		else
		{
			if(c>d)
			{
				cout<<c<<"is greatest";
			}
			else
			{
				cout<<d<<"is greatest";
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				cout<<b<<"is greatest";
			}
			else
			{
				cout<<d<<"is greatest";
			}
		}
		else
		{
			if(c>d)
			{
				cout<<c<<"is greatest";
			}
			else
			{
				cout<<d<<"is greatest";
			}
		}
	}
}
