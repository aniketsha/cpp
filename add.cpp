#include<iostream>
using namespace std;
main()
{
	int a,b;
	int c=0;
	for(a=1;a<=5;)
	{
		cout<<"enter a number";
		cin>>b;
		if(b<0)
		{
		cout<<"enter only +ve number"<<"\n";
		
		}
		else
		{
			a++;
			c+=b;
		}
	}
	cout<<c;
	
}
