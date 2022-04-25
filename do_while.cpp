#include<iostream>
using namespace std;
main()
{
	int i,a;
	int c=0;
	char z;
	i=1;
	do
	{
		cout<<"enter a number"<<"\n";
		cin>>a;
		cout<<"do u wanna continue"<<"\n";
		cin>>z;
		if(z=='y')
		{
			i++;
		}
		else if(z=='n')
		{
			break;
		}
	}
	while(z='n');
	c+=a;
	cout<<"total"<<c;
}
