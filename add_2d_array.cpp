#include<iostream>
using namespace std;
main()
{
	int a[2][3],i,j,b[2][3],c[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<"enter a number of Ist matrices ";
			cin>>a[i][j];
		}
	}
	cout<<"\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<"enter a number of 2nd matrices ";
			cin>>b[i][j];
		}
	}
	cout<<"\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		cout<<"\n";
	}
	cout<<"Ist matrices:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"2nd matrices:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"new matrices:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<c[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
