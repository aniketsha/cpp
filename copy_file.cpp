#include<iostream>
#include<fstream>
using namespace std;
void writefile(char* filename)
{
	string name;
	ofstream fout(filename);
	for(int i=0;i<5;i++)
	{
		cout<<"enter a name: ";
		cin>>name;
		fout<<name<<"\n";
	}
	fout.close();
}
void readfile(char* filename)
{
	string name;
	ifstream fin(filename);
	while(fin>>name)
	{
		cout<<name<<"\n";
	}
}
main()
{
	char *filename="texts.txt";
	writefile(filename);
	readfile(filename);
}
