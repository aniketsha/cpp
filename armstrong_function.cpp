#include <iostream>
using namespace std;
void arm(int a)
{
	int c=0,d=0,b=a;
	for(;b>0;b=b/10)
	{
		d=b%10;
		c+=d*d*d;
	}
	if(c==a)
	cout<<a<<"armstrong number\n";
}
main()
{
	int a;
	for(a=1;a<=1000;a++)
	{
		arm(a);
	}
}
