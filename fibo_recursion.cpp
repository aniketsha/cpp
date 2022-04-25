#include <iostream>
using namespace std;
int fibo(int x)
{
	if(x==1 || x== 0)
	return x;
	else
	return(fibo(x-1)+fibo(x-2));
} 
main()
{
	int x,i=0;
	cout<<"enter number of terms";
	cin>>x;
	cout<<"series";
	while(i<x)
	{
		cout<<" "<<fibo(i);
		i++;
	}
}
