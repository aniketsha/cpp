#include <iostream>
#include <fstream>
using namespace std;
main()
{
	ofstream fout("PR3.txt");
	fout<<"hello,world";
	fout.close();
	cout<<"success";
}
