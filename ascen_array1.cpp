#include<iostream>
using namespace std;
main()
{
	int a[5],i,n,m;
	for(i=0;i<5;i++)
	{
		cout<<"enter a number";
		cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
		for(n=0;n<4-i;n++)
		{
			if(a[n]>a[n+1])
			{
				m=a[n];
				a[n]=a[n+1];
				a[n+1]=m;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\n";
	}
} 
