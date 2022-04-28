#include <iostream>
#include <fstream>
using namespace std;
main()
{
	string a;
	ifstream fin("PR3.txt");
	while(fin>>a)
	{
		cout<<a<<"\n";
	}
}
