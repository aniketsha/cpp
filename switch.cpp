#include<iostream>
using namespace std;
main()
{
	char day;
	cout<<"enter a number";
	cin>>day;
	switch(day)
	{
		case '0':
			cout<<"sunday";
			break;
		case '1':
			cout<<"monday";
			break;
		case '2':
			cout<<"tuesday";
			break;
		case '3':
			cout<<"wednesday";
			break;
		case '4':
			cout<<"thursday";
			break;
		case '5':
			cout<<"friday";
			break;
		case '6':
			cout<<"saturday";
			break;
		default:
			cout<<"invalid";
	}
}
