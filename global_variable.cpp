#include <iostream>
using namespace std;
int d=0;
void sum()
{
	cout<<d<<"\n";
	d=10;
}
main()
{
	cout<<d<<"\n";
	sum();
	cout<<d;
}
