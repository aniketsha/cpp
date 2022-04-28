#include <iostream>
using namespace std;
const float PIE=3.14;
#define MAX 100
void increment()
{
	static int i=1;
	cout<<i<<"\n";
	i++;
} 
main()
{
	int a;
	cout<<MAX<<"\n";
	cout<<PIE<<"\n";
	for(a=1;a<=3;a++)
	{
		increment();
	}
}
