#include <iostream>
using namespace std;
main ()
{
	int n,i,j;
	cout<<"enter the number till u wanna check : ";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i/2+1)
		{
			if(i%j==0)
			{
				cout<<i<<"\n";
			}
		}
	}
}
