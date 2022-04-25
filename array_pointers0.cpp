#include<iostream>
using namespace std;
int* display()
{
	static int a[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter a number";
		cin>>a[i];
	}
	return a;
}
main()
{
	int *p;
	p=display();
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<<"\n";
	}
}

