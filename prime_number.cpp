#include<iostream>
using namespace std;
main()
{
	int a;
	int b;
	int c=0;
	cout<<"enter a number";
	cin>>a;
	int d=a/2;
	for(b=1;b<=d;b++)
	{
		if(a%b==0)
		{
			c++;
		}
	}
	if(c>2)
	cout<<"not prime number";
	else
	cout<<"prime number";
}
