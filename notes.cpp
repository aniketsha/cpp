#include <iostream>
using namespace std;
int input()
{
	int n;
	cout<<"enter the amount";
	cin>>n;
	return n;
}
int thou(int x)
{
	int c=0;
	//cout<<x;
	if(x>=2000)
	{
		c=x/2000;
		x=x%2000;
		//cout<<"\n"<<x;
		//cout<<"\n"<<c;
		cout<<"\nnotes of 2000: "<<c;
	}
	return x;
}
int fiveh(int y)
{
	if(y>=500)
	{
		int c=y/500;
		y=y%500;
		cout<<"\nnotes of 500: "<<c;
	}
		return y;
}
void hun(int z)
{
	if(z>100)
	{
		int c=z/100;
		z=z%100;
		cout<<"\nnotes of 100: "<<c;
	}
	return z;
}
main()
{
	int x=input();
	int y=thou(x);
	int z=fiveh(y);
	int d=hun(z);
		cout<<"\nruppes: "<<d;
}
