#include <iostream>
using namespace std;
void display(int x[][4], int n,int r)
{
	for(int z=0;z<n;z++)
	{
		for (int i=0; i<r;i++)
		{
			cout<<x[z][i]<<"  ";
		}
		
	cout<<"\n";
	}
}

main()
{
	int c[2][4];
	int a[][4]={{10,20,30,40},{1,2,3,4}};
	int b[][4]={{30,20,60,40},{1,2,3,4}};
	for(int s=0;s<2;s++)
	{
		for(int n=0;n<4;n++)
		{
			c[s][n]=a[s][n]+b[s][n];
		}
	}
	display(a,2,4);
	display(b,2,4);
	display(c,2,4);
}
