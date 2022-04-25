#include<iostream>
using namespace std;
main()
{
	int h=3;
	int w=3;
	int a[h][w],temp,c[h][w];
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<"enter a number ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
	for(int i=0;i<h;i++)
	{
		int wiedth=w;
		for(int j=0;j<w/2;j++)//j<w/2
		{
			temp =a[i][j];
			a[i][j]=a[i][--wiedth];
			a[i][wiedth]=temp;
//			b[i][j]=a[i][j];
//			a[i][j]=a[i][w-(j+1)];
//			a[i][w-(j+1)]=b[i][j];
		}
		cout<<"\n";
	}
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
