#include<iostream>
using namespace std;
void name(int number)
{
	switch(number)
	{
		case 1:
			cout<<" one ";
				break;
			case 2:
				cout<<" two ";
				break;
			case 3:
				cout<<" three ";
				break;
			case 4:
				cout<<" four ";
				break;
			case 5:
				cout<<" five ";
				break;
			case 6:
				cout<<" six ";
				break;
			case 7:
				cout<<" seven ";
				break;
			case 8:
				cout<<" eight ";
				break;
			case 9:
				cout<<" nine ";
				break;
			case 0:
				cout<<" zero ";
				break;
		}
}
main()
{
	int num;
	int number,d=0;
	cout<<"enter any number ";
	cin>>num;
	if(num>10)
	{
		for(int i=num;i>=0;)
		{
			name(i);
			i=i/10;
			//name(i);
			i=i%10;
			if(i==0)
				break;
			//name(number);
			name(i);
		}	
	}
	else
		name(num);
}
//
//		do
//		{
//			d=num/10;
//			if(d>10)
//			{
//				int e=d/10;
//				name(e);
//				int f=d%10;
//				name(f);
//			}
//			else
//				name(d);
//			number=num%10;
//			name(number);
//		}
//		while(number>=10);
