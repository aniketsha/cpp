#include <iostream>
#include <fstream>
using namespace std;
main()
{
	int a;
	ifstream fin("numbers.txt");
	ofstream fout2("even.txt");
	ofstream fout3("odd.txt");
	while(fin>>a)
	{
		if(a%2==0)
		{
			fout2<<a<<"\n";
		}
		else
		{
			fout3<<a<<"\n";
		}
	}
	fout2.close();
	fout3.close();
	cout<<"numbers separated successfully";
}
