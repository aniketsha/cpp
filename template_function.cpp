#include <iostream>
using namespace std;
template <class t>
void sum(t a,t b)
{
	t c=a+b;
	cout<<c<<"\n";
}
main()
{
	sum(2,3);
	sum(2.32f,4.56f);
	//cout<<"\n"<<y;
}
