#include <iostream>
using namespace std;
main()
{
	int num1,num2,lcm=1,c;
	cout<<"enter two numbers ";
	cin>>num1>>num2;
	if(num2>num1)
	{
		c=num1;
		num1=num2;
		num2=c;
	}
	//cout<<"largest number: "<<num1;
	//cout<<"\nsmallest number: "<<num2;
	for(int i=2;i<=num2;)
	{
		if(num1%i==0 && num2%i==0)
		{
			lcm=i*lcm;
			int b=num1/i;
			int d=num2/i;
			if(b==1 || d==1)
			{
				lcm=b*d*lcm;
				break;
			}
			cout<<lcm<<"\n";
		}
		if((num1%i !=0) && (num2%i !=0))
		{
			i++;
		}
	}
	cout<<lcm;
}
