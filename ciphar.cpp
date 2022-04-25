#include <iostream>
using namespace std;
main ()
{
	int a=0,d;
	char c;
	string s;
	cout<<"enter a name: ";
	cin>>s;
	//for(int i=0;)
	while(s[a] != '\0')//'\0' is null charachter
	{
		a++;
	}
//	for(int i=0;i<a;i++)
//	{
//		int x=s[i];
//		//cout<<x;
//	}
	for(int i=0;i<a;i++)
	{
		if(s[i]<'Z' && s[i]>'A')
		{
			s[i]=s[i]+13;
			if(s[i]>'Z')
			{
				s[i]=s[i]-26;
			}
		}
		else if(s[i]<'z' && s[i]>'a')
		{
			s[i]=s[i]+13;
			if(s[i]>'z')
			{
				s[i]=s[i]-26;
			}
		}	
	}
	cout<<s;
}
