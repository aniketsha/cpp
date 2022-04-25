#include <iostream>
#include <stdlib.h>
#include "test1.h"
using namespace std;
main()
{
	cout<<"hello";
	string con;
	do
	{
		system("cls");
		data d;
		d.select();
		cout<<"do u wanna continue: ";
		cin>>con;
	}
	while(con=="y" || con=="Y");
}
