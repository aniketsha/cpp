#include <iostream>
#include <fstream>
using namespace std;
main()
{
	string name;
	ofstream fout("pr3.txt");
	for(int i=1;;)
	{
		string conti;
		cout<<"enter a name : ";
		cin>>name;
		fout<<name<<"/n";
		cout<<"\ndo u wanna contine :";
		cin>>conti;
		if(conti=="no")
		{
			fout.close();
			break;
		}
	}
}
