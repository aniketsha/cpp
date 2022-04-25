#include<iostream>
using namespace std;
main ()
{
	int a,b,c;
	//string name;
	cout<<"enter 2 number ";
	cin>>a>>b;
	try
	{
		if(b == 0)
			throw "2nd number cant be 0 ";
		c=a/b;
		cout<<c;
	}
	catch(const  char *p)
	{
		cout<<p;
	}
	cout<<"\nend";
}
