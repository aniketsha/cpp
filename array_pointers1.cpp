#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a[3] = {10,20,30};
	int *p;
	 p = a;
	for(int i = 0; i < 3; i++)
	{
		cout<<*(p + i);
	}
	getch();
}
