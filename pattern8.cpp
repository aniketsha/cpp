#include<iostream>
using namespace std;
main()
{
	int i,j;
	char y='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<y<<" ";
			y+=1;
		}
		cout<<"\n";
	}
}
