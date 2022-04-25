#include<iostream>
using namespace std;
main()
{
	int i,j,k,d;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=4-i;k++)
		{
			cout<<" ";	
		}
		for(j=1;j<=i+d;j++)
		{
			cout<<"*";
		}
		d++;
		cout<<"\n";
	}
}
