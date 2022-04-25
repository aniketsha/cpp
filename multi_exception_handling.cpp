#include <iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter a number ";
	cin>>a;
	try
	{
		if(a==1)
			throw a;//throwing int	
		else if(a==2)
			throw 'a';//throwing char
		else if(a==3)
			throw 4.3;//throwing double
	}
	catch(int a)
	{
		cout<<"integer exception ";
	}
	catch(char d)
	{
		cout<<"character exception ";
	}
	catch(double c)
	{
		cout<<"float exception ";
	}
}
