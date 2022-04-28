#include <iostream>
using namespace std;
void compare(int n,int n1)
{
	if(n==n1)
		cout<<"0";
	else if(n<n1)
		cout<<"-ve value";
	else
		cout<<"+ve value";
}
int length(char p[])
{
	int a=0;	
	while(p[a] !='\0')
	{
		a++;
	}
	return a;
}
main()
{
	char name[]={'a','n','i','d','\0'};
	int n=length(name);
	char name1[]={'k','e','t','\0'};
	int n1=length(name1);
	compare(n,n1);
}
