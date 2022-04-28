#include<iostream>
using namespace std;
main()
{
	int a;
	int b;
	int c=0;
	for(a=1;a<=10;a++)
	{
		cout<<"enter a number";
		cin>>b;
		if(b>0)
		{
			c+=b;
		}
	}
	cout<<"total"<<"="<<c;
}
