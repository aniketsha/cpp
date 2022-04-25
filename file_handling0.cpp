#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name;
	int roll;
	ofstream fout("PR3.txt");
	cout<<"enter a name\n";
	cin>>name;
	cout<<"\nenter roll no\n";
	cin>>roll;
	fout<<name<<"\n"<<roll;
	fout.close();
	cout<<"done";
}
