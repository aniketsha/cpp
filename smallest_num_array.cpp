#include<iostream>
using namespace std;
main()
{
	int x[5],j,a=0,i;
	for(j=0;j<5;j++)
	{
		cout<<"enter a number";
		cin>>x[j];
	}
	a=x[0];
	for(j=0;j<5;j++)
	{
		if(a>x[j])
		a=x[j];
	}
	cout<<"min"<<a<<"\n";
	for(j=0;j<5;j++)
	{
		if(a<x[j])
		a=x[j];
	}
	cout<<"max"<<a;
}
