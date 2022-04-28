#include <iostream>
using namespace std;
void sum(int a,int b)
{
	int c=a+b;
	cout<<c<<"\n";
}
void sum(float a,float b)
{
	float c=a+b;
	cout<<c<<"\n";
}
main()
{
	sum(2,3);
	sum(2.32f,4.56f);
	//cout<<"\n"<<y;
}
