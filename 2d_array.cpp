#include<iostream>
using namespace std;
main()
{
	int a[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<"enter a number ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
