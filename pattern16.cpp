#include<iostream>
using namespace std;
main()
{
	int i,j,k,n,d,m=1;
	for(i=1;i<=4;i++)
	{
		for(j=1,d=1,m=1;j<=7;j++)
		{
			if(i+j<=4 || j-i>=4)
			cout<<" ";
			else
			{
				cout<<m++;
				
			}
		}
		d++;
		cout<<"\n";
	}
}
