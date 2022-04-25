#include<iostream>
using namespace std;
main()
{
	int a[5],i,n,d=0,m;
	for(i=0;i<5;i++)
	{
		cout<<"enter a number";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		//n++;
		for(n=0;n<5;n++)
		{
			if(a[i]<a[n])
			{
				m=a[i];
				a[i]=a[n];
				a[n]=m;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\n";
	}
} 
