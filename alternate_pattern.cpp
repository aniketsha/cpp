#include <iostream>
using namespace std;
main()
{
	int k=1,n=1;
	for(int i=1;i<=4;i++)
	{
		for(int a=3;a>=i;a--)
		{
			cout<<" ";
		}
		k=1;
		for(int j=1;j<=2*i-1;j++)
		{
			if(j<i)
			{
				cout<<k;
				k++;
			}
			else if(j==i)
			{
				n=i;
				cout<<n--;
			}
			else
			{
				cout<<n--;
			}
		}
		cout<<"\n";
	}
}
