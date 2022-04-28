#include<iostream>
using namespace std;
main()
{
	int i;
	char a;
	int b=0;
	while(a='n')
	{
		cout<<"enter a number"<<"\n";
		cin>>i;
		cout<<"do u wanna continue"<<"\n";
		cin>>a;
		if(a=='y')
		{
			i++;
		}
		else if(a=='n')
		{
			break;
		}	
	}
	b+=i;
	cout<<"total: "<<b;
}
