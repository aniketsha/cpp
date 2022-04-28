#include <iostream>
using namespace std;
main()
{
	int num,d=1;
	cout<<"enter the num : ";
	cin>>num;
	for(int i=num;i>0;i--)
	{
		d*=i;
	}
	cout<<d; 
}
