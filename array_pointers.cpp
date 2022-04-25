#include<iostream>
using namespace std;
main()
{
	int a[5],b;
	int *p;
	for(b=0;b<5;b++)
	{
		cout<<"enter a number ";
		cin>>a[b];
	}
	p=a;
	for(b=0;b<5;b++)
	{
		cout<<*(p+b)<<"\n";
	}
}
