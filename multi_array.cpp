#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter range of matrices \n";
	cin>>n;
	int a[n][n],b[n][n],c[n][n],i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"enter a number";
			cin>>a[i][j];
		}
	}
	cout<<" \n for another matrice \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"enter a number";
			cin>>b[i][j];
		}
	}
	cout<<"\n 1st matrices \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"\n 2nd matrices \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			int m=a[i][k]*b[k][j];
			k++;
			int n=m+(a[i][k]*b[k][j]);
			k++;
			c[i][j]=n+(a[i][k]*b[k][j]);
		}
	}
	cout<<"\n new matrice \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<c[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
