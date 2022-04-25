#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i+j<=4)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<"\n";
	}
}
