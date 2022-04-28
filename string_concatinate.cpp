#include<iostream>
using namespace std;
void concate(char name[], char name1[])
{
	int n;
	for(n=0;name[n] !='\0';n++)
	{
			cout<<name[n];
	}
	n=0;
		while(name1[n] !='\0')
			{
				cout<<name1[n];
				n++;
			}
}
main()
{
	char name[]={'a','n','i','\0'};
	char name1[]={'k','e','t','\0'};
	concate(name,name1);
}
