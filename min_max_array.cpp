#include<iostream>
using namespace std;
main()
{
	int a[5],i,b=0;
	for(i=0;i<5;i++)
	{
		cout<<"enter a number";
		cin>>a[i];
	}
	b=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<b)
		{
			b=a[i];
		}
	}
	cout<<b<<"is min \n";
	for(i=0;i<5;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
	}
	cout<<b<<"is max";
}
