#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	if(isalnum(n))
	{
		printf("var1 = |%c| is an alphabet\n", n );
		cout<<n<<" is alphanumeric \n";
	}
	else
	{
		printf("var1 = |%c| is not an alphabet\n", n );
		cout<<n<<" is not alphanumeric \n";
	}
//	if(isalnum(s))
//		cout<<s<<" is alphanumeric \n";
//	else
//		cout<<s<<" is not\n";
}
