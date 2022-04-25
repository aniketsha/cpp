#include<iostream>
#include <fstream>
using namespace std;
main()
{
	string n,d;
	cout<<"enter the name u wanna search: ";
	cin>>d;
	int c=0,loc=0;
	ifstream fin("names.txt");
	for(int i=0;i<3;i++)
	{
		fin>>n;
		if(n==d)
		{
			c=1;
			loc=fin.tellg();
		}
	}
	if(c==1)
	{
		cout<<"\nyes its there \n";
		cout<<"position "<<loc;
	}
	else
	{
		cout<<"not there ";
	}
}
