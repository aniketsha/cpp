#include <iostream>
using namespace std;
main()
{
	int a,b,c;
	//while(b==0)
	for(int i=1;;i++)
	{
		cout<<"enter two numbers : ";
		cin>>a>>b;
		if(b==0)
		{
			try
			{
				throw "enter a non zero number\n ";
			}
			catch(const char *p)
			{
				cout<<p;
			}
		}
		else
		{
			//cout<<a<<"\n"<<b<<"\n";
			c=a/b;
			cout<<c;
			break;
		}
	}
}	
