#include <iostream>
using namespace std;
main()
{
	int num1,num2;
	cout<<"enter a numbers ";
	cin>>num1>>num2;
	if(num1<num2)
	{
		int c=num2;
		num2=num1;
		num1=c;
	}
	int hcf;
	for(int i=1;i<num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
	}
	cout<<"hcf of "<<num1<<" and "<<num2<<" is "<<hcf;
}
