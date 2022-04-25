#include<iostream>
using namespace std;
main()
{
	int a,b,c=0,d=0;
	int x,x1;
	int i=10;
	for(x1=1;x1<=1000;x1++)
	{
		c=0;
		for(x=x1;x>0;x=x/i)
		{
			int d=x%i;
			c+=d*d*d;
		}
		if(x1==c)
		{
			cout<<x1<<" is armstrong num"<<"\n";
			d++;
		}
	}
	cout<<"total"<<d;
//	cout<<"sum of its cubes: "<<y+j+k;
}
