#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter range of identity matrix ";
	cin>>n;
	int a[n][n],i,j,d=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=0;	
			}
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
} 
