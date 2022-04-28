#include <iostream>
using namespace std;
void copy(char p[],int l)
{
	char stringcopy[l];
	for(int i=0; i<l;i++)
	{
		//cout<<p[i];
		stringcopy[i]=p[i];
	}	
	cout<<stringcopy;
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
void display(char p[],int l)
{
	int i=0;
	while(p[l] !='\0')
	{
		cout<<p[i];
		i++;
	}
}
main()
{
	char p[]={'a','n','i','\0'};
	int l=length(p);
	cout<<l<<"\n";
	copy(p,l);
	//display(copied,l);
}
