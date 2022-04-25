#include <iostream>
#include <fstream>
using namespace std;
main()
{
/*	string name;
	getline(cin,name);
	cout<<name<<"\n";*/
	
	string s;
	ifstream fin("pr3.txt");
	getline(fin,s);
	cout<<s;
}
