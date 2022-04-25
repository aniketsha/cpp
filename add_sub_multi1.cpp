#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter any 2 numbers";
	char ch;
	cin>>a>>b;
	cin>>ch;
	if(ch=='+')
	{
		cout<<a+b;
	}
	else if(ch=='-')
	{
		cout<<a-b;
	}
	else if(ch=='*')
	{
		cout<<a*b;
	}
	else
	{
		cout<<"invalid";
	}
}
