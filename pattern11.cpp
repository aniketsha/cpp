#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i+j<=4 || j-i>=4)
			cout<<" ";
			else
			cout<<"*";	
		}
		cout<<"\n";
	}
}
/*main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		int n=1,k;
		for(j=1;j<=7;j++)
		{
			if(i+j<=4 || j-i>=4)
			cout<<" ";
			else
			{
				if(n<i)
					cout<<n++;
				else if (n==i)
				{
					k=n;
					n++;
					cout<<k--;
				}
				else
					cout<<k--;	
			}	
		}
		cout<<"\n";
	}
}*/
