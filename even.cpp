#include<iostream>
using namespace std;
main()
{
	int n,d,j,k;
	cout<<"enter the range of array";
	cin>>n;
	int a[n],even[n],odd[n],i,e=0,o=0;
	for(i=0;i<n;i++)
	{
		cout<<"enter a number ";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[e++]=a[i];
		}
		else
		odd[o++]=a[i];
	}
	cout<<"\n even array \n";
	for(i=0;i<e;i++)
	{
		cout<<even[i]<<"\n";
	}
	cout<<"\n odd array \n";
	for(i=0;i<o;i++)
	{
		cout<<odd[i]<<"\n";
		
	}
}
