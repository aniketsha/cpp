#include <iostream>
using namespace std;
main ()
{
	int x=5;
	int *p;  // * -->pointer 
	p=&x;	// & -->address
	cout<<p<<"\n";	//address of x
	cout<<*p<<"\n";	//value of x
	cout<<x<<"\n";	
	cout<<&x<<"\n";	//address of x
	cout<<&p<<"\n"; //address of p
	x=10;
	cout<<*p<<"\n";
	cout<<x;
}
