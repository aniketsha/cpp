#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
	int c=*p1;
	*p1=*p2;
	*p2=c;
	cout<<"new1 value of a "<<*p1<<"\n";
	cout<<"new1 value of b "<<*p2<<"\n";
}
main()
{
	int a,b;
	cout<<"enter a number\n";
	cin>>a>>b;
	cout<<"value of a "<<a<<"\n";
	cout<<"value of b "<<b<<"\n";
	swap(&a,&b);
	cout<<"new value of a "<<a<<"\n";
	cout<<"new value of b "<<b<<"\n";
}
