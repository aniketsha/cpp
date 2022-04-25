#include<iostream>
using namespace std;
main()
{
	int a,b,c=0,d;
	int x,x1;
	int i=10;
	cout<<"enter a three digit number";
	cin>>x1;
	for(x=x1;x>0;x=x/i)
	{
		int d=x%i;
		c+=d*d*d;
	}
	if(x1==c)
	cout<<x1<<" is armstrong num"<<"\n";
	else
	cout<<x1<<" no"<<"\n";
//	cout<<"sum of its cubes: "<<y+j+k;
}
