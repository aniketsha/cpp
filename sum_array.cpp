#include<iostream>
using namespace std;
main()
{
	int x[5],i,j[5],sum[5],k;
	for(i=0;i<5;i++)
	{
		cout<<"enter a number";
		cin>>x[i];
	}
	cout<<"\n";
	for(i=0;i<5;i++)
	{
		cout<<"enter a number";
		cin>>j[i];
	}
	cout<<"\n"<<"new array"<<"\n";
	for(i=0;i<5;i++)
	{
		sum[i]=j[i]+x[i];
		cout<<sum[i]<<"\n";
	}
}
