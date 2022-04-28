#include <iostream>
using namespace std;
main()
{
	int num;
	int d=0;
	cout<<"enter a number: ";
	cin>>num;
	for(int i=1;i<num;i++)
	{
		if(num%i==0 && num!=1)
		{
			int b=num/i;
			//cout<<i<<"\n";
			d+=i;
			if(num==1)
			{
				break;
			}
		}
	}
	if(d==num)
	{
		cout<<num<<" is proper number";
	}
	else
		cout<<a<<" is not proper number ";		
}
