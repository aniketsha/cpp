#include <iostream>
#include <fstream>
using namespace std;
main()
{
	char ch;
	ofstream fout;
	fout.open("demo.txt");
	do
	{
		ch=cin.get();
		fout.put(ch);
	}
	while(ch!='e');
	fout.close();
	cout<<"done\n";
	ifstream fin;
	fin.open("demo.txt");
	cout<<"\nData\n";
	while(fin){ //eof = end of file
		ch=fin.get();
		cout.put(ch);
	}
	fin.close();
}
