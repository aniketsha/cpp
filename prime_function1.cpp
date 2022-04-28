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
	cout<<a<<"prime number \n";
	else
	cout<<"not pm \n";
}
main ()
{
	int a,b,c=0;
	cout<<"enter a number";
	cin>>a;
	prime(a);
}
