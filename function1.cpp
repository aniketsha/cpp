#include <iostream>
using namespace std;
void sum(int a, int b)
{
	int c=a+b;
	cout<<"sum"<<c<<"\n";
}
void sub(int a, int b)
{
	int c=a-b;
	cout<<"\nsub"<<c;
}
main()
{
	int a,b;
	cout<<"enter numbers";
	cin>>a>>b;
	sub(a,b);
	sum(a,b);
}
