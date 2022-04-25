#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter any 2 numbers";
	char ch;
	cout<<"add or sub or multi";
	cin>>a>>b;
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		default:
			cout<<"invalid";
	}
}
