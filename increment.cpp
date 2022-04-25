#include <iostream>
using namespace std;
int i=0;
int num()
{
	i++;
	return(i);
}
main()
{
	int a;
	for(a=1;a<=5;a++)
	{
		int x=num();
		cout<<x<<"\n";
	}
}
