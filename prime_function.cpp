#include <iostream>
using namespace std;
void prime(int a)
{
	int b=2;
	for(;b<=a/2;b++)
	{
		if(a%b==0)
		break;
	}
	if(b==a/2+1)
	{
		cout<<a<<"\n";
	}
}
main()
{
	for(int a=1;a<=100;a++)
	{
		prime(a);
	}
}
