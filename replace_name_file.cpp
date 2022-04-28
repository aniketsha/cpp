#include <iostream>
#include <fstream>
using namespace std;
main()
{
	string s,d;
	ofstream fout("replace.txt");
	for (int i=1;i<=5;i++)
	{
		cout<<"enter a name: ";
		cin>>s;
		fout<<s<<"\n";
		//cout<<"\n";
	}
	fout.close();
	ifstream fin ("replace.txt");
	ofstream fout2("copied.txt");
	cout<<"enter a name you wanna replace: ";
	cin>>d;
	while(fin>>s)
	{
		cout<<s<<"\n";
		if(s!=d)
		{	
			fout2<<s<<"\n";
		}
	}
	fout2.close();
}
