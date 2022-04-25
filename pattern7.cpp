#include<iostream>
using namespace std;
main()
{
	int i,j;
	int n=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			n+=1;
			cout<<n<<" ";
		}
		cout<<"\n";
	}
}
