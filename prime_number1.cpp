#include<iostream>
using namespace std;
main()
{
	int a;
	int b;
	cout<<"enter a number";
	cin>>a;
	for(b=2;b<=a/2;b++)
	{
		if(a%b==0)
		{
			break;
		}
	}
	if(b==a/2+1)
	cout<<"pm";
    else
	cout<<"not pm";
}
