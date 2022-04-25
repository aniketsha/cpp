#include <iostream>
using namespace std;
main()
{
	int num1,num2,lcm=1,c;
	cout<<"enter two numbers ";
	cin>>num1>>num2;
	if(num2>num1)
	{
		lcm=num2;
	}
	else
	{
		lcm=num1;
	}
	for(;;)
	{
		if(lcm%num1==0 && lcm%num2==0)
		{
			cout<<lcm;
			break;
		}
		lcm++;
	}
}
