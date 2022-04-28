#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter the number till you wanna check: ";
	cin>>n;
	int d=0;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i/2+1)
		{
			cout<<i<<"\n";
			d++;
		}
	}
	cout<<"total"<<d;
}
