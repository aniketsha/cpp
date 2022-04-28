#include <iostream>
#include <fstream>
using namespace std;
main ()
{
	ofstream fout("names.txt");
	cout<<"written pointer is on "<<fout.tellp()<<"\n";
	fout<<"aniket ";
	fout.seekp(ios::cur + 20);
	cout<<"written pointer is on "<<fout.tellp()<<"\n";
	fout<<"damia ";
	cout<<"written pointer is on "<<fout.tellp()<<"\n";
	//fout.seekp(ios::cur + 20);
	//p=put (used while writting)
	//g=get (used while reading)
	//tellp is used to get position of pointer
	//getp is used to change position of pointer 
	// ios::cur for current location
	// ios::beg for begginnig 
	// ios::end for the end position 
	fout<<"prabhjot ";
	cout<<"written pointer is on "<<fout.tellp()<<"\n";
	cout<<"done\n";
	fout.close();
	string n;
	ifstream fin("names.txt");
	for(int i=0;i<3;i++)
	{
		fin>>n;
		if(i!=1)//skipping name in 2nd position
		cout<<n<<"\n";
		//cout<<n;
	}
}
