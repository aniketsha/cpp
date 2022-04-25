#include <iostream>
#include <fstream>
using namespace std;
main()
{
	string name;
	cout<<"enter your name : ";
	getline(cin,name);
	ofstream fout("pr3.txt");
	//getline(fout,s);
	fout<<name;
	fout.close();
}
