#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the range of row and columns \n";
	cin>>n;
	int a[n][n],i,j,d=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"enter a number";
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]==1)
				{
					d++;
				}
			}
			else if(i!=j)
			{
				if(a[i][j]==0)
				d++;	
			}	
		}
	}
	if(d>=(n*n))
	cout<<"identity matrice \n";
	else
	cout<<"no \n";
}
