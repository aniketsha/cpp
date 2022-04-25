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
		for(j=1,k=0;j<=i+d;j++)
		{
			if(j>i)
			{
				k--;
			}
			else
			{
				k++;
			}
			cout<<k;
		}
		d++;
		cout<<"\n";
	}
}
